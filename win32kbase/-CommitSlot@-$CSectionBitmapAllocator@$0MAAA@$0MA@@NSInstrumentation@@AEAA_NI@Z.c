/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00C1914
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00C17E0 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 >= 0xC || a2 / 0x15 < v3 )
    return 1;
  v5 = (void *)(((a2 / 0x15) << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v5, 4096LL) >= 0 )
  {
    memset(v5, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
