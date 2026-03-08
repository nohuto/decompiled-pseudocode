/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x14069F1D0
 * Callers:
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     MiPageHasRelocations @ 0x14069F28C (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x14069F3D0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  ULONG_PTR v7; // rbx

  v3 = *(_QWORD *)(a2 + 96);
  if ( !*(_QWORD *)(v3 + 32) || !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v3 + 32), a3, 1LL) )
    return -1LL;
  result = (__int64)MiAllocatePool(256, 0x1000uLL, 0x68496D4Du);
  v7 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v7, a2, 0LL, 41);
    return v7;
  }
  return result;
}
