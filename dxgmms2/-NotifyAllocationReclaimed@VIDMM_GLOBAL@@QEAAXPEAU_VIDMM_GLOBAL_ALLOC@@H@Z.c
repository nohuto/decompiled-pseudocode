void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned int a3)
{
  char *v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  char *v9; // rax
  char **v10; // rdx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 15) + 32LL))(
    *((_QWORD *)a2 + 15),
    a2,
    a3);
  v6 = (char *)this + 3752;
  *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = 0LL;
  v7 = *((_QWORD *)a2 + 15);
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  v8 = (*(_DWORD *)(v7 + 80) & 0x1001) == 0;
  v9 = (char *)a2 + 344;
  if ( !v8 )
    v6 = (char *)this + 3736;
  v10 = (char **)*((_QWORD *)v6 + 1);
  if ( *v10 != v6 )
    __fastfail(3u);
  *(_QWORD *)v9 = v6;
  *((_QWORD *)a2 + 44) = v10;
  *v10 = v9;
  *((_QWORD *)v6 + 1) = v9;
}
