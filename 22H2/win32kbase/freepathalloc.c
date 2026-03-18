/*
 * XREFs of freepathalloc @ 0x1C0154300
 * Callers:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0153F10 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall freepathalloc(char *a1)
{
  __int64 v2; // rbx
  HSEMAPHORE v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(HSEMAPHORE *)(v2 + 6040);
  EngAcquireSemaphore(v3);
  if ( *(_DWORD *)(v2 + 6056) < 4u )
  {
    *(_QWORD *)a1 = *(_QWORD *)(v2 + 6048);
    ++*(_DWORD *)(v2 + 6056);
    *(_QWORD *)(v2 + 6048) = a1;
  }
  else
  {
    if ( a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
    --*(_DWORD *)(v2 + 6060);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v3);
}
