/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001790 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C0001D10 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C0001D8C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001F80 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C00077DC (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C000A6FC (HUBSM_AddHsmEvent.c)
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage @ 0x1C000CE58 (Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C00775B0 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C007C974 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0082A18 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C0085AE8 (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x1C008908C (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C008BFA4 (WMI_RegisterHub.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008CAD8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rax
  __int64 v7; // rbx
  int IsEnabledDeviceUsage; // eax
  int v9; // edx
  bool v10; // zf
  const WCHAR *v11; // rax
  const void *v12; // rax
  int v13; // esi
  __int64 Pool2; // rax
  int FirmwareUpdateDevice; // eax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  int v22; // r11d
  int v23; // r15d
  int v24; // r12d
  int v25; // r13d
  int v26; // r10d
  char v27; // r14
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  const EVENT_DESCRIPTOR *v31; // rdx
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  void *v36; // rax
  void *v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // r8
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v44; // [rsp+28h] [rbp-89h]
  __int64 v45; // [rsp+30h] [rbp-81h]
  __int64 v46; // [rsp+38h] [rbp-79h]
  __int64 v47; // [rsp+48h] [rbp-69h]
  __int64 v48; // [rsp+50h] [rbp-61h]
  __int64 v49; // [rsp+58h] [rbp-59h]
  __int64 v50; // [rsp+60h] [rbp-51h]
  __int64 v51; // [rsp+68h] [rbp-49h]
  __int64 v52; // [rsp+70h] [rbp-41h]
  __int64 v53; // [rsp+78h] [rbp-39h]
  __int64 v54; // [rsp+80h] [rbp-31h]
  __int64 v55; // [rsp+88h] [rbp-29h]
  __int64 v56; // [rsp+90h] [rbp-21h]
  int v57; // [rsp+98h] [rbp-19h]
  int v58; // [rsp+98h] [rbp-19h]
  int v59; // [rsp+9Ch] [rbp-15h]
  int v60; // [rsp+9Ch] [rbp-15h]
  __int64 v61; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1h] BYREF
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp+Fh] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp+1Fh] BYREF
  int AcpiPortAttributes; // [rsp+130h] [rbp+7Fh]

  SourceString = 0LL;
  v62 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 248));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(v4);
  if ( (unsigned int)Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage() )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           a1,
           22LL,
           1LL,
           0LL,
           &v62);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v45) = v5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 2520),
          2u,
          3u,
          0x23u,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
          v45);
      }
    }
    else
    {
      DestinationString = 0LL;
      v6 = (const WCHAR *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v62,
                            0LL);
      RtlInitUnicodeString(&DestinationString, v6);
      if ( RtlEqualUnicodeString(&DestinationString, &g_SystemContainerId, 1u) )
        *(_DWORD *)(v4 + 44) |= 0x100u;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v62);
    }
  }
  if ( *(_BYTE *)(v4 + 240) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) + 24LL);
    IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
    v9 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 204LL);
    if ( !IsEnabledDeviceUsage )
    {
      if ( (v9 & 0x800) == 0 )
        goto LABEL_24;
LABEL_23:
      _InterlockedOr((volatile signed __int32 *)(v4 + 2496), 1u);
      goto LABEL_24;
    }
    if ( (v9 & 0x800) == 0 )
      goto LABEL_24;
    v10 = (*(_DWORD *)(v7 + 1636) & 0x200000) == 0;
LABEL_22:
    if ( !v10 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (unsigned int)Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage() )
  {
    v10 = (*(_DWORD *)(v4 + 44) & 0x100) == 0;
    goto LABEL_22;
  }
  v61 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a1,
         22LL,
         1LL,
         0LL,
         &v61) >= 0 )
  {
    String1 = 0LL;
    v11 = (const WCHAR *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                           WdfDriverGlobals,
                           v61,
                           0LL);
    RtlInitUnicodeString(&String1, v11);
    if ( !RtlEqualUnicodeString(&String1, &g_SystemContainerId, 1u) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 2496), 1u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v61);
  }
LABEL_24:
  KeResetEvent((PRKEVENT)(v4 + 1152));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v12 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1152), "Hub FDO PnpCallback", v12);
  v13 = *(_DWORD *)(v4 + 1176);
  AcpiPortAttributes = v13;
  if ( v13 < 0 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
    HUBFDO_SetFriendlyNameForBlockedHub(v4);
  RtlInitUnicodeString(&SourceString, 0LL);
  HUBPARENT_GetHubSymbolicLinkName(v4);
  if ( !SourceString.Length )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x24u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    v13 = -1073741823;
LABEL_31:
    AcpiPortAttributes = v13;
    goto LABEL_48;
  }
  Pool2 = ExAllocatePool2(64LL, 2LL * SourceString.Length, 1748191317LL);
  *(_QWORD *)(v4 + 2552) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x25u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    v13 = -1073741670;
    goto LABEL_31;
  }
  *(_WORD *)(v4 + 2544) = 0;
  *(_WORD *)(v4 + 2546) = SourceString.Length;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2544), &SourceString);
  AcpiPortAttributes = HUBACPI_GetAcpiPortAttributes(v4);
  v13 = AcpiPortAttributes;
  if ( AcpiPortAttributes >= 0 )
  {
    HUBCONNECTOR_MapHubPorts(v4);
    HUBFDO_MapDvsecUsb4Hosts((_QWORD *)v4);
    WMI_RegisterHub(a1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 552))(*(_QWORD *)(v4 + 248)) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 760), 1u);
    if ( *(_BYTE *)(v4 + 2728) == 1 )
    {
      if ( *(_BYTE *)(v4 + 240) )
      {
        if ( *(_DWORD *)(v4 + 160) )
        {
          if ( !*(_QWORD *)(v4 + 2656) )
          {
            FirmwareUpdateDevice = FWUPDATE_CreateFirmwareUpdateDevice(v4);
            if ( FirmwareUpdateDevice < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v45) = FirmwareUpdateDevice;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v4 + 2520),
                2u,
                2u,
                0x27u,
                (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                v45);
            }
          }
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x26u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
  }
LABEL_48:
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C006A1E8);
  *(_QWORD *)&String1.Length = v16;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v16 + 32),
    0LL);
  if ( (*(_DWORD *)(v16 + 4) & 0x1000) != 0 && v13 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2216) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
      {
        LODWORD(v44) = 71;
        McTemplateK0pnq_EtwWriteTransfer(
          v4 + 1180,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 248),
          v44,
          v4 + 1180,
          *(_DWORD *)(v4 + 2600));
      }
    }
    else
    {
      v17 = (unsigned int)(*(_DWORD *)(v4 + 2216) - 2);
      if ( *(_DWORD *)(v4 + 2216) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v44) = 12;
          McTemplateK0pnq_EtwWriteTransfer(
            v4 + 1180,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v44,
            v4 + 1180,
            *(_DWORD *)(v4 + 2600));
        }
      }
      else if ( *(_DWORD *)(v4 + 2216) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v44) = *(_DWORD *)(v4 + 2600);
          McTemplateK0pq_EtwWriteTransfer(
            v17,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v44);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(
          v17,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE,
          0LL,
          *(_QWORD *)(v4 + 248));
      }
    }
    v18 = v4 + 2360;
    v19 = *(_QWORD *)(v4 + 2360);
    v20 = v19 - 248;
    if ( v4 + 2360 != v19 )
    {
      while ( 1 )
      {
        v21 = *(_DWORD *)(v20 + 1256);
        if ( v21 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_89;
          v22 = *(_DWORD *)(v4 + 168);
          if ( v22 == 1 )
          {
            v23 = *(_DWORD *)(v4 + 188);
            v24 = *(_DWORD *)(v4 + 192);
            v25 = *(_DWORD *)(v4 + 196);
            v58 = *(_DWORD *)(v4 + 176);
            v60 = *(_DWORD *)(v4 + 180);
            LODWORD(v61) = *(unsigned __int16 *)(v4 + 184);
          }
          else
          {
            v23 = 0;
            v58 = 0x7FFFFFFF;
            v24 = 0;
            v60 = 0x7FFFFFFF;
            v25 = 0;
            LODWORD(v61) = 0;
          }
          v26 = *(_DWORD *)(v20 + 204) >> 1;
          if ( (*(_DWORD *)(v20 + 204) & 2) != 0 )
            v27 = *(_BYTE *)(v20 + 1341);
          else
            v27 = 0;
          v33 = 0LL;
          v34 = 0LL;
          if ( v22 == 2 )
            v33 = v4 + 186;
          v30 = 0LL;
          v56 = v33;
          if ( v22 == 2 )
          {
            v34 = v4 + 181;
            v30 = v4 + 176;
          }
          v55 = v34;
          v31 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V1;
          v54 = v30;
          LODWORD(v53) = v61;
          LODWORD(v52) = v60;
          v32 = v58;
        }
        else
        {
          if ( v21 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_89;
          v22 = *(_DWORD *)(v4 + 168);
          if ( v22 == 1 )
          {
            v23 = *(_DWORD *)(v4 + 188);
            v24 = *(_DWORD *)(v4 + 192);
            v25 = *(_DWORD *)(v4 + 196);
            LODWORD(v61) = *(_DWORD *)(v4 + 176);
            v59 = *(_DWORD *)(v4 + 180);
            v57 = *(unsigned __int16 *)(v4 + 184);
          }
          else
          {
            v23 = 0;
            LODWORD(v61) = 0x7FFFFFFF;
            v24 = 0;
            v59 = 0x7FFFFFFF;
            v25 = 0;
            v57 = 0;
          }
          v26 = *(_DWORD *)(v20 + 204) >> 1;
          if ( (*(_DWORD *)(v20 + 204) & 2) != 0 )
            v27 = *(_BYTE *)(v20 + 1341);
          else
            v27 = 0;
          v28 = 0LL;
          v29 = 0LL;
          if ( v22 == 2 )
            v28 = v4 + 186;
          v30 = 0LL;
          v56 = v28;
          if ( v22 == 2 )
          {
            v29 = v4 + 181;
            v30 = v4 + 176;
          }
          v55 = v29;
          v31 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V1;
          v54 = v30;
          LODWORD(v53) = v57;
          LODWORD(v52) = v59;
          v32 = v61;
        }
        LODWORD(v51) = v32;
        LODWORD(v50) = v25;
        LODWORD(v49) = v24;
        LODWORD(v48) = v23;
        LODWORD(v47) = v22;
        LOBYTE(v46) = v27;
        LOBYTE(v45) = v26 & 1;
        LODWORD(v44) = *(unsigned __int16 *)(v20 + 200);
        McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer(
          v30,
          v31,
          0LL,
          *(_QWORD *)(v4 + 248),
          v44,
          v45,
          v46,
          *(_QWORD *)(v20 + 1416),
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        v18 = v4 + 2360;
LABEL_89:
        if ( (*(_DWORD *)(v20 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v45) = 12;
          LODWORD(v44) = *(unsigned __int16 *)(v20 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v20 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
            0LL,
            *(_QWORD *)(v4 + 248),
            v44,
            v45,
            v20 + 1340);
        }
        if ( (*(_DWORD *)(v20 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v45) = 16;
          LODWORD(v44) = *(unsigned __int16 *)(v20 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v20 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 248),
            v44,
            v45,
            v20 + 1352);
        }
        if ( (*(_DWORD *)(v20 + 204) & 0x800) != 0 )
        {
          v35 = *(_QWORD *)(v20 + 1464);
          DestinationString = 0LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
            WdfDriverGlobals,
            v35,
            &DestinationString);
          v36 = (void *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
          v37 = v36;
          if ( v36 )
          {
            memmove(v36, DestinationString.Buffer, DestinationString.Length);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
            {
              LODWORD(v44) = *(unsigned __int16 *)(v20 + 200);
              McTemplateK0pqz_EtwWriteTransfer(
                *(unsigned __int16 *)(v20 + 200),
                &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_DSD_USB4,
                0LL,
                *(_QWORD *)(v4 + 248),
                v44,
                v37);
            }
            ExFreePoolWithTag(v37, 0x64334855u);
          }
        }
        v38 = *(_QWORD *)(v20 + 248);
        v20 = v38 - 248;
        if ( v18 == v38 )
        {
          v13 = AcpiPortAttributes;
          v16 = *(_QWORD *)&String1.Length;
          break;
        }
      }
    }
  }
  v39 = *(_QWORD **)(v16 + 24);
  v40 = (_QWORD *)(v4 + 2432);
  if ( *v39 != v16 + 16 )
    __fastfail(3u);
  *v40 = v16 + 16;
  *(_QWORD *)(v4 + 2440) = v39;
  *v39 = v40;
  *(_QWORD *)(v16 + 24) = v40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v16 + 32));
  if ( v13 >= 0 )
  {
    v42 = HUBFDO_RegisterSleepstudyBlockerReasons(*(_QWORD *)(v4 + 24), v4);
    if ( v42 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v45) = v42;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2520),
        2u,
        2u,
        0x28u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v45);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v44) = v13;
    McTemplateK0pq_EtwWriteTransfer(
      v41,
      &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v4 + 248),
      v44);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v45) = *(_DWORD *)(v4 + 40);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 2520),
      2u,
      3u,
      0x29u,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v45);
  }
  return (unsigned int)v13;
}
