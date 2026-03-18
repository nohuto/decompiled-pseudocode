/*
 * XREFs of xxxSystemParametersInfo @ 0x1C0165BD0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ReadPointerDeviceSettings @ 0x1C0082DA0 (ReadPointerDeviceSettings.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C008B230 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610 (BroadcastSettingsUpdateToAllContainers.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1C00BFBD8 (ApiSetEditionCheckDesktopPolicy.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C14FC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C00DCA0C (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0141828 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0148BC0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC (_SetPrecisionTouchPadConfiguration.c)
 *     FastWriteProfileValue @ 0x1C0149810 (FastWriteProfileValue.c)
 *     WritePointerDeviceSettings @ 0x1C0151F20 (WritePointerDeviceSettings.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C01650C4 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0165450 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01656A0 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0178890 (EtwTraceSPIBlockedByFiltering.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1C020C288 (ApiSetEditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  char IsWin32KFilterEnabled; // al
  CInputGlobals *v8; // rcx
  int v9; // r8d
  __int64 v10; // r9
  int v12; // r14d
  unsigned __int8 v13; // r15
  unsigned int v14; // r9d
  unsigned __int8 v15; // bl
  int v16; // eax
  _WORD *v17; // rdx
  _DWORD *v18; // rcx
  int PrecisionTouchPadConfiguration; // eax
  __int64 v20; // rax
  int v21; // ecx
  bool v22; // zf
  unsigned int v23; // eax
  char *v24; // rsi
  int v25; // [rsp+30h] [rbp-48h] BYREF
  void *v26; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v27[16]; // [rsp+40h] [rbp-38h] BYREF

  v26 = a3;
  IsWin32KFilterEnabled = PsIsWin32KFilterEnabled();
  v9 = 0;
  if ( IsWin32KFilterEnabled && !IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1C028D680 > 5 && tlgKeywordOn((__int64)&dword_1C028D680, 0x400000000000LL) )
    {
      v25 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1C028D680,
        byte_1C025BA31,
        0LL,
        v10,
        (__int64)&v25);
    }
    return 0LL;
  }
  v25 = v9;
  v12 = v9;
  if ( (a4 & 1) != 0 )
  {
    v13 = 1;
    v14 = v9;
  }
  else
  {
    v13 = v9;
    v14 = 1;
  }
  v15 = v13 ^ 1;
  if ( a1 > 0xAE )
  {
    if ( a1 > 0x2020 )
    {
      switch ( a1 )
      {
        case 0x2021u:
          goto LABEL_83;
        case 0x2026u:
          goto LABEL_82;
        case 0x2027u:
LABEL_83:
          v24 = (char *)&gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
          if ( v13 )
          {
            v15 = (unsigned int)FastWriteProfileValue(
                                  0LL,
                                  *((_DWORD *)v24 + 1),
                                  *((const WCHAR **)v24 + 1),
                                  4u,
                                  &v26,
                                  4u) != 0;
            v12 = v15;
          }
          if ( !v15 )
            goto LABEL_88;
          *(_DWORD *)v24 = (_DWORD)v26;
          goto LABEL_87;
      }
      v23 = a1 - 8240;
      v22 = a1 == 8240;
    }
    else
    {
      switch ( a1 )
      {
        case 0x2020u:
          goto LABEL_82;
        case 0xAFu:
          v12 = SetPrecisionTouchPadConfiguration((__int64)v26);
          if ( v12 )
          {
            v15 = 1;
            PTPTelemetry::PTPConfigUpdateEx(0LL);
            goto LABEL_88;
          }
          return 0;
        case 0xB0u:
          v21 = *((_DWORD *)gpInputGlobals + 25);
          goto LABEL_61;
        case 0xB1u:
          return CInputGlobals::SetWakeableInputTypesToRegistry(v8, a2, (unsigned int)v26);
      }
      v23 = a1 - 8222;
      v22 = a1 == 8222;
    }
    if ( !v22 )
    {
      if ( v23 != 1 )
        return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v26, a4);
      goto LABEL_83;
    }
LABEL_82:
    v21 = gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
    goto LABEL_61;
  }
  if ( a1 == 174 )
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration((__int64)v26);
    return PrecisionTouchPadConfiguration != 0;
  }
  if ( a1 > 0x3C )
  {
    if ( a1 == 61 )
    {
      v16 = SpiSetAccessTimeOut(a2, (unsigned int *)v26, v13, v14, &v25);
      goto LABEL_33;
    }
    if ( a1 != 104 )
    {
      if ( a1 != 105 )
      {
        if ( a1 != 146 )
        {
          if ( a1 == 147 )
          {
            v15 = (unsigned int)WritePointerDeviceSettings(147, v26, v13) != 0;
            v12 = v15;
            goto LABEL_88;
          }
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v26, a4);
        }
        PrecisionTouchPadConfiguration = ReadPointerDeviceSettings(146, v26);
        return PrecisionTouchPadConfiguration != 0;
      }
      if ( (unsigned int)ApiSetEditionCheckDesktopPolicy() )
      {
        v15 = 0;
        goto LABEL_88;
      }
      if ( v13 )
      {
        RtlStringCchPrintfW(v27, 16LL, L"%d", a2);
        v20 = -1LL;
        do
          ++v20;
        while ( v27[v20] );
        v15 = (unsigned int)FastWriteProfileValue(0LL, 4u, (const WCHAR *)0xE, 1u, v27, 2 * (int)v20 + 2) != 0;
        v12 = v15;
      }
      if ( !v15 )
        goto LABEL_88;
      *((_DWORD *)gpsi + 1247) = a2;
LABEL_87:
      BroadcastSettingsUpdateToAllContainers();
      goto LABEL_88;
    }
    v21 = *((_DWORD *)gpsi + 1247);
LABEL_61:
    *(_DWORD *)v26 = v21;
    return v15;
  }
  switch ( a1 )
  {
    case '<':
      if ( a2 && a2 != 12 || !v26 || *(_DWORD *)v26 != 12 )
        return 0LL;
      *(_QWORD *)((char *)v26 + 4) = qword_1C0295A14;
      return 1;
    case '2':
      if ( a2 && a2 != 24 )
        return 0LL;
      v18 = v26;
      if ( !v26 || *(_DWORD *)v26 != 24 )
        return 0LL;
      *(_OWORD *)((char *)v26 + 4) = xmmword_1C0295A4C;
      v18[5] = Value;
      return 1;
    case '3':
      v16 = SpiSetFilterKeys(a2, (struct tagFILTERKEYS *)v26, v13, v14, &v25);
      goto LABEL_33;
    case '4':
      if ( (a2 & 0xFFFFFFF7) != 0 || !v26 || *(_DWORD *)v26 != 8 )
        return 0LL;
      *((_DWORD *)v26 + 1) = dword_1C0295A0C;
      return 1;
    case '5':
      v16 = SpiSetToggleKeys(a2, (unsigned int *)v26, v13, v14, &v25);
      goto LABEL_33;
  }
  if ( a1 != 58 )
  {
    if ( a1 == 59 )
    {
      v16 = SpiSetStickyKeys(a2, v26, v13, v14, &v25);
LABEL_33:
      v12 = v25;
      v15 = v16 != 0;
LABEL_88:
      if ( v12 && (a4 & 2) != 0 )
        ApiSetEditionxxxBroadcastSPIChange(a1);
      return v15;
    }
    return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v26, a4);
  }
  v17 = v26;
  if ( (a2 & 0xFFFFFFF7) == 0 && v26 && *(_DWORD *)v26 == 8 )
  {
    *((_DWORD *)v26 + 1) = dword_1C0295A44;
    v17[3] = v9;
    *((_DWORD *)v17 + 1) |= (unsigned __int8)gLatchBits << 24;
    *((_DWORD *)v17 + 1) |= (unsigned __int8)gLockBits << 16;
    return 1;
  }
  return (unsigned __int8)v9;
}
