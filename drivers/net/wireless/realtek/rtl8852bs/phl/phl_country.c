/******************************************************************************
 *
 * Copyright(c) 2020 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#include "phl_headers.h"
#include "phl_country.h"

const struct country_domain_mapping cdmap[MAX_COUNTRY_NUM] = {
    {0x4d, 0x00, {'A', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0000 */
    {0x61, 0x00, {'B', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0001 */
    {0x62, 0x05, {'B', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0002 */
    {0x76, 0x01, {'C', 'L'}, TPO_CHILE, 0x0f, 0, 0x01}, /* 0003 */
    {0x76, 0x00, {'C', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0004 */
    {0x76, 0x05, {'C', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0005 */
    {0x76, 0x00, {'E', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0006 */
    {0x76, 0x05, {'S', 'V'}, TPO_NA, 0x0f, 0, 0x01}, /* 0007 */
    {0x76, 0x05, {'G', 'T'}, TPO_NA, 0x0f, 0, 0x01}, /* 0008 */
    {0x76, 0x05, {'H', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0009 */
    {0x4d, 0x00, {'M', 'X'}, TPO_NA, 0x0f, 0, 0x00}, /* 0010 */
    {0x76, 0x00, {'N', 'I'}, TPO_NA, 0x0f, 0, 0x00}, /* 0011 */
    {0x76, 0x00, {'P', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0012 */
    {0x76, 0x00, {'P', 'Y'}, TPO_NA, 0x0f, 0, 0x00}, /* 0013 */
    {0x76, 0x05, {'P', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0014 */
    {0x1b, 0x05, {'U', 'S'}, TPO_NA, 0x0f, 0, 0x03}, /* 0015 */
    {0x30, 0x00, {'U', 'Y'}, TPO_NA, 0x0f, 0, 0x00}, /* 0016 */
    {0x30, 0x00, {'V', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0017 */
    {0x76, 0x00, {'P', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0018 */
    {0x76, 0x00, {'D', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0019 */
    {0x5e, 0x06, {'A', 'T'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0020 */
    {0x5e, 0x06, {'B', 'E'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0021 */
    {0x5e, 0x06, {'C', 'Y'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0022 */
    {0x5e, 0x06, {'C', 'Z'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0023 */
    {0x5e, 0x06, {'D', 'K'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0024 */
    {0x5e, 0x06, {'E', 'E'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0025 */
    {0x5e, 0x06, {'F', 'I'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0026 */
    {0x5e, 0x06, {'F', 'R'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0027 */
    {0x5e, 0x06, {'D', 'E'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0028 */
    {0x5e, 0x06, {'G', 'R'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0029 */
    {0x5e, 0x06, {'H', 'U'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0030 */
    {0x5e, 0x06, {'I', 'S'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0031 */
    {0x5e, 0x06, {'I', 'E'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0032 */
    {0x5e, 0x06, {'I', 'T'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0033 */
    {0x5e, 0x06, {'L', 'V'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0034 */
    {0x5e, 0x06, {'L', 'I'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0035 */
    {0x5e, 0x06, {'L', 'T'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0036 */
    {0x5e, 0x06, {'L', 'U'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0037 */
    {0x5e, 0x06, {'M', 'T'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0038 */
    {0x5e, 0x06, {'M', 'C'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0039 */
    {0x5e, 0x06, {'N', 'L'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0040 */
    {0x5e, 0x06, {'N', 'O'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0041 */
    {0x5e, 0x06, {'P', 'L'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0042 */
    {0x5e, 0x06, {'P', 'T'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0043 */
    {0x5e, 0x06, {'S', 'K'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0044 */
    {0x5e, 0x06, {'S', 'I'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0045 */
    {0x5e, 0x06, {'E', 'S'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0046 */
    {0x5e, 0x06, {'S', 'E'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0047 */
    {0x5e, 0x06, {'C', 'H'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0048 */
    {0x0b, 0x06, {'G', 'B'}, TPO_UK, 0x0f, 0, 0x01}, /* 0049 */
    {0x5e, 0x00, {'A', 'L'}, TPO_NA, 0x0f, 0, 0x00}, /* 0050 */
    {0x5e, 0x06, {'A', 'Z'}, TPO_NA, 0x0f, 0, 0x01}, /* 0051 */
    {0x06, 0x06, {'B', 'H'}, TPO_NA, 0x0f, 0, 0x01}, /* 0052 */
    {0x5e, 0x00, {'B', 'A'}, TPO_NA, 0x0f, 0, 0x01}, /* 0053 */
    {0x5e, 0x06, {'B', 'G'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0054 */
    {0x5e, 0x06, {'H', 'R'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0055 */
    {0x3c, 0x00, {'E', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0056 */
    {0x5e, 0x06, {'G', 'H'}, TPO_NA, 0x0f, 0, 0x01}, /* 0057 */
    {0x05, 0x00, {'I', 'Q'}, TPO_NA, 0x0f, 0, 0x00}, /* 0058 */
    {0x5e, 0x06, {'I', 'L'}, TPO_NA, 0x0f, 0, 0x01}, /* 0059 */
    {0x05, 0x06, {'J', 'O'}, TPO_NA, 0x0f, 0, 0x01}, /* 0060 */
    {0x5e, 0x00, {'K', 'Z'}, TPO_NA, 0x0f, 0, 0x00}, /* 0061 */
    {0x5e, 0x06, {'K', 'E'}, TPO_NA, 0x0f, 0, 0x01}, /* 0062 */
    {0x5e, 0x00, {'K', 'W'}, TPO_NA, 0x0f, 0, 0x01}, /* 0063 */
    {0x5e, 0x06, {'K', 'G'}, TPO_NA, 0x0f, 0, 0x01}, /* 0064 */
    {0x5e, 0x00, {'L', 'B'}, TPO_NA, 0x0f, 0, 0x00}, /* 0065 */
    {0x5e, 0x00, {'L', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0066 */
    {0x3a, 0x00, {'M', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0067 */
    {0x3c, 0x06, {'M', 'A'}, TPO_NA, 0x0f, 0, 0x01}, /* 0068 */
    {0x5e, 0x00, {'M', 'Z'}, TPO_NA, 0x0f, 0, 0x00}, /* 0069 */
    {0x5e, 0x00, {'N', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0070 */
    {0x75, 0x00, {'N', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0071 */
    {0x5e, 0x00, {'O', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0072 */
    {0x5e, 0x06, {'Q', 'A'}, TPO_QATAR, 0x0f, 0, 0x01}, /* 0073 */
    {0x5e, 0x06, {'R', 'O'}, TPO_NA, 0x0f, CNTRY_EU, 0x01}, /* 0074 */
    {0x09, 0x00, {'R', 'U'}, TPO_NA, 0x0f, 0, 0x00}, /* 0075 */
    {0x5e, 0x06, {'S', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0076 */
    {0x3a, 0x00, {'S', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0077 */
    {0x5e, 0x06, {'R', 'S'}, TPO_NA, 0x0f, 0, 0x01}, /* 0078 */
    {0x3a, 0x00, {'M', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0079 */
    {0x5e, 0x00, {'Z', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0080 */
    {0x5e, 0x06, {'T', 'R'}, TPO_NA, 0x0f, 0, 0x01}, /* 0081 */
    {0x5e, 0x00, {'U', 'A'}, TPO_UKRAINE, 0x0f, 0, 0x00}, /* 0082 */
    {0x5e, 0x06, {'A', 'E'}, TPO_NA, 0x0f, 0, 0x01}, /* 0083 */
    {0x3a, 0x00, {'Y', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0084 */
    {0x5e, 0x00, {'Z', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0085 */
    {0x5e, 0x00, {'B', 'D'}, TPO_NA, 0x0f, 0, 0x00}, /* 0086 */
    {0x5e, 0x00, {'K', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0087 */
    {0x06, 0x00, {'C', 'N'}, TPO_CN, 0x0f, 0, 0x00}, /* 0088 */
    {0x5e, 0x06, {'H', 'K'}, TPO_NA, 0x0f, 0, 0x01}, /* 0089 */
    {0x5e, 0x00, {'I', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0090 */
    {0x5d, 0x00, {'I', 'D'}, TPO_NA, 0x0f, 0, 0x00}, /* 0091 */
    {0x4b, 0x08, {'K', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0092 */
    {0x07, 0x06, {'M', 'Y'}, TPO_NA, 0x0f, 0, 0x01}, /* 0093 */
    {0x5e, 0x00, {'P', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0094 */
    {0x5e, 0x00, {'P', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0095 */
    {0x5e, 0x00, {'S', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0096 */
    {0x5e, 0x00, {'L', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0097 */
    {0x76, 0x00, {'T', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0098 */
    {0x5e, 0x00, {'T', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0099 */
    {0x5e, 0x00, {'V', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0100 */
    {0x03, 0x1b, {'A', 'U'}, TPO_NA, 0x0f, 0, 0x01}, /* 0101 */
    {0x03, 0x1b, {'N', 'Z'}, TPO_NA, 0x0f, 0, 0x01}, /* 0102 */
    {0x5e, 0x00, {'P', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0103 */
    {0x2b, 0x07, {'C', 'A'}, TPO_NA, 0x0f, 0, 0x01}, /* 0104 */
    {0x7d, 0x1c, {'J', 'P'}, TPO_NA, 0x0f, 0, 0x05}, /* 0105 */
    {0x76, 0x05, {'J', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0106 */
    {0x76, 0x00, {'A', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0107 */
    {0x76, 0x00, {'T', 'T'}, TPO_NA, 0x0f, 0, 0x00}, /* 0108 */
    {0x04, 0x00, {'T', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0109 */
    {0x42, 0x00, {'A', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0110 */
    {0x00, 0x06, {'D', 'Z'}, TPO_NA, 0x0f, 0, 0x01}, /* 0111 */
    {0x76, 0x00, {'A', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0112 */
    {0x3a, 0x00, {'A', 'D'}, TPO_NA, 0x0f, 0, 0x00}, /* 0113 */
    {0x5e, 0x00, {'A', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0114 */
    {0x5e, 0x06, {'A', 'I'}, TPO_NA, 0x0f, 0, 0x01}, /* 0115 */
    {0x26, 0x00, {'A', 'Q'}, TPO_NA, 0x0f, 0, 0x00}, /* 0116 */
    {0x76, 0x05, {'A', 'G'}, TPO_NA, 0x0f, 0, 0x03}, /* 0117 */
    {0x5e, 0x06, {'A', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0118 */
    {0x76, 0x05, {'A', 'W'}, TPO_NA, 0x0f, 0, 0x01}, /* 0119 */
    {0x76, 0x05, {'B', 'S'}, TPO_NA, 0x0f, 0, 0x01}, /* 0120 */
    {0x76, 0x05, {'B', 'B'}, TPO_NA, 0x0f, 0, 0x00}, /* 0121 */
    {0x08, 0x00, {'B', 'Y'}, TPO_NA, 0x07, 0, 0x00}, /* 0122 */
    {0x76, 0x00, {'B', 'Z'}, TPO_NA, 0x0f, 0, 0x00}, /* 0123 */
    {0x3a, 0x00, {'B', 'J'}, TPO_NA, 0x0f, 0, 0x00}, /* 0124 */
    {0x76, 0x05, {'B', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0125 */
    {0x5e, 0x00, {'B', 'T'}, TPO_NA, 0x0f, 0, 0x00}, /* 0126 */
    {0x5e, 0x06, {'B', 'W'}, TPO_NA, 0x0f, 0, 0x01}, /* 0127 */
    {0x5e, 0x00, {'B', 'V'}, TPO_NA, 0x0f, 0, 0x00}, /* 0128 */
    {0x3a, 0x00, {'I', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0129 */
    {0x76, 0x05, {'V', 'G'}, TPO_NA, 0x0f, 0, 0x01}, /* 0130 */
    {0x06, 0x00, {'B', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0131 */
    {0x5e, 0x00, {'B', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0132 */
    {0x3a, 0x00, {'M', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0133 */
    {0x3a, 0x06, {'B', 'I'}, TPO_NA, 0x0f, 0, 0x01}, /* 0134 */
    {0x5e, 0x00, {'C', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0135 */
    {0x5e, 0x00, {'C', 'V'}, TPO_NA, 0x0f, 0, 0x00}, /* 0136 */
    {0x76, 0x05, {'K', 'Y'}, TPO_NA, 0x0f, 0, 0x01}, /* 0137 */
    {0x3a, 0x00, {'C', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0138 */
    {0x3a, 0x06, {'T', 'D'}, TPO_NA, 0x0f, 0, 0x01}, /* 0139 */
    {0x03, 0x00, {'C', 'X'}, TPO_NA, 0x0f, 0, 0x00}, /* 0140 */
    {0x03, 0x00, {'C', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0141 */
    {0x5e, 0x06, {'K', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0142 */
    {0x5e, 0x00, {'C', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0143 */
    {0x5e, 0x00, {'C', 'D'}, TPO_NA, 0x0f, 0, 0x00}, /* 0144 */
    {0x5e, 0x00, {'C', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0145 */
    {0x42, 0x00, {'C', 'I'}, TPO_NA, 0x0f, 0, 0x00}, /* 0146 */
    {0x5e, 0x06, {'D', 'J'}, TPO_NA, 0x0f, 0, 0x01}, /* 0147 */
    {0x76, 0x05, {'D', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0148 */
    {0x5e, 0x06, {'G', 'Q'}, TPO_NA, 0x0f, 0, 0x01}, /* 0149 */
    {0x3a, 0x00, {'E', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0150 */
    {0x3a, 0x00, {'E', 'T'}, TPO_NA, 0x0f, 0, 0x00}, /* 0151 */
    {0x5e, 0x00, {'F', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0152 */
    {0x5e, 0x00, {'F', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0153 */
    {0x76, 0x00, {'F', 'J'}, TPO_NA, 0x0f, 0, 0x00}, /* 0154 */
    {0x3a, 0x00, {'G', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0155 */
    {0x3a, 0x00, {'P', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0156 */
    {0x3a, 0x00, {'T', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0157 */
    {0x5e, 0x00, {'G', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0158 */
    {0x5e, 0x06, {'G', 'M'}, TPO_NA, 0x0f, 0, 0x01}, /* 0159 */
    {0x5e, 0x00, {'G', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0160 */
    {0x5e, 0x00, {'G', 'I'}, TPO_NA, 0x0f, 0, 0x00}, /* 0161 */
    {0x5e, 0x00, {'G', 'L'}, TPO_NA, 0x0f, 0, 0x00}, /* 0162 */
    {0x76, 0x05, {'G', 'D'}, TPO_NA, 0x0f, 0, 0x01}, /* 0163 */
    {0x5e, 0x00, {'G', 'P'}, TPO_NA, 0x0f, 0, 0x00}, /* 0164 */
    {0x76, 0x00, {'G', 'U'}, TPO_NA, 0x0f, 0, 0x00}, /* 0165 */
    {0x5e, 0x00, {'G', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0166 */
    {0x5e, 0x00, {'G', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0167 */
    {0x5e, 0x00, {'G', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0168 */
    {0x76, 0x05, {'G', 'Y'}, TPO_NA, 0x0f, 0, 0x01}, /* 0169 */
    {0x76, 0x00, {'H', 'T'}, TPO_NA, 0x07, 0, 0x00}, /* 0170 */
    {0x03, 0x00, {'H', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0171 */
    {0x5e, 0x00, {'V', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0172 */
    {0x5e, 0x00, {'I', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0173 */
    {0x5e, 0x00, {'J', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0174 */
    {0x5e, 0x00, {'K', 'I'}, TPO_NA, 0x0f, 0, 0x00}, /* 0175 */
    {0x5e, 0x00, {'L', 'A'}, TPO_NA, 0x0f, 0, 0x00}, /* 0176 */
    {0x5e, 0x00, {'L', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0177 */
    {0x5e, 0x00, {'L', 'Y'}, TPO_NA, 0x0f, 0, 0x00}, /* 0178 */
    {0x5e, 0x00, {'M', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0179 */
    {0x5e, 0x06, {'M', 'G'}, TPO_NA, 0x0f, 0, 0x01}, /* 0180 */
    {0x5e, 0x00, {'M', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0181 */
    {0x3c, 0x00, {'M', 'V'}, TPO_NA, 0x0f, 0, 0x00}, /* 0182 */
    {0x5e, 0x00, {'M', 'L'}, TPO_NA, 0x0f, 0, 0x00}, /* 0183 */
    {0x76, 0x00, {'M', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0184 */
    {0x3a, 0x00, {'M', 'Q'}, TPO_NA, 0x0f, 0, 0x00}, /* 0185 */
    {0x5e, 0x00, {'M', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0186 */
    {0x5e, 0x06, {'M', 'U'}, TPO_NA, 0x0f, 0, 0x01}, /* 0187 */
    {0x5e, 0x00, {'Y', 'T'}, TPO_NA, 0x0f, 0, 0x00}, /* 0188 */
    {0x76, 0x00, {'F', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0189 */
    {0x5e, 0x06, {'M', 'D'}, TPO_NA, 0x0f, 0, 0x00}, /* 0190 */
    {0x5e, 0x00, {'M', 'N'}, TPO_NA, 0x0f, 0, 0x00}, /* 0191 */
    {0x3a, 0x00, {'M', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0192 */
    {0x5e, 0x00, {'N', 'R'}, TPO_NA, 0x0f, 0, 0x00}, /* 0193 */
    {0x06, 0x00, {'N', 'P'}, TPO_NA, 0x0f, 0, 0x00}, /* 0194 */
    {0x3a, 0x00, {'N', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0195 */
    {0x5e, 0x00, {'N', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0196 */
    {0x03, 0x00, {'N', 'U'}, TPO_NA, 0x0f, 0, 0x00}, /* 0197 */
    {0x03, 0x00, {'N', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0198 */
    {0x76, 0x00, {'M', 'P'}, TPO_NA, 0x0f, 0, 0x00}, /* 0199 */
    {0x76, 0x00, {'P', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0200 */
    {0x5e, 0x00, {'R', 'E'}, TPO_NA, 0x0f, 0, 0x00}, /* 0201 */
    {0x5e, 0x00, {'R', 'W'}, TPO_NA, 0x0f, 0, 0x00}, /* 0202 */
    {0x5e, 0x00, {'S', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0203 */
    {0x76, 0x05, {'K', 'N'}, TPO_NA, 0x0f, 0, 0x01}, /* 0204 */
    {0x76, 0x05, {'L', 'C'}, TPO_NA, 0x0f, 0, 0x01}, /* 0205 */
    {0x76, 0x00, {'M', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0206 */
    {0x76, 0x00, {'S', 'X'}, TPO_NA, 0x0f, 0, 0x00}, /* 0207 */
    {0x5e, 0x00, {'P', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0208 */
    {0x76, 0x00, {'V', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0209 */
    {0x76, 0x00, {'W', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0210 */
    {0x3a, 0x00, {'S', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0211 */
    {0x5e, 0x00, {'S', 'T'}, TPO_NA, 0x0f, 0, 0x00}, /* 0212 */
    {0x76, 0x00, {'S', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0213 */
    {0x5e, 0x06, {'S', 'L'}, TPO_NA, 0x0f, 0, 0x01}, /* 0214 */
    {0x3a, 0x00, {'S', 'B'}, TPO_NA, 0x0f, 0, 0x00}, /* 0215 */
    {0x3a, 0x00, {'S', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0216 */
    {0x3a, 0x00, {'G', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0217 */
    {0x74, 0x05, {'S', 'R'}, TPO_NA, 0x0f, 0, 0x01}, /* 0218 */
    {0x5e, 0x00, {'S', 'J'}, TPO_NA, 0x0f, 0, 0x00}, /* 0219 */
    {0x5e, 0x00, {'S', 'Z'}, TPO_NA, 0x0f, 0, 0x00}, /* 0220 */
    {0x5e, 0x06, {'T', 'J'}, TPO_NA, 0x0f, 0, 0x01}, /* 0221 */
    {0x5e, 0x00, {'T', 'Z'}, TPO_NA, 0x0f, 0, 0x00}, /* 0222 */
    {0x5e, 0x06, {'T', 'G'}, TPO_NA, 0x0f, 0, 0x01}, /* 0223 */
    {0x03, 0x00, {'T', 'K'}, TPO_NA, 0x0f, 0, 0x00}, /* 0224 */
    {0x3a, 0x00, {'T', 'O'}, TPO_NA, 0x0f, 0, 0x00}, /* 0225 */
    {0x3a, 0x00, {'T', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0226 */
    {0x3a, 0x00, {'T', 'C'}, TPO_NA, 0x0f, 0, 0x00}, /* 0227 */
    {0x21, 0x00, {'T', 'V'}, TPO_NA, 0x01, 0, 0x00}, /* 0228 */
    {0x3a, 0x00, {'U', 'G'}, TPO_NA, 0x0f, 0, 0x00}, /* 0229 */
    {0x76, 0x00, {'V', 'I'}, TPO_NA, 0x0f, 0, 0x00}, /* 0230 */
    {0x3a, 0x06, {'U', 'Z'}, TPO_NA, 0x0f, 0, 0x01}, /* 0231 */
    {0x26, 0x00, {'V', 'U'}, TPO_NA, 0x0f, 0, 0x00}, /* 0232 */
    {0x3a, 0x00, {'W', 'F'}, TPO_NA, 0x0f, 0, 0x00}, /* 0233 */
    {0x3c, 0x00, {'E', 'H'}, TPO_NA, 0x0f, 0, 0x00}, /* 0234 */
    {0x5e, 0x00, {'Z', 'M'}, TPO_NA, 0x0f, 0, 0x00}, /* 0235 */
    {0x3a, 0x00, {'I', 'R'}, TPO_NA, 0x01, 0, 0x00}, /* 0236 */
    {0x5e, 0x00, {'P', 'S'}, TPO_NA, 0x0f, 0, 0x00}, /* 0237 */
};



