/*
* Copyright (C) 2019 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Auto-generated file for BMP280 v0.1.0.
* Generated from peripherals/BMP280.yaml using Cyanobyte Codegen v0.1.0
* Class for BMP280
* Bosch Digital Pressure Sensor

*/

#ifndef _BMP280_H_
#define _BMP280_H_
#include <Arduino.h>
#include <Wire.h>


class BMP280 {
    public:
        BMP280(TwoWire& wire);

        void begin();
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP1();

        /**
         * Used for Pascals conversion

         */
        int writeDigP1(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP2();

        /**
         * Used for Pascals conversion

         */
        int writeDigP2(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP3();

        /**
         * Used for Pascals conversion

         */
        int writeDigP3(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP4();

        /**
         * Used for Pascals conversion

         */
        int writeDigP4(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP5();

        /**
         * Used for Pascals conversion

         */
        int writeDigP5(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP6();

        /**
         * Used for Pascals conversion

         */
        int writeDigP6(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP7();

        /**
         * Used for Pascals conversion

         */
        int writeDigP7(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP8();

        /**
         * Used for Pascals conversion

         */
        int writeDigP8(uint16_t data);
        /**
         * Used for Pascals conversion

         */
        uint16_t readDigP9();

        /**
         * Used for Pascals conversion

         */
        int writeDigP9(uint16_t data);
        /**
         * Used for Celcius conversion

         */
        uint16_t readDigT1();

        /**
         * Used for Celcius conversion

         */
        int writeDigT1(uint16_t data);
        /**
         * Used for Celcius conversion

         */
        uint16_t readDigT2();

        /**
         * Used for Celcius conversion

         */
        int writeDigT2(uint16_t data);
        /**
         * Used for Celcius conversion

         */
        uint16_t readDigT3();

        /**
         * Used for Celcius conversion

         */
        int writeDigT3(uint16_t data);
        /**
         * Part 2 of Pressure

         */
        uint8_t readPressureLsb();

        /**
         * Part 2 of Pressure

         */
        int writePressureLsb(uint8_t data);
        /**
         * Part 1 of Pressure

         */
        uint8_t readPressureMsb();

        /**
         * Part 1 of Pressure

         */
        int writePressureMsb(uint8_t data);
        /**
         * Part 3 of Pressure

         */
        uint8_t readPressureXlsb();

        /**
         * Part 3 of Pressure

         */
        int writePressureXlsb(uint8_t data);
        /**
         * Part 2 of temperature

         */
        uint8_t readTempLsb();

        /**
         * Part 2 of temperature

         */
        int writeTempLsb(uint8_t data);
        /**
         * Part 1 of temperature

         */
        uint8_t readTempMsb();

        /**
         * Part 1 of temperature

         */
        int writeTempMsb(uint8_t data);
        /**
         * Final part of temperature

         */
        uint8_t readTempXlsb();

        /**
         * Final part of temperature

         */
        int writeTempXlsb(uint8_t data);

        /**
         * Reads the atmospheric pressure

         */
        float pressureasHpa();
        /**
         * Reads the atmospheric pressure

         */
        short pressureasRaw();

        /**
         * Reads the temperature

         */
        float temperatureasCelsius();
        /**
         * Reads the temperature

         */
        short temperatureasRaw();


    private:
        TwoWire* _wire;
};

#endif