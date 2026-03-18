/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00936F4
 * Callers:
 *     GdiThreadCallout @ 0x1C00934E0 (GdiThreadCallout.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0093754 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00CC010 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct UMPDOBJ *ThreadCurrentObj; // rax
  char *v3; // rdx

  while ( 1 )
  {
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(a1);
    if ( !ThreadCurrentObj )
      break;
    UMPDOBJ::vRelease(ThreadCurrentObj, 1);
  }
  if ( qword_1C029B770 && (int)qword_1C029B770() >= 0 && qword_1C029B778 )
    qword_1C029B778(a1);
  v3 = (char *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
