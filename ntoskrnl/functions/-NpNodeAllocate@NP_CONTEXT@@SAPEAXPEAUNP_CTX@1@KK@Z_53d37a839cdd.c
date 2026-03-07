void *__fastcall NP_CONTEXT::NpNodeAllocate(struct NP_CONTEXT::NP_CTX *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 Pool2; // rax
  void *ReservedBuffer; // rdi

  v3 = *(_QWORD *)a1;
  Pool2 = ExAllocatePool2(64LL, 4096LL, 1884188019LL);
  ReservedBuffer = (void *)Pool2;
  if ( (Pool2 || (a3 & 2) != 0)
    && (a3 & 1) != 0
    && (Pool2 || (ReservedBuffer = NP_CONTEXT::NpiGetReservedBuffer((struct NP_CONTEXT *)v3, a1)) != 0LL)
    && ++*(_DWORD *)(v3 + 40) > *(_DWORD *)v3 )
  {
    NP_CONTEXT::NpiPerformPageOut((struct NP_CONTEXT *)v3, a1);
  }
  return ReservedBuffer;
}
