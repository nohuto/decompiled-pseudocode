/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x1407CA690
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140711BD0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x1407CA744 (AlpcpReleaseAttributes.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  AlpcpReleaseAttributes(a1 + 104);
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 )
  {
    PsReleaseProcessWakeCounter(v3);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 216);
  if ( v4 )
  {
    PsReleaseProcessWakeCounter(v4);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  }
  return result;
}
