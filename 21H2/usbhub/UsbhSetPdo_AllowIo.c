/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x1C003CE78
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 *     UsbhResetNotifyCompletion @ 0x1C003CC60 (UsbhResetNotifyCompletion.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00548CC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C00312E4 (UsbhAcquirePdoStateLock.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v3; // rdi
  _DWORD *v4; // rax
  __int64 v5; // rcx
  KIRQL v6; // al
  _DWORD *v7; // rax
  KIRQL v8; // dl

  v3 = (KSPIN_LOCK *)PdoExt(a2);
  v4 = PdoExt(a2);
  UsbhAcquirePdoStateLock(v5, (__int64)(v4 + 236), 12);
  if ( PdoExt(a2)[281] == 3 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(v3 + 152);
    *((_DWORD *)v3 + 196) = 1;
    KeReleaseSpinLock(v3 + 152, v6);
  }
  v7 = PdoExt(a2);
  v7[270] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v8 = *((_BYTE *)v7 + 1076);
  v7[258] = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v8);
}
