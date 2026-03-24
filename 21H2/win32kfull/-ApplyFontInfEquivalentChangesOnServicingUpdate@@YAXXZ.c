/*
 * XREFs of ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x1C016BE10
 * Callers:
 *     bAddAllFlEntry @ 0x1C00E6C58 (bAddAllFlEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void ApplyFontInfEquivalentChangesOnServicingUpdate(void)
{
  int v0; // edi
  __int64 v1; // rdx
  _OWORD *v2; // rcx
  const wchar_t *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  ULONG v13; // esi
  _BYTE *v14; // rbx
  USHORT AnsiCodePage[4]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v20[158]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v21; // [rsp+310h] [rbp+208h]
  __int16 v22; // [rsp+318h] [rbp+210h]
  __int128 KeyValueInformation; // [rsp+328h] [rbp+220h] BYREF
  int v24; // [rsp+338h] [rbp+230h]
  _BYTE Data[544]; // [rsp+348h] [rbp+240h] BYREF

  *(_OWORD *)&DestinationString[1] = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  DestinationString[0] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"UpdateFontLinks");
    v0 = 2;
    ResultLength[0] = 0;
    v24 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           ResultLength) >= 0 )
    {
      ZwDeleteValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1]);
      AnsiCodePage[0] = 0;
      AnsiCodePage[2] = 0;
      RtlGetDefaultCodePage(AnsiCodePage, &AnsiCodePage[2]);
      if ( AnsiCodePage[0] == 936 )
        goto LABEL_8;
      if ( AnsiCodePage[0] == 950 )
        goto LABEL_9;
      if ( AnsiCodePage[2] == 936 )
      {
LABEL_8:
        v0 = 1;
        goto LABEL_9;
      }
      if ( AnsiCodePage[2] == 950 )
      {
LABEL_9:
        RtlInitUnicodeString(
          (PUNICODE_STRING)&DestinationString[1],
          L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        KeyHandle = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          v1 = 4LL;
          v2 = Data;
          v3 = L"MICROSS.TTF,Microsoft Sans Serif,108,122";
          do
          {
            v4 = *((_OWORD *)v3 + 1);
            *v2 = *(_OWORD *)v3;
            v5 = *((_OWORD *)v3 + 2);
            v2[1] = v4;
            v6 = *((_OWORD *)v3 + 3);
            v2[2] = v5;
            v7 = *((_OWORD *)v3 + 4);
            v2[3] = v6;
            v8 = *((_OWORD *)v3 + 5);
            v2[4] = v7;
            v9 = *((_OWORD *)v3 + 6);
            v2[5] = v8;
            v10 = *((_OWORD *)v3 + 7);
            v3 += 64;
            v2[6] = v9;
            v2 += 8;
            *(v2 - 1) = v10;
            --v1;
          }
          while ( v1 );
          v11 = *(_OWORD *)v3;
          v12 = *((_DWORD *)v3 + 4);
          v20[0] = 4784205;
          *v2 = v11;
          *((_DWORD *)v2 + 4) = v12;
          v20[1] = 5374019;
          v20[2] = 5439567;
          v20[3] = 3014739;
          v20[4] = 5505108;
          v20[5] = 2883654;
          v20[6] = 6881357;
          v20[7] = 7471203;
          v20[8] = 7536751;
          v20[9] = 6684783;
          v20[10] = 2097268;
          v20[11] = 6357075;
          v20[12] = 7536750;
          v20[13] = 5439520;
          v20[14] = 7471205;
          v20[15] = 6684777;
          v20[16] = 3211308;
          v20[17] = 3670064;
          v20[18] = 3211308;
          v20[19] = 3276850;
          v20[20] = 5046272;
          v20[21] = 4390985;
          v20[22] = 5177426;
          v20[23] = 5439571;
          v20[24] = 5505070;
          v20[25] = 4587604;
          v20[26] = 5046316;
          v20[27] = 6488169;
          v20[28] = 7274610;
          v20[29] = 7274611;
          v20[30] = 7602278;
          v20[31] = 5439520;
          v20[32] = 7209057;
          v20[33] = 2097267;
          v20[34] = 6619219;
          v20[35] = 6881394;
          v20[36] = 102;
          v20[37] = 4784211;
          v20[38] = 5439565;
          v20[39] = 5111893;
          v20[40] = 5505070;
          v20[41] = 4390996;
          v20[42] = 5439532;
          v20[43] = 7143529;
          v20[44] = 7667795;
          v20[45] = 110;
          v20[46] = 4784205;
          v20[47] = 4653134;
          v20[48] = 4784204;
          v20[49] = 3014741;
          v20[50] = 5505108;
          v20[51] = 2883651;
          v20[52] = 6881357;
          v20[53] = 6750318;
          v20[54] = 6881356;
          v20[55] = 6226005;
          v20[56] = 4915272;
          v20[57] = 4390995;
          v20[58] = 83;
          v20[59] = 4784205;
          v20[60] = 4653134;
          v20[61] = 4784204;
          v20[62] = 3014741;
          v20[63] = 5505108;
          v20[64] = 2883651;
          v20[65] = 5046352;
          v20[66] = 7209065;
          v20[67] = 4980839;
          v20[68] = 5570665;
          v20[69] = 5046272;
          v20[70] = 5046355;
          v20[71] = 5111881;
          v20[72] = 4718659;
          v20[73] = 3014735;
          v20[74] = 5505108;
          v20[75] = 2883651;
          v20[76] = 5439565;
          v20[77] = 5242912;
          v20[78] = 6881357;
          v20[79] = 6488174;
          v20[80] = 7274600;
          v20[81] = 4325376;
          v20[82] = 5505089;
          v20[83] = 5111873;
          v20[84] = 3014727;
          v20[85] = 5505108;
          v20[86] = 2883651;
          v20[87] = 6357058;
          v20[88] = 6357108;
          v20[89] = 6750318;
          v20[90] = 5046272;
          v20[91] = 5832787;
          v20[92] = 3014728;
          v20[93] = 5505108;
          v20[94] = 2883651;
          v20[95] = 6881357;
          v20[96] = 7471203;
          v20[97] = 7536751;
          v20[98] = 6684783;
          v20[99] = 2097268;
          v20[100] = 6357081;
          v20[101] = 6619208;
          v20[102] = 2097257;
          v20[103] = 4784213;
          v20[104] = 5046272;
          v20[105] = 4849747;
          v20[106] = 3014728;
          v20[107] = 5505108;
          v20[108] = 2883651;
          v20[109] = 6881357;
          v20[110] = 7471203;
          v20[111] = 7536751;
          v20[112] = 6684783;
          v20[113] = 2097268;
          v20[114] = 6815818;
          v20[115] = 7209061;
          v20[116] = 4718695;
          v20[117] = 6881381;
          v20[118] = 5570592;
          v20[119] = 73;
          v20[120] = 5570649;
          v20[121] = 5177415;
          v20[122] = 4718676;
          v20[123] = 3014733;
          v20[124] = 5505108;
          v20[125] = 2883651;
          v20[126] = 7667801;
          v20[127] = 4653088;
          v20[128] = 7602287;
          v20[129] = 6881384;
          v20[130] = 2097251;
          v20[131] = 4784213;
          v20[132] = 5046272;
          v20[133] = 4980801;
          v20[134] = 5570631;
          v20[135] = 3014734;
          v20[136] = 5505108;
          v20[137] = 2883654;
          v20[138] = 6357069;
          v20[139] = 6750316;
          v20[140] = 7209077;
          v20[141] = 4653088;
          v20[142] = 7602287;
          v20[143] = 6881384;
          v20[144] = 99;
          v20[145] = 4522067;
          v20[146] = 5570631;
          v20[147] = 5439561;
          v20[148] = 5046361;
          v20[149] = 5505070;
          v20[150] = 4587604;
          v20[151] = 5439532;
          v20[152] = 6750309;
          v20[153] = 6619247;
          v20[154] = 5570592;
          v20[155] = 2097225;
          v20[156] = 7929939;
          v20[157] = 6422637;
          v21 = 7077999LL;
          v22 = 0;
          if ( v0 == 1 )
          {
            v13 = 532;
            v14 = Data;
          }
          else
          {
            v13 = 642;
            v14 = v20;
          }
          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SimSun-ExtG");
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1], 0, 7u, v14, v13);
          ZwClose(KeyHandle);
        }
      }
    }
    ZwClose(DestinationString[0]);
  }
}
