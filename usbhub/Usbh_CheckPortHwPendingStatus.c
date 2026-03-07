void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  int v6; // r9d
  int v7; // r9d

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = *(_DWORD *)(a2 + 696);
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      KeReleaseSpinLock(v4, v5);
      Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSuspendEvent(a1, a2);
      return;
    }
    if ( v7 == 1 )
    {
      KeReleaseSpinLock(v4, v5);
      Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalResumeEvent(a1, a2);
      return;
    }
  }
  KeReleaseSpinLock(v4, v5);
}
