__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v11; // rsi
  struct _LUID *v12; // r10
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  int TargetVirtualization; // eax
  unsigned int v18; // ebp
  unsigned __int8 v19; // r11
  int v20; // r8d
  unsigned __int8 v21; // r10
  int v22; // eax
  char v23; // r9
  bool v24; // al
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // esi
  int v28; // edx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v33; // [rsp+41h] [rbp-27h] BYREF
  unsigned __int8 v34[14]; // [rsp+42h] [rbp-26h] BYREF

  v8 = a3;
  v9 = a2;
  v34[0] = 0;
  v33 = 0;
  v32 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL);
  v12 = (struct _LUID *)((char *)a1 + 16);
  while ( 1 )
  {
    if ( !v11 )
    {
      WdLogSingleEntry3(2LL, *((int *)a1 + 5), v12->LowPart, v8);
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(v11 + 160) & 0x800000) != 0
      && *(_DWORD *)(v11 + 240) == v12->LowPart
      && *(_DWORD *)(v11 + 244) == *((_DWORD *)a1 + 5) )
    {
      break;
    }
    v11 = *(_QWORD *)(v11 + 128);
  }
  v14 = (char *)a6 + 296 * v9;
  *((_QWORD *)v14 + 7) = *(_QWORD *)a1;
  *((_QWORD *)v14 + 8) = *((_QWORD *)a1 + 1);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v15 & 0x7FD30E6FFE7CF070LL) != 0 )
    goto LABEL_10;
  v16 = *((_QWORD *)a1 + 1);
  if ( (v16 & 0xFFFFFE7FFE7DF470uLL) != 0 || (v15 & v16) != v16 )
  {
    WdLogSingleEntry2(2LL, v15);
    return 3221225485LL;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *v12,
                           *((_DWORD *)a1 + 7),
                           v34,
                           &v33,
                           &v32,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 36,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 37,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v14 + 268));
  v18 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    WdLogSingleEntry1(2LL, TargetVirtualization);
    return v18;
  }
  v19 = v33;
  *((_QWORD *)v14 + 7) |= 0x800000000000uLL;
  v20 = 4;
  v21 = v34[0];
  *((_QWORD *)v14 + 9) = *(_QWORD *)(v11 + 240);
  *((_DWORD *)v14 + 20) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v14 + 21) = *((_DWORD *)a1 + 7);
  v22 = *((_DWORD *)a1 + 39);
  *((_QWORD *)v14 + 7) |= 0x8000000000000uLL;
  *((_DWORD *)v14 + 60) = v22;
  v23 = (v32 == 0 ? 4 : 0) | (v19 == 0 ? 2 : 0) | (v21 == 0);
  v14[185] = v23;
  if ( a5 )
  {
    *((_DWORD *)v14 + 78) |= 0x80u;
    v24 = !v19 && v21;
    v14[344] = v24;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v23 != *((_BYTE *)a1 + 101) )
    goto LABEL_24;
  *((_QWORD *)v14 + 38) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v14 + 22) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v14 + 23) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v14 + 24) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v14 + 25) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v14 + 26) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v14 + 27) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v14 + 28) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v14 + 29) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v14 + 30) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v14 + 16) = *((_QWORD *)a1 + 4);
    v25 = *((_DWORD *)v14 + 34) ^ (*((_DWORD *)v14 + 34) ^ *((_DWORD *)a1 + 19)) & 7;
    *((_DWORD *)v14 + 34) = v25;
    *((_DWORD *)v14 + 34) = v25 & 7 | (*((_DWORD *)a1 + 18) >> 13) & 0x1F8;
  }
  v26 = *((_QWORD *)v14 + 7);
  if ( (v26 & 2) != 0 && !*((_DWORD *)v14 + 28) )
    goto LABEL_24;
  if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
  {
    if ( *((_DWORD *)a1 + 53) )
    {
      if ( !*((_DWORD *)a1 + 50) )
      {
        v27 = -1073741811;
        goto LABEL_69;
      }
      *((_DWORD *)v14 + 70) = *((_DWORD *)a1 + 49);
      *((_DWORD *)v14 + 71) = *((_DWORD *)a1 + 50);
      *((_DWORD *)v14 + 74) = *((_DWORD *)a1 + 53);
LABEL_38:
      v26 |= 0x1000000uLL;
      *((_QWORD *)v14 + 7) = v26;
      goto LABEL_39;
    }
LABEL_24:
    v15 = v8;
LABEL_10:
    WdLogSingleEntry1(2LL, v15);
    return 3221225485LL;
  }
  if ( (*((_QWORD *)v14 + 7) & 2LL) != 0 )
  {
    v28 = *((_DWORD *)v14 + 28);
    *((_DWORD *)v14 + 70) = *((_DWORD *)v14 + 27);
    *((_DWORD *)v14 + 71) = v28;
    if ( (*((_WORD *)a1 + 37) & 0x3F) != 0 )
      *((_DWORD *)v14 + 71) = v28 * (*((_WORD *)a1 + 37) & 0x3F);
    *((_DWORD *)v14 + 74) = 1;
    goto LABEL_38;
  }
LABEL_39:
  if ( (*(_DWORD *)a1 & 0x20000) != 0 )
  {
    *((_QWORD *)v14 + 26) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v21 && v19 )
      v29 = 0LL;
    else
      v29 = 0x20000000000000LL;
    v26 |= v29;
    *((_QWORD *)v14 + 7) = v26;
  }
  if ( (*(_DWORD *)a1 & 0x800LL) != 0 )
    *((_QWORD *)v14 + 25) = *(_QWORD *)((char *)a1 + 116);
  if ( (*(_DWORD *)a1 & 0x100LL) != 0 )
  {
    *((_DWORD *)v14 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 39) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v14 + 40) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 41) = *((_DWORD *)a1 + 23);
    v30 = *((_DWORD *)a1 + 24);
    *((_DWORD *)v14 + 44) = 0;
    *((_DWORD *)v14 + 45) = 0;
    *((_DWORD *)v14 + 43) = v30;
    v26 |= 0x100uLL;
    LOBYTE(v30) = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 7) = v26;
    v14[184] = v30;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000LL) != 0 )
  {
    v31 = *((_DWORD *)a1 + 24);
    v26 |= 0x8000000000uLL;
    *((_QWORD *)v14 + 7) = v26;
    *((_DWORD *)v14 + 43) = v31;
  }
  if ( (*(_QWORD *)a1 & 0x10000000000LL) != 0 )
  {
    v14[184] = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 7) = v26 | 0x10000000000LL;
  }
  if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    *((_OWORD *)v14 + 14) = *(_OWORD *)((char *)a1 + 140);
  if ( (*(_DWORD *)a1 & 0x200LL) != 0 )
  {
    switch ( *((_DWORD *)a1 + 26) )
    {
      case 1:
        v20 = 1;
        break;
      case 2:
        v20 = 2;
        break;
      case 3:
        v20 = 3;
        break;
      default:
        if ( *((_DWORD *)a1 + 26) != 4 )
          v20 = 0;
        break;
    }
    *((_DWORD *)v14 + 47) = v20;
  }
  v27 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 56), a7);
  if ( v27 >= 0 )
  {
    *((_DWORD *)v14 + 62) = 0;
    if ( (*(_BYTE *)a1 & 8) == 0 )
      return 0LL;
    v27 = ConvertDisplayConfigWireFormatToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 56));
    if ( v27 >= 0 )
      return 0LL;
  }
LABEL_69:
  WdLogSingleEntry1(2LL, v8);
  return (unsigned int)v27;
}
