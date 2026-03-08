/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x1C0003BCC
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C0022424 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x1C0034474 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C003476C (UsbhPCE_HW_Stop.c)
 *     UsbhDropDevice @ 0x1C004CAEC (UsbhDropDevice.c)
 *     UsbhHardErrorInvalidData @ 0x1C004CED0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CFC0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhPortRecycle @ 0x1C004D870 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x1C004DC10 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x1C004E400 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967281491, *(_DWORD *)(v6 + 3072), v3);
  if ( *(_QWORD *)(v6 + 4400) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (_DWORD)v3 && *(_QWORD *)(v6 + 3080) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      UsbhDecHubBusy(a1, v8, *(_QWORD *)(v6 + 3088));
      *(_QWORD *)(v6 + 3088) = 0LL;
      *(_DWORD *)(v6 + 3072) = 0;
      *(_QWORD *)(v6 + 3080) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 3096));
      (*(void (__fastcall **)(_QWORD))(v6 + 4400))(*(_QWORD *)(v6 + 4232));
    }
    else
    {
      Log(a1, 4, 1967281016, *(_DWORD *)(v6 + 3072), *(_QWORD *)(v6 + 3080));
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v9);
    }
  }
}
