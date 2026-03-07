void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockAllRanges(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // r14
  char *v4; // rsi
  __int64 v5; // rcx
  char **v6; // rax

  v1 = (char *)this + 8;
  v2 = (char *)*((_QWORD *)this + 1);
  while ( v2 != v1 )
  {
    v3 = v2 - 24;
    v4 = v2;
    MmUnlockPages(*((PMDL *)v2 - 3));
    IoFreeMdl(*((PMDL *)v2 - 3));
    *((_QWORD *)v2 - 3) = 0LL;
    v5 = *(_QWORD *)v2;
    v2 = (char *)v5;
    if ( *(char **)(v5 + 8) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    operator delete(v3);
  }
}
