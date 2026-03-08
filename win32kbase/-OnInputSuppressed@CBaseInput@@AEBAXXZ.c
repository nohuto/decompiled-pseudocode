/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C020BB8C
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C000E950 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C00F3198 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
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
    v4 = (__int64)this[165];
    RIMLockExclusive(v4);
    ++*((_DWORD *)DeviceInfo + 576);
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
