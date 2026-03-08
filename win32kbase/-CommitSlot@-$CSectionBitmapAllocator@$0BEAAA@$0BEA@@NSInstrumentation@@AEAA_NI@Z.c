/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C01808C0
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0180570 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 < 0x14 )
  {
    v4 = a2 / 0xC;
    if ( v4 >= v3 )
    {
      v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v5, 4096LL) < 0 )
        return 0;
      memset(v5, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
  }
  return 1;
}
