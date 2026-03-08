/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x1C000F068
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x1C00090E0 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C004247C (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00428D0 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v2; // r14
  __int64 v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  ULONG v6; // r8d
  ULONG v7; // r9d
  NTSTATUS UsbCapability; // esi
  USBD_HANDLE v9; // rbx
  __int128 v10; // xmm0
  USBD_HANDLE v11; // rbx
  void (__fastcall *v12)(_QWORD); // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  struct _DEVICE_OBJECT *v17; // rax
  NTSTATUS v18; // eax
  int v19; // eax
  int v21; // eax
  ULONG *USBDHandle; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandlea; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-99h]
  __int64 v25; // [rsp+30h] [rbp-91h]
  USBD_HANDLE v26; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v27[10]; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v28[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-21h]
  int v30; // [rsp+A8h] [rbp-19h]
  __int128 v31; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-1h]
  int v33; // [rsp+D0h] [rbp+Fh]
  UCHAR OutputBuffer[16]; // [rsp+D8h] [rbp+17h] BYREF

  v26 = 0LL;
  HIWORD(v30) = 0;
  v33 = 0;
  v31 = 0LL;
  v32 = 0LL;
  memset(v27, 0, 0x44uLL);
  v2 = *((_QWORD *)Context + 2);
  *(_OWORD *)OutputBuffer = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v2);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v2);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v26);
  if ( UsbCapability < 0 )
    goto LABEL_14;
  v9 = v26;
  if ( USBD_QueryUsbCapability(v26, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
    *((_DWORD *)Context + 39) = 0;
  if ( USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_MICROSOFT_MAUSBHOST, 0x10u, OutputBuffer, USBDHandlea) >= 0 )
  {
    v10 = *(_OWORD *)OutputBuffer;
    Context[201] = 1;
    *(_OWORD *)(Context + 764) = v10;
  }
  UsbCapability = USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandleb);
  *((_BYTE *)v9 + 225) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 55, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)v9 + 225) )
    {
      v11 = v26;
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)v26 + 14);
      if ( v12 )
        v12(*((_QWORD *)v26 + 6));
      ExFreePoolWithTag(v11, *((_DWORD *)v11 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v26);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x57u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) != 0 )
    goto LABEL_43;
  v13 = *((_DWORD *)Context + 11);
  if ( (v13 & 1) != 0 || !Context[260] )
    goto LABEL_43;
  LODWORD(v31) = 36;
  HIDWORD(v31) = 50;
  *((_DWORD *)Context + 644) = 50;
  *((_QWORD *)&v32 + 1) = 2LL;
  v33 = 2;
  *(_QWORD *)((char *)&v31 + 4) = 0x300000002LL;
  *(_QWORD *)&v32 = 0x200000002LL;
  if ( !Context[240] || (v13 & 0x20) != 0 )
    HIDWORD(v32) = 2;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 368))(
          WdfDriverGlobals,
          v2,
          &v31);
  v16 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v14;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x58u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v25);
    }
    if ( v16 == -1073741101 && *((_DWORD *)Context + 64) == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x59u,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
      if ( (*((_DWORD *)Context + 648) & 8) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1264);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
      {
        LODWORD(USBDHandle) = -1073741101;
        McTemplateK0pq_EtwWriteTransfer(
          v15,
          &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
          (const GUID *)(Context + 2412),
          *((_QWORD *)Context + 31),
          USBDHandle);
      }
    }
LABEL_43:
    v30 = 257;
    *((_DWORD *)Context + 650) = 5;
    v28[1] = 5;
    v28[0] = 20;
    v29 = 1LL;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 376))(
            WdfDriverGlobals,
            v2,
            v28);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v21;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x5Cu,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v25);
    }
    return 2053LL;
  }
  _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
  v17 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v2);
  v18 = PoRegisterPowerSettingCallback(
          v17,
          &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
          (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
          Context,
          (PVOID *)Context + 321);
  if ( v18 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v18;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x5Au,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v25);
    }
    *((_QWORD *)Context + 321) = 0LL;
  }
  if ( Context[240] && (*((_DWORD *)Context + 11) & 0x20) == 0 )
    goto LABEL_43;
  memset(v27, 0, 0x48uLL);
  v27[1] = HUBFDO_EvtPostPoFxRegisterDevice;
  LODWORD(v27[0]) = 72;
  v27[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
          WdfDriverGlobals,
          v2,
          v27);
  if ( v19 >= 0 )
    goto LABEL_43;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v19;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 315),
      2u,
      3u,
      0x5Bu,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v25);
  }
  return 2045LL;
}
