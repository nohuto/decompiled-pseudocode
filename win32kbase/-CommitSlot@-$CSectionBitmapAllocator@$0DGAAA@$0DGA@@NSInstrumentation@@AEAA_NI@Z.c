/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C002AAB0
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C002A9A4 (-Allocate@-$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<221184,864>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edx
  void *v5; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  v4 = a2 >> 2;
  if ( v2 >= 0x36 || v4 < v2 )
    return 1;
  v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v5, 4096LL) >= 0 )
  {
    memset(v5, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
