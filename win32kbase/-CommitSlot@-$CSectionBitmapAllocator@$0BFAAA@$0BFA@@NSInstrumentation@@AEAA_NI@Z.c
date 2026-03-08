/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0029894
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C002977C (-Allocate@-$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<86016,336>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  void *v6; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 >= 0x15 )
    return 1;
  v4 = a2 / 0xC;
  if ( v4 < v3 )
    return 1;
  v6 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v6, 4096LL) >= 0 )
  {
    memset(v6, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
