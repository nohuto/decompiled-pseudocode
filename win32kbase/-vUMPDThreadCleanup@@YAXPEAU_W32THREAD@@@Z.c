/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0042308
 * Callers:
 *     GdiThreadCallout @ 0x1C00420F0 (GdiThreadCallout.c)
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0045394 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C018C630 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
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
  if ( qword_1C02D5F78 && (int)qword_1C02D5F78() >= 0 && qword_1C02D5F80 )
    qword_1C02D5F80(a1);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
