void __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *((_QWORD *)a2 + 12);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
  {
    *a4 = ++*(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL);
    *a5 = ++*(_QWORD *)(v8 + 24);
    v9 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL);
    v10 = 2LL * *(unsigned int *)(v9 + 32);
    *(_OWORD *)(v9 + 8 * v10 + 40) = 0LL;
    *(_DWORD *)(v9 + 32) = ((unsigned __int8)*(_DWORD *)(v9 + 32) + 1) & 7;
    *(_DWORD *)(v9 + 8 * v10 + 40) = 0;
    *(_QWORD *)(v9 + 8 * v10 + 48) = *a5;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  }
}
