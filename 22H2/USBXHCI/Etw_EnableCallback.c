/*
 * XREFs of Etw_EnableCallback @ 0x1C0018870
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0018740 (McGenControlCallbackV2.c)
 * Callees:
 *     Etw_ControllerRundown @ 0x1C0014964 (Etw_ControllerRundown.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001B2C0 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0048748 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rsi
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // di
  unsigned int v9; // edx
  __int64 *PoolWithTag; // rax
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 *v17; // r14
  __int64 v18; // rdi
  GUID v19; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    v19 = 0LL;
    EtwActivityIdControl(3u, &v19);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v19);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
    v4 = *(unsigned int *)(g_WdfDriverUsbXhciContext + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v3);
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                                   (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                                   8 * v4,
                                   0x49434858u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 8 * v4);
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
        v7 = g_WdfDriverUsbXhciContext;
        v8 = v6;
        v9 = *(_DWORD *)(g_WdfDriverUsbXhciContext + 24);
        if ( (unsigned int)v4 >= v9 )
        {
          v12 = *(_QWORD *)g_WdfDriverUsbXhciContext;
          v13 = 0LL;
          while ( 1 )
          {
            v14 = v12 - 24;
            if ( v7 == v12 )
              break;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v14 + 8),
              Etw_EnableCallback,
              162LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v7 = g_WdfDriverUsbXhciContext;
            v11[v13] = v14;
            v13 = (unsigned int)(v13 + 1);
            v12 = *(_QWORD *)(v14 + 24);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 16), v8);
          v16 = 0;
          if ( (_DWORD)v4 )
          {
            v17 = v11;
            do
            {
              v18 = *v17;
              if ( !*v17 )
                break;
              Etw_ControllerRundown((__int64)&v19, *v17);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
                WdfDriverGlobals,
                *(_QWORD *)(v18 + 8),
                Etw_EnableCallback,
                199LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
              ++v16;
              ++v17;
            }
            while ( v16 < (unsigned int)v4 );
          }
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
            McTemplateK0_EtwWriteTransfer(v15, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
          if ( v11 )
            ExFreePoolWithTag(v11, 0x49434858u);
          return;
        }
        v4 = v9;
        KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v6);
        ExFreePoolWithTag(v11, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      McTemplateK0_EtwWriteTransfer(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
    }
  }
}
