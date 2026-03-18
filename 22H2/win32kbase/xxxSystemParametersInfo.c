/*
 * XREFs of xxxSystemParametersInfo @ 0x1C0094FF0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C014C300 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C00954E4 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     ReadPointerDeviceSettings @ 0x1C0095570 (ReadPointerDeviceSettings.c)
 *     ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x1C0095708 (-SpiGetStickyKeys@@YAHKPEAX@Z.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1C0095784 (ApiSetEditionCheckDesktopPolicy.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C0095820 (BroadcastSettingsUpdateToAllContainers.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00958C0 (_GetPrecisionTouchPadConfiguration.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AEFC4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x1C00BF780 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0134DF4 (_SetPrecisionTouchPadConfiguration.c)
 *     FastWriteProfileValue @ 0x1C0135590 (FastWriteProfileValue.c)
 *     WritePointerDeviceSettings @ 0x1C013F160 (WritePointerDeviceSettings.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C014E134 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C014E684 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E8D4 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EA20 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EBD4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C016B7E0 (EtwTraceSPIBlockedByFiltering.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C01DC9EC (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01E003C (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0232F9C (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // rcx
  int v11; // r14d
  unsigned __int8 v12; // r15
  __int64 v13; // r9
  unsigned __int8 v14; // bl
  int v15; // eax
  int StickyKeys; // eax
  char *v17; // rcx
  int v18; // eax
  int *v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  bool v22; // zf
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  char *v26; // rsi
  int v27; // r15d
  int v28; // [rsp+30h] [rbp-39h] BYREF
  void *v29; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+40h] [rbp-29h] BYREF
  int *v31; // [rsp+60h] [rbp-9h]
  __int64 v32; // [rsp+68h] [rbp-1h]

  v29 = a3;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !(unsigned int)IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1C0288368 > 5 && tlgKeywordOn((__int64)&dword_1C0288368, 0x400000000000LL) )
    {
      v28 = a1;
      v31 = &v28;
      v32 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288368,
        (unsigned __int8 *)dword_1C0256860,
        0LL,
        0LL,
        3u,
        &v30);
    }
    return 0LL;
  }
  v10 = 1LL;
  v28 = 0;
  v11 = 0;
  if ( (a4 & 1) != 0 )
  {
    v12 = 1;
    v13 = 0LL;
  }
  else
  {
    v12 = 0;
    v13 = 1LL;
  }
  v14 = v12 ^ 1;
  if ( a1 > 0xAF )
  {
    if ( a1 > 0x2026 )
    {
      if ( a1 == 8231 )
        goto LABEL_79;
      v23 = a1 - 8240;
      v22 = a1 == 8240;
    }
    else
    {
      switch ( a1 )
      {
        case 0x2026u:
          goto LABEL_78;
        case 0xB0u:
          *(_DWORD *)v29 = CInputGlobals::GetWakeOnDeviceTypes(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1), v7, v8, v13);
          return v14;
        case 0xB1u:
          return CInputGlobals::SetWakeableInputTypesToRegistry((CInputGlobals *)1, a2, (unsigned int)v29);
      }
      v23 = a1 - 8222;
      v22 = a1 == 8222;
    }
    if ( v22 )
      goto LABEL_78;
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v29, a4);
        goto LABEL_79;
      }
LABEL_78:
      v21 = gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
      goto LABEL_59;
    }
LABEL_79:
    v26 = (char *)&gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
    if ( v12 )
    {
      v14 = (unsigned int)FastWriteProfileValue(0LL, *((unsigned int *)v26 + 1), *((_QWORD *)v26 + 1), 4LL, &v29, 4) != 0;
      v11 = v14;
    }
    if ( !v14 )
      goto LABEL_85;
    v27 = (int)v29;
    *(_DWORD *)v26 = (_DWORD)v29;
    if ( a1 == 8225 )
      *(_DWORD *)(SGDGetUserSessionState(v10, v7, v8, v13) + 524) = v27;
    goto LABEL_84;
  }
  if ( a1 != 175 )
  {
    if ( a1 <= 0x3C )
    {
      switch ( a1 )
      {
        case '<':
          if ( a2 && a2 != 12 )
            return 0LL;
          v17 = (char *)v29;
          if ( !v29 )
            return 0LL;
          v18 = *(_DWORD *)v29;
          if ( *(_DWORD *)v29 != 12 )
            return 0LL;
          v19 = &dword_1C02905C4;
          break;
        case '2':
          if ( a2 && a2 != 24 )
            return 0LL;
          v17 = (char *)v29;
          if ( !v29 )
            return 0LL;
          v18 = *(_DWORD *)v29;
          if ( *(_DWORD *)v29 != 24 )
            return 0LL;
          v19 = &dword_1C02905FC;
          break;
        case '3':
          v15 = SpiSetFilterKeys(a2, v29, v12, v13, &v28);
          goto LABEL_30;
        case '4':
          if ( (a2 & 0xFFFFFFF7) != 0 )
            return 0LL;
          v17 = (char *)v29;
          if ( !v29 )
            return 0LL;
          v18 = *(_DWORD *)v29;
          if ( *(_DWORD *)v29 != 8 )
            return 0LL;
          v19 = &dword_1C02905BC;
          break;
        case '5':
          v15 = SpiSetToggleKeys(a2, v29, v12, v13, &v28);
          goto LABEL_30;
        case ':':
          StickyKeys = SpiGetStickyKeys(a2, v29);
          return StickyKeys != 0;
        case ';':
          v15 = SpiSetStickyKeys(a2, v29, v12, v13, &v28);
LABEL_30:
          v11 = v28;
          v14 = v15 != 0;
LABEL_85:
          if ( v11 && (a4 & 2) != 0 && (!qword_1C0295D48 || (int)qword_1C0295D48() >= 0) )
            EditionxxxBroadcastSPIChange(a1, v7, 1LL);
          return v14;
        default:
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v29, a4);
      }
      memmove(v17 + 4, v19, (unsigned int)(v18 - 4));
      return 1;
    }
    if ( a1 == 61 )
    {
      v15 = SpiSetAccessTimeOut(a2, v29, v12, v13, &v28);
      goto LABEL_30;
    }
    if ( a1 != 104 )
    {
      if ( a1 != 105 )
      {
        switch ( a1 )
        {
          case 0x92u:
            StickyKeys = ReadPointerDeviceSettings(146LL, v29, v8, v13);
            break;
          case 0x93u:
            v14 = (unsigned int)WritePointerDeviceSettings(147LL, v29, v12, v13) != 0;
            v11 = v14;
            goto LABEL_85;
          case 0xAEu:
            StickyKeys = GetPrecisionTouchPadConfiguration(v29, v7, v8, v13);
            break;
          default:
            return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v29, a4);
        }
        return StickyKeys != 0;
      }
      if ( (unsigned int)ApiSetEditionCheckDesktopPolicy(1LL, v7, v8, v13) )
      {
        v14 = 0;
        goto LABEL_85;
      }
      if ( v12 )
      {
        RtlStringCchPrintfW((unsigned __int16 *)&v30, 0x10uLL, L"%d", a2);
        v20 = -1LL;
        do
          ++v20;
        while ( *((_WORD *)&v30.Ptr + v20) );
        v14 = (unsigned int)FastWriteProfileValue(0LL, 4LL, 14LL, 1LL, &v30, 2 * (int)v20 + 2) != 0;
        v11 = v14;
      }
      if ( !v14 )
        goto LABEL_85;
      *((_DWORD *)gpsi + 1247) = a2;
LABEL_84:
      BroadcastSettingsUpdateToAllContainers();
      goto LABEL_85;
    }
    v21 = *((_DWORD *)gpsi + 1247);
LABEL_59:
    *(_DWORD *)v29 = v21;
    return v14;
  }
  v11 = SetPrecisionTouchPadConfiguration(v29, v7, v8, v13);
  if ( v11 )
  {
    v14 = 1;
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    goto LABEL_85;
  }
  return 0;
}
