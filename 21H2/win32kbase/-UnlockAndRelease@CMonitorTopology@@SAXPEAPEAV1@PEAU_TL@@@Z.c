/*
 * XREFs of ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C005D938
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( qword_1C029BD20 )
    {
      qword_1C029BD20(a2);
      v4 = *a1;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      if ( v4 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v4);
    }
    *a1 = 0LL;
  }
}
