/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00C8CC0
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00C8A28 (-Allocate@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  if ( v2 < 0xE0 && a2 >= v2 )
  {
    v4 = (void *)((a2 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v4, 4096LL) < 0 )
      return 0;
    memset(v4, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
  }
  return 1;
}
