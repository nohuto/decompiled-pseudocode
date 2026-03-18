/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C000CBC8
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  _DWORD *v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1631737171, (unsigned int)v6[768], v3);
  Log(a1, 4, 1631734851, (unsigned int)v6[768], a2);
  if ( *((_QWORD *)v6 + 549) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 || *((_QWORD *)v6 + 385) == a2 )
    {
      Log(a1, 4, 2017613139, (unsigned int)v6[768], v3);
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v7);
      Usbh_SSH_Event(a1, 6u, a2);
      (*((void (__fastcall **)(_QWORD))v6 + 549))(*((_QWORD *)v6 + 529));
      Log(a1, 4, 1816286547, (unsigned int)v6[768], v3);
      v6[768] = v3;
      *((_QWORD *)v6 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v6 + 774);
      *((_QWORD *)v6 + 386) = UsbhIncHubBusy(a1, a2, a1, 1430416236, 1);
    }
  }
}
