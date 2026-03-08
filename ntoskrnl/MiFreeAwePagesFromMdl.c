/*
 * XREFs of MiFreeAwePagesFromMdl @ 0x140647764
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x140648248 (MiFreePhysicalRange.c)
 *     MiReadyLargeAwePageForFree @ 0x1406496AC (MiReadyLargeAwePageForFree.c)
 */

void *__fastcall MiFreeAwePagesFromMdl(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  __int64 v7; // r14
  void *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  if ( v3 == 1 )
    return MiFreePagesFromMdl(a2, 0);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(a2 + 8 * i + 48);
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      result = (void *)MiFreePhysicalRange(a1, *(_QWORD *)(a2 + 8 * i + 48));
    }
    else
    {
      MiReadyLargeAwePageForFree(48 * v7 - 0x220000000000LL);
      result = (void *)MiFreeContiguousLargePageRun(a1, v7, v3);
    }
  }
  return result;
}
