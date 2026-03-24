/*
 * XREFs of xxxSystemParametersInfo @ 0x1C000BBC0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C01351A0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C000B2E0 (_GetPrecisionTouchPadConfiguration.c)
 *     ReadPointerDeviceSettings @ 0x1C000BF10 (ReadPointerDeviceSettings.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C000C1E0 (BroadcastSettingsUpdateToAllContainers.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1C000C200 (ApiSetEditionCheckDesktopPolicy.c)
 *     CreateProfileUserName @ 0x1C000C7E0 (CreateProfileUserName.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0067D78 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C011C010 (_SetPrecisionTouchPadConfiguration.c)
 *     FastWriteProfileValue @ 0x1C011DCD0 (FastWriteProfileValue.c)
 *     WritePointerDeviceSettings @ 0x1C01278B0 (WritePointerDeviceSettings.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C0138018 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C01383A4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138644 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01387B4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138944 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C014C580 (EtwTraceSPIBlockedByFiltering.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A6B68 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1C01CE668 (ApiSetEditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  unsigned __int8 v8; // bl
  __int64 v9; // r8
  int v10; // r15d
  unsigned __int8 v11; // r12
  __int64 v12; // r9
  unsigned __int8 v13; // di
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // eax
  _WORD *v18; // rdx
  int v19; // ecx
  int PrecisionTouchPadConfiguration; // eax
  _DWORD *v21; // rcx
  __int64 v22; // r13
  void (__fastcall *v23)(wchar_t *); // rax
  wchar_t *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rax
  __int64 ProfileUserName; // r13
  char *v30; // rsi
  int v31; // [rsp+30h] [rbp-59h] BYREF
  void *v32; // [rsp+38h] [rbp-51h] BYREF
  int v33; // [rsp+40h] [rbp-49h]
  __int128 v34; // [rsp+48h] [rbp-41h] BYREF
  __int64 v35; // [rsp+58h] [rbp-31h]
  wchar_t Dest[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  int *v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+88h] [rbp-1h]

  v32 = a3;
  v8 = 0;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !(unsigned int)IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1C024A1E0 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1C024A1E0, 0x400000000000LL, v25, v26) )
    {
      v31 = a1;
      v38 = &v31;
      v39 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (int)&dword_1C024A1E0,
        (int)&dword_1C0219D17,
        0,
        0,
        3u,
        (PEVENT_DATA_DESCRIPTOR)Dest);
    }
    return 0LL;
  }
  v9 = 1LL;
  v31 = 0;
  v10 = 0;
  if ( (a4 & 1) != 0 )
  {
    v11 = 1;
    v12 = 0LL;
  }
  else
  {
    v11 = 0;
    v12 = 1LL;
  }
  v13 = v11 ^ 1;
  v33 = a4 & 2;
  v14 = 146LL;
  v35 = 0LL;
  v34 = 0LL;
  if ( a1 > 0x92 )
  {
    v14 = 147LL;
    switch ( a1 )
    {
      case 0x93u:
        v13 = (unsigned int)WritePointerDeviceSettings(147LL, v32, v11, v12) != 0;
        v10 = v13;
        goto LABEL_64;
      case 0xAEu:
        PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration((__int64)v32);
        return PrecisionTouchPadConfiguration != 0;
      case 0xAFu:
        v10 = SetPrecisionTouchPadConfiguration(v32, v7, 1LL, v12);
        if ( v10 )
        {
          v13 = 1;
          PTPTelemetry::PTPConfigUpdateEx(0LL);
          goto LABEL_64;
        }
        return v8;
    }
    if ( a1 != 8222 )
    {
      if ( a1 == 8223 )
        goto LABEL_91;
      if ( a1 != 8224 )
      {
        if ( a1 == 8225 )
          goto LABEL_91;
        if ( a1 != 8230 )
        {
          if ( a1 != 8231 )
            goto LABEL_11;
LABEL_91:
          v37 = 0LL;
          *(_OWORD *)Dest = 0LL;
          ProfileUserName = CreateProfileUserName(Dest);
          v30 = (char *)&gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
          if ( v11 )
          {
            v13 = (unsigned int)FastWriteProfileValue(
                                  ProfileUserName,
                                  *((unsigned int *)v30 + 1),
                                  *((_QWORD *)v30 + 1),
                                  4LL,
                                  &v32,
                                  4) != 0;
            v10 = v13;
          }
          if ( v13 )
          {
            *(_DWORD *)v30 = (_DWORD)v32;
            BroadcastSettingsUpdateToAllContainers();
          }
          if ( !ProfileUserName )
            goto LABEL_64;
          v23 = (void (__fastcall *)(wchar_t *))qword_1C02570E8;
          if ( !qword_1C02570E8 )
            goto LABEL_64;
          v24 = Dest;
          goto LABEL_63;
        }
      }
    }
    v19 = gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
LABEL_45:
    *(_DWORD *)v32 = v19;
    return v13;
  }
  if ( a1 == 146 )
  {
    PrecisionTouchPadConfiguration = ReadPointerDeviceSettings(146LL, v32, 1LL, v12);
    return PrecisionTouchPadConfiguration != 0;
  }
  if ( a1 > 0x3B )
  {
    if ( a1 != 60 )
    {
      if ( a1 != 61 )
      {
        if ( a1 != 104 )
        {
          if ( a1 != 105 )
            goto LABEL_11;
          v22 = CreateProfileUserName(&v34);
          if ( (unsigned int)ApiSetEditionCheckDesktopPolicy() )
          {
            v11 = 0;
            v13 = 0;
          }
          if ( v11 )
          {
            RtlStringCchPrintfW(Dest, 0x10uLL, L"%d", a2);
            v28 = -1LL;
            do
              ++v28;
            while ( Dest[v28] );
            v13 = (unsigned int)FastWriteProfileValue(v22, 4LL, 14LL, 1LL, Dest, 2 * (int)v28 + 2) != 0;
            v10 = v13;
          }
          if ( v13 )
          {
            *((_DWORD *)gpsi + 1247) = a2;
            BroadcastSettingsUpdateToAllContainers();
          }
          if ( !v22 )
            goto LABEL_64;
          v23 = (void (__fastcall *)(wchar_t *))qword_1C02570E8;
          if ( !qword_1C02570E8 )
            goto LABEL_64;
          v24 = (wchar_t *)&v34;
LABEL_63:
          v23(v24);
LABEL_64:
          if ( v10 && v33 )
            ApiSetEditionxxxBroadcastSPIChange(a1);
          return v13;
        }
        v19 = *((_DWORD *)gpsi + 1247);
        goto LABEL_45;
      }
      v27 = SpiSetAccessTimeOut(a2, v32, v11, v12, &v31);
LABEL_80:
      v10 = v31;
      v13 = v27 != 0;
      goto LABEL_64;
    }
    if ( a2 && a2 != 12 || !v32 || *(_DWORD *)v32 != 12 )
      return 0LL;
    *(_QWORD *)((char *)v32 + 4) = qword_1C0250BF4;
    return 1;
  }
  switch ( a1 )
  {
    case ';':
      v27 = SpiSetStickyKeys(a2, v32, v11, v12, &v31);
      goto LABEL_80;
    case '2':
      if ( a2 && a2 != 24 )
        return 0LL;
      v21 = v32;
      if ( !v32 || *(_DWORD *)v32 != 24 )
        return 0LL;
      *(_OWORD *)((char *)v32 + 4) = xmmword_1C0250C04;
      v21[5] = Value;
      return 1;
    case '3':
      v27 = SpiSetFilterKeys(a2, v32, v11, v12, &v31);
      goto LABEL_80;
    case '4':
      if ( (a2 & 0xFFFFFFF7) != 0 || !v32 || *(_DWORD *)v32 != 8 )
        return 0LL;
      *((_DWORD *)v32 + 1) = dword_1C0250BCC;
      return 1;
    case '5':
      v27 = SpiSetToggleKeys(a2, v32, v11, v12, &v31);
      goto LABEL_80;
    case ':':
      v18 = v32;
      if ( (a2 & 0xFFFFFFF7) == 0 && v32 && *(_DWORD *)v32 == 8 )
      {
        *((_DWORD *)v32 + 1) = dword_1C0250C1C;
        v18[3] = 0;
        v8 = 1;
        *((_DWORD *)v18 + 1) |= (unsigned __int8)gLatchBits << 24;
        *((_DWORD *)v18 + 1) |= (unsigned __int8)gLockBits << 16;
      }
      return v8;
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        10,
        438,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  v15 = 0;
  if ( qword_1C02578C8 )
    v16 = qword_1C02578C8(v14, v7, v9, v12);
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C02578D0 )
    v15 = qword_1C02578D0(a1, a2, v32, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        10,
        439,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return v15;
}
