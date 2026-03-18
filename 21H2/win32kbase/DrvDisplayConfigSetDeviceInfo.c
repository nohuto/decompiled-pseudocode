/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C0173980
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvIsWddmDriverPresent @ 0x1C0070CE0 (DrvIsWddmDriverPresent.c)
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C01530F0 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0173EB0 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r10d
  struct D3DKMT_GETPATHSMODALITY *v22; // rsi
  int PathsModality; // eax
  int v24; // ebx
  __int64 v25; // r8
  int v26; // eax
  struct D3DKMT_GETPATHSMODALITY *v27; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  if ( (unsigned int)DispConfigTypes::GetSetterTypeSize(*a1) != a1[1] )
    return -1073741811LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C0296888)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result < 0 )
    return result;
  v7 = *a1;
  if ( (int)v7 <= -6 )
  {
    switch ( (_DWORD)v7 )
    {
      case 0xFFFFFFFA:
        if ( a1[1] == 28 )
        {
          v13 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
          v9 = v13;
          if ( v13 < 0 )
            goto LABEL_22;
          if ( a1[6] )
          {
            v14 = 4;
            v15 = 2191;
            goto LABEL_51;
          }
          return (unsigned int)v9;
        }
        return -1073741811LL;
      case 0xFFFFFFE4:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
LABEL_21:
          v11 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
          v9 = v11;
          if ( v11 < 0 )
          {
LABEL_22:
            v12 = v9;
LABEL_23:
            WdLogSingleEntry2(3LL, a1, v12);
          }
          return (unsigned int)v9;
        }
        break;
      case 0xFFFFFFE5:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          LODWORD(v9) = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
          if ( (_DWORD)v9 == -1073741802 )
            LODWORD(v9) = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          if ( (int)v9 >= 0 )
            return (unsigned int)v9;
          v12 = (int)v9;
          goto LABEL_23;
        }
        break;
      default:
        switch ( (_DWORD)v7 )
        {
          case 0xFFFFFFE9:
            v10 = a1[1] == 48;
            break;
          case 0xFFFFFFED:
            v10 = a1[1] == 24;
            break;
          case 0xFFFFFFEE:
            v10 = a1[1] == 28;
            break;
          case 0xFFFFFFF0:
            if ( a1[1] == 68 )
            {
              v8 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
              v9 = v8;
              if ( v8 >= 0 )
              {
                if ( v8 != 259 )
                {
                  if ( v8 == 255 )
                  {
                    if ( gpGdiSharedMemory )
                      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
                  }
                  return (unsigned int)v9;
                }
                goto LABEL_50;
              }
              goto LABEL_22;
            }
            return -1073741811LL;
          default:
LABEL_42:
            LODWORD(v9) = -1073741811;
            WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v6, *v5);
            return (unsigned int)v9;
        }
LABEL_20:
        if ( v10 )
          goto LABEL_21;
        return -1073741811LL;
    }
    return 3221225507LL;
  }
  if ( (_DWORD)v7 == -4 )
  {
    if ( a1[1] == 24 )
    {
      LODWORD(v9) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
      return (unsigned int)v9;
    }
    return -1073741811LL;
  }
  if ( (_DWORD)v7 != 5 )
  {
    switch ( (_DWORD)v7 )
    {
      case 8:
        if ( a1[1] != 24 )
          return -1073741811LL;
        v17 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
        v9 = v17;
        if ( v17 < 0 )
          goto LABEL_22;
        break;
      case 0xA:
        if ( a1[1] != 24 )
          return -1073741811LL;
        v16 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0296758)(0LL, a1);
        v9 = v16;
        if ( v16 < 0 )
          goto LABEL_22;
        if ( v16 == 255 )
          return (unsigned int)v9;
        break;
      case 0xD:
        v10 = a1[1] == 312;
        goto LABEL_20;
      default:
        goto LABEL_42;
    }
LABEL_50:
    v14 = 0;
    v15 = 2447;
LABEL_51:
    v18 = xxxUserSetDisplayConfig(0, 0LL, v15, v14, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
    LODWORD(v9) = v18;
    if ( v18 < 0 )
      WdLogSingleEntry1(3LL, v18);
    return (unsigned int)v9;
  }
  if ( a1[1] != 24 )
    return -1073741811LL;
  WdLogSingleEntry5(4LL, v7, a1[3], *v6, *v5, a1[5] & 1);
  v19 = ((__int64 (*)(void))qword_1C0296770)();
  v21 = a1[5];
  LODWORD(v9) = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry5(2LL, v19, a1[3], *v6, *v5, v21 & 1);
    return (unsigned int)v9;
  }
  v27 = 0LL;
  v22 = 0LL;
  if ( (v21 & 1) == 0 )
  {
LABEL_64:
    v25 = (a1[5] & 1) == 0;
    LODWORD(v25) = v25 | 0x80000000;
    v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C0296740)(*(_QWORD *)v6, *v5, v25, 0LL);
    LODWORD(v9) = v26;
    if ( v26 < 0
      || v22
      && (v26 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0296710)(0x40000000LL, v22),
          v26 < 0) )
    {
      WdLogSingleEntry5(2LL, v26, a1[3], *v6, *v5, a1[5] & 1);
    }
    if ( (int)((__int64 (*)(void))qword_1C0296778)() < 0 )
      WdLogSingleEntry0(1LL);
    FreePathsModality(v22);
    return (unsigned int)v9;
  }
  PathsModality = GetPathsModality(v20, &v27, 0x40u, 0);
  v24 = PathsModality;
  if ( PathsModality >= 0 || (WdLogSingleEntry5(2LL, PathsModality, a1[3], *v6, *v5, a1[5] & 1), v24 != -1073741801) )
  {
    v22 = v27;
    goto LABEL_64;
  }
  if ( (int)((__int64 (*)(void))qword_1C0296778)() < 0 )
    WdLogSingleEntry0(1LL);
  return 3221225495LL;
}
