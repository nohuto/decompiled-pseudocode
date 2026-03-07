void __fastcall VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *v10; // rax
  unsigned __int64 i; // rbx

  v5 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = a2;
    v10[4] = a3;
    v10[5] = a4;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int))*this
   + 26))(
    this,
    a2,
    a4 >> 12,
    (*((_QWORD *)a2 + 29) + a3) >> 12,
    *((_QWORD *)a2 + 29) >> 12,
    a5,
    1);
  if ( a3 )
  {
    do
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
       + 26))(
        this,
        a2,
        1LL,
        (*((_QWORD *)a2 + 29) + v5) >> 12,
        *((_QWORD *)a2 + 29) >> 12,
        this[34],
        1);
      v5 += 4096LL;
    }
    while ( v5 < a3 );
  }
  for ( i = a4 + v5; i < *((_QWORD *)a2 + 1); i += 4096LL )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
     + 26))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 29) + i) >> 12,
      *((_QWORD *)a2 + 29) >> 12,
      this[34],
      1);
  }
}
