/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C008AD98
 * Callers:
 *     GdiThreadCallout @ 0x1C008AB80 (GdiThreadCallout.c)
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C003CAD4 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C015FA70 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct UMPDOBJ *ThreadCurrentObj; // rax
  void *v3; // rdx

  while ( 1 )
  {
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(a1);
    if ( !ThreadCurrentObj )
      break;
    UMPDOBJ::vRelease(ThreadCurrentObj, 1);
  }
  if ( qword_1C0294E08 && (int)qword_1C0294E08() >= 0 && qword_1C0294E10 )
    qword_1C0294E10(a1);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
