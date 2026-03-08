/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00C7F44
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00C7E44 (-Allocate@-$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<913408,3568>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  if ( a2 < v2 || v2 >= 0xDF )
    return 1;
  v4 = (void *)((a2 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v4, 4096LL) >= 0 )
  {
    memset(v4, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
