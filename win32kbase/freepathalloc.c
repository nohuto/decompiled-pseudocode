/*
 * XREFs of freepathalloc @ 0x1C0181AB0
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C01816C0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
