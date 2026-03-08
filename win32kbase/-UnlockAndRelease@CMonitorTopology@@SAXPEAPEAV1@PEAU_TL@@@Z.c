/*
 * XREFs of ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C00D2A2C
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  char *v3; // rdx

  if ( *a1 )
  {
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(a2);
    v3 = (char *)*a1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    }
    *a1 = 0LL;
  }
}
