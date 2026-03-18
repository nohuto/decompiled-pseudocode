/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C00A9640
 * Callers:
 *     HmgCreate @ 0x1C007C9D4 (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C00A9C2C (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)a1 + 3);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  GdiHandleEntryDirectory::Destroy(*((struct GdiHandleEntryDirectory **)a1 + 2));
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
}
