/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00DCBBC
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00DCA80 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 >= 9 || a2 / 0x1C < v3 )
    return 1;
  v5 = (void *)(((a2 / 0x1C) << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v5, 4096LL) >= 0 )
  {
    memset_0(v5, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
