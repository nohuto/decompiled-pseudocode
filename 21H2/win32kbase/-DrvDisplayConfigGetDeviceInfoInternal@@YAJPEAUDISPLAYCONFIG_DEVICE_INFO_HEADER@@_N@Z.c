/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C4CF0 (DrvDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070B6C (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070BC4 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvIsWddmDriverPresent @ 0x1C0070CE0 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00BCEF4 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0173850 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // esi
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v16; // edi
  int v18; // eax
  wchar_t *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-28h]
  int v27; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v7 = 0;
  if ( !(unsigned __int8)DispConfigTypes::AllowInAnySession(*(unsigned int *)a1)
    && !(unsigned int)DrvIsWddmDriverPresent(v5, v4) )
  {
    return 3221225659LL;
  }
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(v6) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v9 = (_DWORD *)((char *)a1 + 16);
  v10 = *((unsigned int *)a1 + 4);
  v11 = (_QWORD *)((char *)a1 + 8);
  if ( (_DWORD)v10 != -1 )
  {
    v12 = ((__int64 (__fastcall *)(char *, __int64, char *, char *))qword_1C0296888)(
            (char *)a1 + 8,
            v10,
            (char *)a1 + 8,
            (char *)a1 + 16);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( *(_DWORD *)a1 == -21 )
      {
        *((_DWORD *)a1 + 506) = 1144084231;
        WdLogSingleEntry5(2LL, *((int *)a1 + 3), *(unsigned int *)v11, (unsigned int)*v9, v12, 1144084231LL);
      }
      return v13;
    }
  }
  v14 = *(_DWORD *)a1;
  if ( *(int *)a1 <= -9 )
  {
    if ( v14 != -9 )
    {
      switch ( v14 )
      {
        case -29:
        case -26:
        case -24:
        case -22:
        case -14:
        case -13:
        case -12:
        case -10:
          goto LABEL_15;
        case -25:
          if ( *((_DWORD *)a1 + 1) < 0x28u )
            return 3221225507LL;
          return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))qword_1C0296968)(
                                 *((_QWORD *)a1 + 1),
                                 (unsigned int)*v9,
                                 a1);
        case -21:
        case -11:
          return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
        case -20:
          *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
          *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
          *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
          *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession(v22);
          *((_DWORD *)a1 + 9) = gProtocolType == 0;
          *((_DWORD *)a1 + 10) = gProtocolType == -1;
          *((_WORD *)a1 + 22) = gProtocolType;
          *((_QWORD *)a1 + 6) = gRemoteTerminalLuid;
          return 0;
        case -15:
          if ( *((_DWORD *)a1 + 1) < 0x20u )
            return 3221225507LL;
          v23 = *((unsigned int *)a1 + 5);
          v24 = (unsigned int)*v9;
          v26 = *((_QWORD *)a1 + 3);
          v25 = *((_QWORD *)a1 + 1);
          v27 = 0;
          v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C0296920)(
                  v25,
                  v24,
                  v23,
                  &v27,
                  v26);
          *((_DWORD *)a1 + 5) = v27;
          return v16;
        default:
          return (unsigned int)-1073741811;
      }
    }
    if ( *((_DWORD *)a1 + 1) >= 0x18u )
    {
      v20 = (unsigned int)*v9;
      v21 = *v11;
      v27 = 0;
      v16 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C0296768)(v21, v20, 0LL, &v27, 0LL);
      if ( (v16 & 0x80000000) == 0 )
      {
        LOBYTE(v7) = v27 == 2;
        *((_DWORD *)a1 + 5) = v7;
      }
      return v16;
    }
    return 3221225507LL;
  }
  if ( v14 > 1 )
  {
    if ( v14 > 4 && (v14 <= 5 || v14 != 9 && v14 > 7 && (v14 <= 10 || v14 > 12 && v14 != 100)) )
      return (unsigned int)-1073741811;
    goto LABEL_15;
  }
  if ( v14 != 1 )
  {
    if ( v14 == -7 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x3ACu )
      {
        v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))qword_1C0296768)(
                *v11,
                (unsigned int)*v9,
                a1,
                0LL,
                0LL);
        if ( a2 )
          GetMonitorBrightnessCaps(a1);
        return v16;
      }
      return 3221225507LL;
    }
    if ( v14 == -8 )
    {
      if ( *((_DWORD *)a1 + 1) < 0x218u )
        return 3221225507LL;
      return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *, char *))qword_1C0296900)(
                             *v11,
                             (unsigned int)*v9,
                             512LL,
                             (char *)a1 + 20,
                             (char *)a1 + 24);
    }
    if ( v14 != -5 )
    {
      if ( v14 != -3 )
      {
        if ( v14 != -2 )
          return (unsigned int)-1073741811;
        return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
      }
      if ( *((_DWORD *)a1 + 1) == 32 )
        return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
      return 3221225485LL;
    }
LABEL_15:
    LOBYTE(v8) = 1;
    v18 = ((__int64 (__fastcall *)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))qword_1C0296758)(v8, a1);
    v16 = v18;
    if ( v18 < 0 )
      WdLogSingleEntry2(3LL, a1, v18);
    return v16;
  }
  v19 = gpGraphicsDeviceList;
  if ( *((_DWORD *)a1 + 1) < 0x54u )
    return 3221225507LL;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      if ( *((_DWORD *)a1 + 2) == *((_DWORD *)v19 + 62)
        && *((_DWORD *)a1 + 3) == *((_DWORD *)v19 + 63)
        && *((_DWORD *)v19 + 64) == *v9 )
      {
        break;
      }
      v19 = (wchar_t *)*((_QWORD *)v19 + 16);
    }
    while ( v19 );
    if ( v19 )
    {
      *(_OWORD *)((char *)a1 + 20) = *((_OWORD *)v19 + 4);
      *(_OWORD *)((char *)a1 + 36) = *((_OWORD *)v19 + 5);
      *(_OWORD *)((char *)a1 + 52) = *((_OWORD *)v19 + 6);
      *(_OWORD *)((char *)a1 + 68) = *((_OWORD *)v19 + 7);
      return 0;
    }
  }
  WdLogSingleEntry0(3LL);
  return 3221226021LL;
}
