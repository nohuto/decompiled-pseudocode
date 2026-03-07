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
