/*
 * XREFs of MiPopLargePfnList @ 0x140349C1C
 * Callers:
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140664B5C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiDemotePfnListChain @ 0x140665964 (MiDemotePfnListChain.c)
 */

unsigned __int64 __fastcall MiPopLargePfnList(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)(a1 + 24LL * a2);
  if ( (_QWORD *)*v2 == v2 )
    MiDemotePfnListChain();
  v3 = (_QWORD *)*v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    __fastfail(3u);
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  --v2[2];
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x44000000000LL) >> 4);
}
