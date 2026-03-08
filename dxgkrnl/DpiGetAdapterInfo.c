/*
 * XREFs of DpiGetAdapterInfo @ 0x1C01ECB58
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01EDDF0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01F1750 (DpiOpenPnpRegistryKey.c)
 *     DxgkFreeUnicodeString @ 0x1C020EA5C (DxgkFreeUnicodeString.c)
 *     DpiFreeAdapterInfo @ 0x1C03947A8 (DpiFreeAdapterInfo.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, char *a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  size_t v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // r8d
  unsigned int v31; // edx
  char v32; // al
  unsigned int v33; // ebx
  int v34; // eax
  _QWORD *v35; // rdi
  HANDLE v36; // rdx
  __int64 v37; // rcx
  HANDLE v39; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v43; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v45[36]; // [rsp+A0h] [rbp-60h] BYREF

  v39 = 0LL;
  memset(v45, 0, 0x118uLL);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 1;
  v10 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x508uLL);
    v11 = 78LL;
    *a3 = *(_QWORD *)(v8 + 48);
    v12 = 1;
    if ( *(_DWORD *)(v8 + 504) )
      v12 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v12;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v8 + 2656);
    *(_OWORD *)((char *)a3 + 28) = *(_OWORD *)(v8 + 4800);
    if ( *(_WORD *)(v8 + 4768) < 0x4Eu )
      v11 = *(unsigned __int16 *)(v8 + 4768);
    memmove((char *)a3 + 44, *(const void **)(v8 + 4776), v11);
    *(_QWORD *)((char *)a3 + 124) = *(_QWORD *)(v8 + 2672);
    *((_DWORD *)a3 + 33) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 34) = *(_DWORD *)(v8 + 1128);
    *((_DWORD *)a3 + 35) = *(_DWORD *)(v8 + 1132);
    *((_DWORD *)a3 + 36) = *(_DWORD *)(v8 + 1136);
    *((_DWORD *)a3 + 37) = *(_DWORD *)(v8 + 1140);
    *((_DWORD *)a3 + 38) = *(_DWORD *)(v8 + 1120);
    v13 = *((_DWORD *)a3 + 39) & 0xFFFFFFFE | (*(_BYTE *)(v8 + 1152) != 0);
    *((_DWORD *)a3 + 39) = v13;
    v14 = v13 & 0xFFFFFFFD | (*(_BYTE *)(v8 + 1153) != 0 ? 2 : 0);
    *((_DWORD *)a3 + 39) = v14;
    v15 = v14 & 0xFFFFFFFB | (*(_BYTE *)(v8 + 480) != 0 ? 4 : 0);
    *((_DWORD *)a3 + 39) = v15;
    v16 = v15 & 0xFFFFFFF7 | (*(_BYTE *)(v8 + 2692) != 0 ? 8 : 0);
    *((_DWORD *)a3 + 39) = v16;
    v17 = v16 & 0xFFFFFFEF | (*(_BYTE *)(v8 + 2693) != 0 ? 0x10 : 0);
    *((_DWORD *)a3 + 39) = v17;
    v18 = v17 & 0xFFFFFFDF | (*(_BYTE *)(v8 + 1154) != 0 ? 0x20 : 0);
    *((_DWORD *)a3 + 39) = v18;
    v19 = v18 & 0xFFFFBFFF | (*(_BYTE *)(v8 + 481) != 0 ? 0x4000 : 0);
    *((_DWORD *)a3 + 39) = v19;
    v20 = v19 & 0xFFFFEFFF | (*(_DWORD *)(v8 + 3500) != -1 ? 0x1000 : 0);
    *((_DWORD *)a3 + 39) = v20;
    v21 = v20 & 0xFFFFFFBF | (*(_DWORD *)(v8 + 3240) != -1 ? 0x40 : 0);
    *((_DWORD *)a3 + 39) = v21;
    v22 = v21 & 0xFFFFFF7F | (*(_BYTE *)(v8 + 2740) != 0 ? 0x80 : 0);
    *((_DWORD *)a3 + 39) = v22;
    v23 = v22 & 0xFFFFFEFF | (*(_BYTE *)(v8 + 1159) != 0 ? 0x100 : 0);
    *((_DWORD *)a3 + 39) = v23;
    v24 = v23 & 0xFFFFFDFF | (*(_BYTE *)(v8 + 2695) != 0 ? 0x200 : 0);
    *((_DWORD *)a3 + 39) = v24;
    v25 = v24 & 0xFFFFDFFF | (*(_BYTE *)(v8 + 2694) != 0 ? 0x2000 : 0);
    *((_DWORD *)a3 + 39) = v25;
    v26 = v25 & 0xFFFFFBFF | (*(_BYTE *)(v8 + 2699) != 0 ? 0x400 : 0);
    *((_DWORD *)a3 + 39) = v26;
    v27 = v26 & 0xFFFFF7FF | (*(_BYTE *)(v8 + 2700) != 0 ? 0x800 : 0);
    *((_DWORD *)a3 + 39) = v27;
    v28 = v27 & 0xFFFF7FFF | (*(_BYTE *)(v8 + 2741) != 0 ? 0x8000 : 0);
    *((_DWORD *)a3 + 39) = v28;
    v29 = v28 & 0xFFFEFFFF | (*(_BYTE *)(v8 + 2742) != 0 ? 0x10000 : 0);
    *((_DWORD *)a3 + 39) = v29;
    v30 = v29 ^ (v29 ^ (*(_DWORD *)(v8 + 1300) << 13)) & 0x20000;
    *((_DWORD *)a3 + 39) = v30;
    v31 = v30 & 0xFFFBFFFF | (*(_BYTE *)(v8 + 1160) != 0 ? 0x40000 : 0);
    *((_DWORD *)a3 + 39) = v31;
    *((_DWORD *)a3 + 39) = v31 & 0xFFF7FFFF | (*(_BYTE *)(v8 + 2698) != 0 ? 0x80000 : 0);
    if ( !*(_QWORD *)(v10 + 184) || (v32 = 1, !*(_QWORD *)(v10 + 192)) )
      v32 = 0;
    *((_BYTE *)a3 + 160) = v32;
    a3[21] = *(_QWORD *)(v10 + 272);
    a3[22] = *(_QWORD *)(v10 + 280);
    a3[23] = *(_QWORD *)(v10 + 288);
    a3[24] = *(_QWORD *)(v10 + 296);
    a3[25] = *(_QWORD *)(v10 + 304);
    a3[26] = *(_QWORD *)(v10 + 312);
    a3[27] = *(_QWORD *)(v10 + 320);
    a3[28] = *(_QWORD *)(v10 + 328);
    a3[29] = *(_QWORD *)(v10 + 336);
    a3[30] = *(_QWORD *)(v10 + 344);
    a3[31] = *(_QWORD *)(v10 + 352);
    a3[32] = *(_QWORD *)(v10 + 360);
    a3[33] = *(_QWORD *)(v10 + 368);
    a3[34] = *(_QWORD *)(v10 + 376);
    a3[35] = *(_QWORD *)(v10 + 384);
    a3[36] = *(_QWORD *)(v10 + 392);
    a3[37] = *(_QWORD *)(v10 + 400);
    a3[38] = *(_QWORD *)(v10 + 408);
    a3[39] = *(_QWORD *)(v10 + 416);
    a3[40] = *(_QWORD *)(v10 + 424);
    a3[41] = *(_QWORD *)(v10 + 432);
    a3[42] = *(_QWORD *)(v10 + 440);
    a3[43] = *(_QWORD *)(v10 + 448);
    a3[44] = *(_QWORD *)(v10 + 456);
    a3[45] = *(_QWORD *)(v10 + 464);
    a3[46] = *(_QWORD *)(v10 + 472);
    a3[47] = *(_QWORD *)(v10 + 480);
    a3[48] = *(_QWORD *)(v10 + 488);
    a3[49] = *(_QWORD *)(v10 + 504);
    a3[50] = *(_QWORD *)(v10 + 512);
    a3[51] = *(_QWORD *)(v10 + 520);
    a3[52] = *(_QWORD *)(v10 + 528);
    a3[53] = *(_QWORD *)(v10 + 536);
    a3[54] = *(_QWORD *)(v10 + 544);
    a3[55] = *(_QWORD *)(v10 + 552);
    a3[56] = *(_QWORD *)(v10 + 560);
    a3[57] = *(_QWORD *)(v10 + 568);
    a3[58] = *(_QWORD *)(v10 + 576);
    a3[59] = *(_QWORD *)(v10 + 584);
    a3[60] = *(_QWORD *)(v10 + 592);
    a3[61] = *(_QWORD *)(v10 + 600);
    a3[62] = *(_QWORD *)(v10 + 608);
    a3[63] = *(_QWORD *)(v10 + 624);
    if ( *(_DWORD *)(v10 + 28) >= 0x2002u )
      a3[64] = *(_QWORD *)(v10 + 680);
    if ( *(_DWORD *)(v10 + 28) >= 0x3001u )
    {
      a3[65] = *(_QWORD *)(v10 + 712);
      a3[66] = *(_QWORD *)(v10 + 720);
      a3[67] = *(_QWORD *)(v10 + 728);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x3004u )
      a3[72] = *(_QWORD *)(v10 + 760);
    if ( *(_DWORD *)(v10 + 28) >= 0x3005u )
    {
      a3[69] = *(_QWORD *)(v10 + 704);
      a3[70] = *(_QWORD *)(v10 + 776);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x3000u )
      a3[68] = *(_QWORD *)(v10 + 1512);
    if ( *(_DWORD *)(v10 + 28) >= 0x4000u )
    {
      a3[75] = *(_QWORD *)(v10 + 808);
      a3[76] = *(_QWORD *)(v10 + 816);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x300Bu )
      a3[73] = *(_QWORD *)(v10 + 784);
    if ( *(_DWORD *)(v10 + 28) >= 0x4001u )
      a3[77] = *(_QWORD *)(v10 + 824);
    if ( *(_DWORD *)(v10 + 28) >= 0x4000u )
      a3[74] = *(_QWORD *)(v10 + 800);
    if ( *(_DWORD *)(v10 + 28) >= 0x4002u )
    {
      a3[78] = *(_QWORD *)(v10 + 832);
      a3[79] = *(_QWORD *)(v10 + 840);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x5001u )
    {
      a3[80] = *(_QWORD *)(v10 + 848);
      a3[81] = *(_QWORD *)(v10 + 856);
      a3[82] = *(_QWORD *)(v10 + 864);
      a3[83] = *(_QWORD *)(v10 + 872);
      a3[84] = *(_QWORD *)(v10 + 880);
      a3[85] = *(_QWORD *)(v10 + 888);
      a3[86] = *(_QWORD *)(v10 + 904);
      a3[87] = *(_QWORD *)(v10 + 912);
      a3[88] = *(_QWORD *)(v10 + 896);
      a3[89] = *(_QWORD *)(v10 + 920);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x5006u )
      a3[71] = *(_QWORD *)(v10 + 944);
    if ( *(_DWORD *)(v10 + 28) >= 0x5008u )
    {
      a3[90] = *(_QWORD *)(v10 + 952);
      a3[91] = *(_QWORD *)(v10 + 960);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x6000u )
    {
      a3[92] = *(_QWORD *)(v10 + 968);
      a3[93] = *(_QWORD *)(v10 + 976);
      a3[94] = *(_QWORD *)(v10 + 984);
      a3[95] = v8 + 4896;
      a3[97] = v8 + 5024;
      a3[96] = v8 + 5160;
      a3[98] = v8 + 5216;
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x6002u )
    {
      a3[99] = *(_QWORD *)(v10 + 1000);
      a3[100] = *(_QWORD *)(v10 + 1008);
      a3[101] = *(_QWORD *)(v10 + 992);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7000u )
    {
      a3[102] = *(_QWORD *)(v10 + 1032);
      a3[103] = *(_QWORD *)(v10 + 1040);
      a3[104] = *(_QWORD *)(v10 + 1048);
      a3[105] = *(_QWORD *)(v10 + 1064);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7002u )
    {
      a3[107] = *(_QWORD *)(v10 + 1072);
      a3[108] = *(_QWORD *)(v10 + 1080);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7003u )
    {
      a3[109] = *(_QWORD *)(v10 + 1088);
      a3[110] = *(_QWORD *)(v10 + 1096);
      a3[111] = *(_QWORD *)(v10 + 1104);
      a3[112] = *(_QWORD *)(v10 + 1112);
      a3[113] = *(_QWORD *)(v10 + 1120);
      a3[114] = *(_QWORD *)(v10 + 1128);
      a3[115] = *(_QWORD *)(v10 + 1136);
      a3[116] = *(_QWORD *)(v10 + 1144);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7004u )
    {
      a3[117] = *(_QWORD *)(v10 + 1152);
      a3[118] = *(_QWORD *)(v10 + 1160);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x8001u )
    {
      a3[119] = *(_QWORD *)(v10 + 1176);
      a3[120] = *(_QWORD *)(v10 + 1184);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9000u )
    {
      a3[121] = *(_QWORD *)(v10 + 1192);
      a3[122] = *(_QWORD *)(v10 + 1200);
      a3[123] = *(_QWORD *)(v10 + 1208);
      a3[124] = *(_QWORD *)(v10 + 1216);
      a3[125] = *(_QWORD *)(v10 + 1224);
      a3[126] = *(_QWORD *)(v10 + 1232);
      a3[127] = *(_QWORD *)(v10 + 1240);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9003u )
    {
      a3[128] = *(_QWORD *)(v10 + 1248);
      a3[129] = *(_QWORD *)(v10 + 1256);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9005u )
    {
      a3[130] = *(_QWORD *)(v10 + 1264);
      a3[131] = *(_QWORD *)(v10 + 1272);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9006u )
      a3[106] = *(_QWORD *)(v10 + 1280);
    if ( *(_DWORD *)(v10 + 28) >= 0xA001u )
      a3[132] = *(_QWORD *)(v10 + 1288);
    if ( *(_DWORD *)(v10 + 28) >= 0xA002u )
      a3[133] = *(_QWORD *)(v10 + 1296);
    if ( *(_DWORD *)(v10 + 28) >= 0xA005u )
      a3[134] = *(_QWORD *)(v10 + 1304);
    if ( *(_DWORD *)(v10 + 28) >= 0xA009u )
      a3[135] = *(_QWORD *)(v10 + 1320);
    if ( *(_DWORD *)(v10 + 28) >= 0xB002u )
    {
      a3[136] = *(_QWORD *)(v10 + 1328);
      a3[137] = *(_QWORD *)(v10 + 1336);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xB003u )
      a3[138] = *(_QWORD *)(v10 + 1344);
    if ( *(_DWORD *)(v10 + 28) >= 0xC001u )
      a3[139] = *(_QWORD *)(v10 + 1360);
    if ( *(_DWORD *)(v10 + 28) >= 0xC002u )
      a3[144] = v8 + 5472;
    if ( *(_DWORD *)(v10 + 28) >= 0xC004u )
    {
      a3[146] = v8 + 5528;
      if ( *(_DWORD *)(v10 + 28) >= 0xC004u )
        a3[145] = v8 + 5600;
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xE003u )
    {
      a3[140] = *(_QWORD *)(v10 + 1368);
      a3[141] = *(_QWORD *)(v10 + 1376);
      a3[142] = *(_QWORD *)(v10 + 1384);
      a3[143] = *(_QWORD *)(v10 + 1392);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xF001u )
    {
      a3[147] = *(_QWORD *)(v10 + 1400);
      a3[148] = *(_QWORD *)(v10 + 1408);
      a3[149] = *(_QWORD *)(v10 + 1416);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xF003u )
      a3[150] = *(_QWORD *)(v10 + 1424);
    if ( *(_DWORD *)(v10 + 28) >= 0x10003u )
    {
      a3[155] = *(_QWORD *)(v10 + 1464);
      a3[156] = *(_QWORD *)(v10 + 1472);
      a3[157] = *(_QWORD *)(v10 + 1480);
      a3[158] = *(_QWORD *)(v10 + 1488);
      a3[159] = *(_QWORD *)(v10 + 1496);
      a3[160] = *(_QWORD *)(v10 + 1504);
    }
  }
  v33 = 0;
  *a2 = 0;
  if ( *(_BYTE *)(v8 + 2693) )
  {
    *((_DWORD *)a2 + 2) = 7471218;
    *((_QWORD *)a2 + 2) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 4) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 24) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 26) = L"d3d10warp.dll";
    *((_DWORD *)a2 + 6) = 7471218;
    *((_DWORD *)a2 + 46) = 1966110;
    *((_DWORD *)a2 + 50) = 1966110;
LABEL_122:
    *((_QWORD *)a2 + 21) = *(_QWORD *)(v8 + 4832);
    *((_QWORD *)a2 + 22) = v8 + 2744;
    *((_DWORD *)a2 + 26) = *(_DWORD *)(v8 + 2684);
    *((_DWORD *)a2 + 27) = *(_DWORD *)(v8 + 3496);
    *((_DWORD *)a2 + 28) = *(_DWORD *)(v8 + 2680) - *(_DWORD *)(v8 + 3496);
    *((_QWORD *)a2 + 31) = *(_QWORD *)(v8 + 4840);
    *((_QWORD *)a2 + 32) = *(_QWORD *)(v8 + 4848);
    *((_DWORD *)a2 + 66) = *(_DWORD *)(v8 + 4856);
    *((_DWORD *)a2 + 76) = *(unsigned __int16 *)(v8 + 4682);
    *a4 = *(_OWORD *)(v8 + 1000);
    a4[1] = *(_OWORD *)(v8 + 1016);
    a4[2] = *(_OWORD *)(v8 + 1032);
    a4[3] = *(_OWORD *)(v8 + 1048);
    a4[4] = *(_OWORD *)(v8 + 1064);
    a4[5] = *(_OWORD *)(v8 + 1080);
    a4[6] = *(_OWORD *)(v8 + 1096);
    return v33;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) || *(_BYTE *)(v8 + 481) )
    goto LABEL_122;
  *a2 = 1;
  DestinationString = 0LL;
  v34 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &v39);
  v33 = v34;
  if ( v34 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
      a2[1] = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWSL");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverWsaImage");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      goto LABEL_94;
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWsa64");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWsa32");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
LABEL_94:
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    v43 = 0LL;
    RtlInitUnicodeString(&v43, L"DX9");
    ObjectAttributes.RootDirectory = v39;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v43;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
        WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
      RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
        WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
      ZwClose(KeyHandle);
    }
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v39, &DestinationString) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    if ( *((_WORD *)a2 + 60) && **((_WORD **)a2 + 16) == 35 )
    {
      Handle = 0LL;
      DxgkFreeUnicodeString(a2 + 120);
      DxgkFreeUnicodeString(a2 + 144);
      RtlInitUnicodeString(&v43, L"OpenGL");
      ObjectAttributes.RootDirectory = v39;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v43;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v35 = a2 + 128;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"DriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
          WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
        RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
          WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
      }
    }
    else
    {
      v35 = a2 + 128;
      v9 = 0;
      Handle = 0LL;
    }
    v33 = 0;
    if ( *v35 )
    {
      v45[5] = 0LL;
      LODWORD(v45[1]) = 288;
      LODWORD(v45[4]) = 0x4000000;
      v45[2] = L"OpenGLVersion";
      LODWORD(v45[6]) = 0;
      v45[3] = a2 + 136;
      LODWORD(v45[8]) = 288;
      v45[9] = L"OpenGLFlags";
      v45[10] = a2 + 140;
      v45[16] = L"OpenGLVersionWow";
      v45[17] = a2 + 160;
      v45[23] = L"OpenGLFlagsWow";
      v45[24] = a2 + 164;
      LODWORD(v45[11]) = 0x4000000;
      v45[12] = 0LL;
      LODWORD(v45[13]) = 0;
      LODWORD(v45[15]) = 288;
      LODWORD(v45[18]) = 0x4000000;
      v45[19] = 0LL;
      LODWORD(v45[20]) = 0;
      LODWORD(v45[22]) = 288;
      LODWORD(v45[25]) = 0x4000000;
      v45[26] = 0LL;
      LODWORD(v45[27]) = 0;
      if ( v9 )
      {
        v36 = Handle;
        v37 = 0x40000000LL;
      }
      else
      {
        v36 = *(HANDLE *)(v8 + 536);
        v37 = 0LL;
      }
      if ( (int)RtlQueryRegistryValuesEx(v37, v36, v45, 0LL, 0LL) < 0 )
        WdLogSingleEntry1(4LL, RtlQueryRegistryValuesEx);
    }
    ZwClose(Handle);
    ZwClose(v39);
    goto LABEL_122;
  }
  WdLogSingleEntry1(2LL, v34);
  DpiFreeAdapterInfo(a2);
  memset(a2, 0, 0x158uLL);
  if ( a3 )
    memset(a3, 0, 0x508uLL);
  return v33;
}
