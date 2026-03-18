/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1C00D0DD0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  }
}
