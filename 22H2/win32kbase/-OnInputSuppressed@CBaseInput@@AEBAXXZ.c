/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DCDD4
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4DD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00021A0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C00E4D08 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rdi
  __int64 v4; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6]);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    v4 = (__int64)this[157];
    RIMLockExclusive(v4);
    ++*((_DWORD *)DeviceInfo + 576);
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
