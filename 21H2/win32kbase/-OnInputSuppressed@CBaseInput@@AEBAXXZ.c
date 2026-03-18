/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DC43C
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0005550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01DC384 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this, __int64 a2, __int64 a3)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6], a3);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    ++*((_DWORD *)DeviceInfo + 576);
    qword_1C029A1C8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
}
