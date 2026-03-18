/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B743C
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1C00B71A0 (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C01DE18C (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B77D0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00C5540 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage @ 0x1C00D4660 (Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(char **this)
{
  *this = (char *)&CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  if ( (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() )
  {
    Win32FreePool(this[17]);
    this[17] = 0LL;
    this[18] = 0LL;
  }
  CInpLockGuard::Uninitialize((CInpLockGuard *)(this + 4));
  *this = (char *)&CBaseProcessor::`vftable';
}
