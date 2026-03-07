void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v3 = (_QWORD *)((char *)a2 + 208);
  v4 = *((_QWORD *)a2 + 26);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 208)
    || (v5 = (_QWORD *)*((_QWORD *)a2 + 27), (_QWORD *)*v5 != v3) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v3 = 0LL;
  v6 = *((_QWORD *)a2 + 30);
  *((_QWORD *)a2 + 27) = 0LL;
  (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v6 + 88LL))(v6, a2);
}
