#include "esphome.h"

// Power commands
uint8_t OPTOMA_POWER_ON[] = { 0x7E, 0x30, 0x30, 0x30, 0x30, 0x20, 0x31, 0x0D };
uint8_t OPTOMA_POWER_OFF[] = { 0x7E, 0x30, 0x30, 0x30, 0x30, 0x20, 0x30, 0x0D };

// Source commands
uint8_t OPTOMA_SOURCE_HDMI1[] = { 0x7E, 0x30, 0x30, 0x31, 0x32, 0x20, 0x31, 0x0D };
uint8_t OPTOMA_SOURCE_HDMI2[] = { 0x7E, 0x30, 0x30, 0x31, 0x32, 0x20, 0x31, 0x35, 0x0D };
uint8_t OPTOMA_SOURCE_VGA[] = { 0x7E, 0x30, 0x30, 0x31, 0x32, 0x20, 0x35, 0x0D };
uint8_t OPTOMA_SOURCE_VGA2[] = { 0x7E, 0x30, 0x30, 0x31, 0x32, 0x20, 0x36, 0x0D };
uint8_t OPTOMA_SOURCE_VIDEO[] = { 0x7E, 0x30, 0x30, 0x31, 0x32, 0x20, 0x31, 0x30, 0x0D };

// Logo commands
uint8_t OPTOMA_LOGO_DEFAULT[] = { 0x7E, 0x30, 0x30, 0x38, 0x32, 0x20, 0x31, 0x0D };
uint8_t OPTOMA_LOGO_USER[] = { 0x7E, 0x30, 0x30, 0x38, 0x32, 0x20, 0x32, 0x0D } ;
uint8_t OPTOMA_LOGO_NEUTRAL[] = { 0x7E, 0x30, 0x30, 0x38, 0x32, 0x20, 0x33, 0x0D };
uint8_t OPTOMA_LOGO_CAPTURE[] = { 0x7E, 0x30, 0x30, 0x38, 0x33, 0x20, 0x31, 0x0D };

// Menu commands
uint8_t OPTOMA_MENU_UP[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x30, 0x0D };
uint8_t OPTOMA_MENU_LEFT[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x31, 0x0D };
uint8_t OPTOMA_MENU_ENTER[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x32, 0x0D };
uint8_t OPTOMA_MENU_RIGHT[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x33, 0x0D };
uint8_t OPTOMA_MENU_DOWN[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x34, 0x0D };
uint8_t OPTOMA_MENU_KEYSTONE_PLUS[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x35, 0x0D };
uint8_t OPTOMA_MENU_KEYSTONE_MINUS[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x36, 0x0D };
uint8_t OPTOMA_MENU_VOLUME_MINUS[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x37, 0x0D };
uint8_t OPTOMA_MENU_VOLUME_PLUS[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x38, 0x0D };
uint8_t OPTOMA_MENU_BRIGHTNESS[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x31, 0x39, 0x0D };
uint8_t OPTOMA_MENU_MENU[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x32, 0x30, 0x0D };
uint8_t OPTOMA_MENU_ZOOM[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x32, 0x31, 0x0D };
uint8_t OPTOMA_MENU_CONTRAST[] = { 0x7E, 0x30, 0x30, 0x31, 0x34, 0x30, 0x20, 0x32, 0x38, 0x0D };


// uint8_t OPTOMA_DISPLAYMODE_CINEMA = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x31, 0x0D };
// uint8_t OPTOMA_DISPLAYMODE_REFERENCE = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x34, 0x0D };
// uint8_t OPTOMA_DISPLAYMODE_PHOTO = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x33, 0x0D };
// uint8_t OPTOMA_DISPLAYMODE_BRIGHT = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x32, 0x0D };
// uint8_t OPTOMA_DISPLAYMODE_3D = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x39, 0x0D };
// uint8_t OPTOMA_DISPLAYMODE_USER = { 0x7E, 0x30, 0x30, 0x32, 0x34, 0x20, 0x35, 0x0D };

// Other commands
// 7E 30 30 32 30 30 20
uint8_t OPTOMA_GET_UPDATE[] = { 0x7E, 0x30, 0x30, 0x31, 0x35, 0x30, 0x20, 0x31, 0x0D };
uint8_t OPTOMA_DISPLAY_MESSAGE_START[] = { 0x7E, 0x30, 0x30, 0x32, 0x30, 0x30, 0x20, };
uint8_t OPTOMA_MESSAGE_END[] = { 0x0D };



static const char *TAG = "component.Optoma";

class component_Optoma :
        public PollingComponent,
        public UARTDevice,
        public CustomAPIDevice {
        
    public:
    
    Sensor *sensor_lamphours;
    Sensor *sensor_ispowered;
    Sensor *sensor_source;
    Sensor *sensor_firmware;
    Sensor *sensor_displaymode;
    String optomaOutput;
    
    static component_Optoma* instance(UARTComponent *parent)
    {
        static component_Optoma* INSTANCE = new component_Optoma(parent);
        return INSTANCE;
    }

    // Poll every 10s
    component_Optoma(UARTComponent *parent) : PollingComponent(10000), UARTDevice(parent) 
    {
        this->sensor_lamphours = new Sensor();
        this->sensor_ispowered = new Sensor();
        this->sensor_source = new Sensor();
        this->sensor_firmware = new Sensor();
        this->sensor_displaymode = new Sensor();
    }

    void optoma_write(uint8_t *data, size_t len) {
        String commandString = "";
        for (int i = 0; i < len; i++) {
            commandString += String(data[i], HEX) + " ";
        }
  
        ESP_LOGCONFIG(TAG, "optoma_write(). len=%d, data=%s", len, commandString.c_str());
        this->write_array(data, len);
    }

   
    void setup() override
    {
        ESP_LOGCONFIG(TAG, "setup().");
        optomaOutput = "";
        register_service(&component_Optoma::optoma_display_message, "optoma_message",{"text"});
    }

    void optoma_display_message(std::string text) {
        ESP_LOGCONFIG(TAG, "optoma_display_message(). text=%s", text.c_str());
        // limit message to 30 characters:
        if (text.length() > 30) {
            text = text.substr(0, 30);
        }

        uint8_t buf[text.length() + 1]; // create buffer with length of string + 1 for null terminator
        std::copy(text.begin(), text.end(), buf); // copy string to buffer
        buf[text.length()] = '\0';
        
        // First send 7E 30 30 32 30 30 20
        optoma_write(OPTOMA_DISPLAY_MESSAGE_START, sizeof(OPTOMA_DISPLAY_MESSAGE_START));
        // Then send the message
        optoma_write(buf, sizeof(buf));
        // Then send 0D
        optoma_write(OPTOMA_MESSAGE_END, sizeof(OPTOMA_MESSAGE_END));
    }

    void parse_optoma_response() {
        // if optomaOutput starts with OK, then parse the response
        if (!optomaOutput.startsWith("OK")) {
            ESP_LOGCONFIG(TAG, "parse failed, did not find OK.");
            return;
        }

        String response = optomaOutput.substring(2);
        
        String powerString = response.substring(0, 1);
        String lampString = response.substring(1, 5);
        String sourceString = response.substring(5, 7);
        String firmwareString = response.substring(7, 11);
        String displayModeString = response.substring(11, 12);

        ESP_LOGCONFIG(TAG, "parse_optoma_response(). powerString=%s, lampString=%s, sourceString=%s, firmwareString=%s, displayModeString=%s", 
            powerString.c_str(), lampString.c_str(), sourceString.c_str(), firmwareString.c_str(), displayModeString.c_str());
        
        sensor_ispowered->publish_state(powerString.toInt());
        sensor_lamphours->publish_state(lampString.toInt());
        sensor_source->publish_state(sourceString.toInt());
        sensor_firmware->publish_state(firmwareString.toInt());
        sensor_displaymode->publish_state(displayModeString.toInt());

    }

    void update() override
    {
        ESP_LOGCONFIG(TAG, "update().");
        optoma_write(OPTOMA_GET_UPDATE, sizeof(OPTOMA_GET_UPDATE));
        delay(100); // wait for response
       
        // Read response
        while (this->available()) {
            optomaOutput += (char)this->read();
        }

        if (optomaOutput.length() > 0) {
            ESP_LOGCONFIG(TAG, "update(). optomaOutput=%s, len=%d", optomaOutput.c_str(), sizeof(optomaOutput));
            if (optomaOutput.length() >= 12) {
                parse_optoma_response();    
            } else {
                ESP_LOGCONFIG(TAG, "update(). optomaOutput is too short. Got len=%d, expected len=12", optomaOutput.length());
            }
         } else {
            ESP_LOGCONFIG(TAG, "update(). optomaOutput is empty.");
            sensor_ispowered->publish_state(0);
         }
        
        optomaOutput = "";
    }

    void dump_config() override {}

    void loop() override {}

    void button_poweron(){
        ESP_LOGCONFIG(TAG, "button_poweron()");
        optoma_write(OPTOMA_POWER_ON, sizeof(OPTOMA_POWER_ON));
    }

    void button_poweroff() {
        ESP_LOGCONFIG(TAG, "button_poweroff()");
        optoma_write(OPTOMA_POWER_OFF, sizeof(OPTOMA_POWER_OFF));
    }
    
    void button_source_hdmi1() {
        ESP_LOGCONFIG(TAG, "button_source_hdmi1()");
        optoma_write(OPTOMA_SOURCE_HDMI1, sizeof(OPTOMA_SOURCE_HDMI1));
    }

    void button_source_hdmi2() {
        ESP_LOGCONFIG(TAG, "button_source_hdmi2()");
        optoma_write(OPTOMA_SOURCE_HDMI2, sizeof(OPTOMA_SOURCE_HDMI2));
    }

    void button_source_vga() {
        ESP_LOGCONFIG(TAG, "button_source_vga()");
        optoma_write(OPTOMA_SOURCE_VGA, sizeof(OPTOMA_SOURCE_VGA));
    }

    void button_source_video() {
        ESP_LOGCONFIG(TAG, "button_source_video()");
        optoma_write(OPTOMA_SOURCE_VIDEO, sizeof(OPTOMA_SOURCE_VIDEO));
    }

    void button_source_vga2() {
        ESP_LOGCONFIG(TAG, "button_source_vga2()");
        optoma_write(OPTOMA_SOURCE_VGA2, sizeof(OPTOMA_SOURCE_VGA2));
    }

    void button_logo_default() {
        ESP_LOGCONFIG(TAG, "button_logo_default()");
        optoma_write(OPTOMA_LOGO_DEFAULT, sizeof(OPTOMA_LOGO_DEFAULT));
    }

    void button_logo_user() {
        ESP_LOGCONFIG(TAG, "button_logo_user()");
        optoma_write(OPTOMA_LOGO_USER, sizeof(OPTOMA_LOGO_USER));
    }

    void button_logo_neutral() {
        ESP_LOGCONFIG(TAG, "button_logo_neutral()");
        optoma_write(OPTOMA_LOGO_NEUTRAL, sizeof(OPTOMA_LOGO_NEUTRAL));
    }

    void button_logo_capture() {
        ESP_LOGCONFIG(TAG, "button_logo_capture()");
        optoma_write(OPTOMA_LOGO_CAPTURE, sizeof(OPTOMA_LOGO_CAPTURE));
    }
    
    void button_menu_up() {
        ESP_LOGCONFIG(TAG, "button_menu_up()");
        optoma_write(OPTOMA_MENU_UP, sizeof(OPTOMA_MENU_UP));
    }
    void button_menu_down() {
        ESP_LOGCONFIG(TAG, "button_menu_down()");
        optoma_write(OPTOMA_MENU_DOWN, sizeof(OPTOMA_MENU_DOWN));
    }
    void button_menu_left() {
        ESP_LOGCONFIG(TAG, "button_menu_left()");
        optoma_write(OPTOMA_MENU_LEFT, sizeof(OPTOMA_MENU_LEFT));
    }
    void button_menu_right() {
        ESP_LOGCONFIG(TAG, "button_menu_right()");
        optoma_write(OPTOMA_MENU_RIGHT, sizeof(OPTOMA_MENU_RIGHT));
    }
    void button_menu_enter() {
        ESP_LOGCONFIG(TAG, "button_menu_enter()");
        optoma_write(OPTOMA_MENU_ENTER, sizeof(OPTOMA_MENU_ENTER));
    }
    void button_menu_keystone_plus() {
        ESP_LOGCONFIG(TAG, "button_menu_keystone_plus()");
        optoma_write(OPTOMA_MENU_KEYSTONE_PLUS, sizeof(OPTOMA_MENU_KEYSTONE_PLUS));
    }
    void button_menu_keystone_minus() {
        ESP_LOGCONFIG(TAG, "button_menu_keystone_minus()");
        optoma_write(OPTOMA_MENU_KEYSTONE_MINUS, sizeof(OPTOMA_MENU_KEYSTONE_MINUS));
    }
    void button_menu_volume_plus() {
        ESP_LOGCONFIG(TAG, "button_menu_volume_plus()");
        optoma_write(OPTOMA_MENU_VOLUME_PLUS, sizeof(OPTOMA_MENU_VOLUME_PLUS));
    }
    void button_menu_volume_minus() {
        ESP_LOGCONFIG(TAG, "button_menu_volume_minus()");
        optoma_write(OPTOMA_MENU_VOLUME_MINUS, sizeof(OPTOMA_MENU_VOLUME_MINUS));
    }
    void button_menu_brightness() {
        ESP_LOGCONFIG(TAG, "button_menu_brightness()");
        optoma_write(OPTOMA_MENU_BRIGHTNESS, sizeof(OPTOMA_MENU_BRIGHTNESS));
    }
    void button_menu_menu() {
        ESP_LOGCONFIG(TAG, "button_menu_menu()");
        optoma_write(OPTOMA_MENU_MENU, sizeof(OPTOMA_MENU_MENU));
    }
    void button_menu_contrast() {
        ESP_LOGCONFIG(TAG, "button_menu_contrast()");
        optoma_write(OPTOMA_MENU_CONTRAST, sizeof(OPTOMA_MENU_CONTRAST));
    }
};