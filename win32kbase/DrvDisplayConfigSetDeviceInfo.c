/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C0193490
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     DrvIsWddmDriverPresent @ 0x1C0022640 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00271E8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0027994 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0169004 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0193A60 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int *v8; // r14
  unsigned int *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r10d
  struct D3DKMT_GETPATHSMODALITY *v32; // rsi
  int PathsModality; // eax
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  struct D3DKMT_GETPATHSMODALITY *v44; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent((__int64)a1) )
    return 3221225659LL;
  if ( (unsigned int)DispConfigTypes::GetSetterTypeSize(*a1) != a1[1] )
    return -1073741811LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6, v5);
  v8 = (unsigned int *)(a1 + 4);
  v9 = (unsigned int *)(a1 + 2);
  result = (*(__int64 (__fastcall **)(int *, _QWORD, int *, int *))(DxgkWin32kInterface + 552))(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result < 0 )
    return result;
  v11 = *a1;
  if ( (int)v11 <= -6 )
  {
    switch ( (_DWORD)v11 )
    {
      case 0xFFFFFFFA:
        if ( a1[1] == 28 )
        {
          v19 = DxDdGetDxgkWin32kInterface(v10, v11);
          v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v19 + 248))(0LL, a1);
          if ( v14 < 0 )
            goto LABEL_22;
          if ( a1[6] )
          {
            v20 = 4;
            v21 = 2191;
            goto LABEL_50;
          }
          return (unsigned int)v14;
        }
        return -1073741811LL;
      case 0xFFFFFFE2:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
LABEL_21:
          v17 = DxDdGetDxgkWin32kInterface(v10, v11);
          v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v17 + 248))(0LL, a1);
          if ( v14 < 0 )
LABEL_22:
            WdLogSingleEntry2(3LL, a1);
          return (unsigned int)v14;
        }
        break;
      case 0xFFFFFFE5:
        if ( (unsigned int)a1[1] >= 0x18 )
        {
          v18 = DxDdGetDxgkWin32kInterface(v10, v11);
          v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v18 + 248))(0LL, a1);
          if ( v14 == -1073741802 )
            v14 = xxxUserSetDisplayConfig(0, 0LL, 0x98Fu, 0, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
          if ( v14 >= 0 )
            return (unsigned int)v14;
          goto LABEL_22;
        }
        break;
      default:
        switch ( (_DWORD)v11 )
        {
          case 0xFFFFFFE9:
            v16 = a1[1] == 48;
            break;
          case 0xFFFFFFED:
            v16 = a1[1] == 24;
            break;
          case 0xFFFFFFEE:
            v16 = a1[1] == 28;
            break;
          case 0xFFFFFFF0:
            if ( a1[1] == 68 )
            {
              v12 = DxDdGetDxgkWin32kInterface(v10, v11);
              v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v12 + 248))(0LL, a1);
              if ( v14 >= 0 )
              {
                if ( v14 != 259 )
                {
                  if ( v14 == 255 )
                  {
                    v15 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 24) + 1928LL);
                    if ( v15 )
                      _InterlockedIncrement((volatile signed __int32 *)(v15 + 1573008));
                  }
                  return (unsigned int)v14;
                }
                goto LABEL_49;
              }
              goto LABEL_22;
            }
            return -1073741811LL;
          default:
LABEL_41:
            v14 = -1073741811;
            WdLogSingleEntry5(2LL, -1073741811LL, *a1, a1[3], *v9, *v8);
            return (unsigned int)v14;
        }
LABEL_20:
        if ( v16 )
          goto LABEL_21;
        return -1073741811LL;
    }
    return 3221225507LL;
  }
  if ( (_DWORD)v11 == -4 )
  {
    if ( a1[1] == 24 )
      return (unsigned int)DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
    return -1073741811LL;
  }
  if ( (_DWORD)v11 != 5 )
  {
    switch ( (_DWORD)v11 )
    {
      case 8:
        if ( a1[1] != 24 )
          return -1073741811LL;
        v23 = DxDdGetDxgkWin32kInterface(v10, v11);
        v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v23 + 248))(0LL, a1);
        if ( v14 < 0 )
          goto LABEL_22;
        break;
      case 0xA:
        if ( a1[1] != 24 )
          return -1073741811LL;
        v22 = DxDdGetDxgkWin32kInterface(v10, v11);
        v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v22 + 248))(0LL, a1);
        if ( v14 < 0 )
          goto LABEL_22;
        if ( v14 == 255 )
          return (unsigned int)v14;
        break;
      case 0xD:
        v16 = a1[1] == 312;
        goto LABEL_20;
      default:
        goto LABEL_41;
    }
LABEL_49:
    v20 = 0;
    v21 = 2447;
LABEL_50:
    v24 = xxxUserSetDisplayConfig(0, 0LL, v21, v20, 0LL, 1, 0LL, 0LL, 0LL, a2, 0LL);
    v14 = v24;
    if ( v24 < 0 )
      WdLogSingleEntry1(3LL, v24);
    return (unsigned int)v14;
  }
  if ( a1[1] != 24 )
    return -1073741811LL;
  WdLogSingleEntry5(4LL, v11, a1[3], *v9, *v8, a1[5] & 1);
  v27 = DxDdGetDxgkWin32kInterface(v26, v25);
  v28 = (*(__int64 (**)(void))(v27 + 272))();
  v31 = a1[5];
  v14 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry5(2LL, v28, a1[3], *v9, *v8, v31 & 1);
    return (unsigned int)v14;
  }
  v44 = 0LL;
  v32 = 0LL;
  if ( (v31 & 1) == 0 )
  {
LABEL_63:
    v36 = DxDdGetDxgkWin32kInterface(v30, v29);
    v37 = (a1[5] & 1) == 0;
    LODWORD(v37) = v37 | 0x80000000;
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v36 + 224))(*(_QWORD *)v9, *v8, v37, 0LL);
    v14 = v38;
    if ( v38 < 0
      || v32
      && (v41 = DxDdGetDxgkWin32kInterface(v40, v39),
          v38 = (*(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v41 + 176))(0x40000000LL, v32),
          v38 < 0) )
    {
      WdLogSingleEntry5(2LL, v38, a1[3], *v9, *v8, a1[5] & 1);
    }
    v42 = DxDdGetDxgkWin32kInterface(v40, v39);
    if ( (*(int (**)(void))(v42 + 280))() < 0 )
      WdLogSingleEntry0(1LL);
    FreePathsModality(v32, v43);
    return (unsigned int)v14;
  }
  PathsModality = GetPathsModality(v30, &v44, 0x40u, 0);
  v34 = PathsModality;
  if ( PathsModality >= 0 || (WdLogSingleEntry5(2LL, PathsModality, a1[3], *v9, *v8, a1[5] & 1), v34 != -1073741801) )
  {
    v32 = v44;
    goto LABEL_63;
  }
  v35 = DxDdGetDxgkWin32kInterface(v30, v29);
  if ( (*(int (**)(void))(v35 + 280))() < 0 )
    WdLogSingleEntry0(1LL);
  return 3221225495LL;
}
