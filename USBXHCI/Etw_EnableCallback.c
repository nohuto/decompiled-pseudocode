void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdi
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // si
  unsigned int v9; // edx
  __int64 *Pool2; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 *v16; // r14
  __int64 v17; // rsi
  GUID v18; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    v18 = 0LL;
    EtwActivityIdControl(3u, &v18);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v18);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
    v4 = *(unsigned int *)(g_WdfDriverUsbXhciContext + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v3);
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        Pool2 = (__int64 *)ExAllocatePool2(64LL, 8 * v4, 1229146200LL);
        if ( !Pool2 )
          break;
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
        v7 = g_WdfDriverUsbXhciContext;
        v8 = v6;
        v9 = *(_DWORD *)(g_WdfDriverUsbXhciContext + 24);
        if ( (unsigned int)v4 >= v9 )
        {
          v11 = *(_QWORD *)g_WdfDriverUsbXhciContext;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = v11 - 24;
            if ( v7 == v11 )
              break;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v13 + 8),
              Etw_EnableCallback,
              160LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v7 = g_WdfDriverUsbXhciContext;
            Pool2[v12] = v13;
            v12 = (unsigned int)(v12 + 1);
            v11 = *(_QWORD *)(v13 + 24);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 16), v8);
          v15 = 0;
          if ( (_DWORD)v4 )
          {
            v16 = Pool2;
            do
            {
              v17 = *v16;
              if ( !*v16 )
                break;
              Etw_ControllerRundown((__int64)&v18, *v16);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
                WdfDriverGlobals,
                *(_QWORD *)(v17 + 8),
                Etw_EnableCallback,
                197LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
              ++v15;
              ++v16;
            }
            while ( v15 < (unsigned int)v4 );
          }
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
            McTemplateK0_EtwWriteTransfer(v14, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v18);
          ExFreePoolWithTag(Pool2, 0x49434858u);
          return;
        }
        v4 = v9;
        KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v6);
        ExFreePoolWithTag(Pool2, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      McTemplateK0_EtwWriteTransfer(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v18);
    }
  }
}
