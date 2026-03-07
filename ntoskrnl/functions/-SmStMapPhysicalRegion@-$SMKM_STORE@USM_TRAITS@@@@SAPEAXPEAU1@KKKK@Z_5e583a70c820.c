__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 6216);
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v8 & 3) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    v10 = SmFpAllocate((volatile LONG *)(a1 + 6608), 5, (__int64)KeGetCurrentThread(), v9, a5 & 1);
    if ( !v10 )
      return v10;
  }
  *(_QWORD *)(v5 + 8 * v6) |= ((a5 & 0x10) != 0) + 1LL;
  v10 += v7;
  return v10;
}
