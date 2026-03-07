void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  bool v9; // bl
  unsigned __int64 v13; // rdx
  char *v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  v9 = 0;
  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
      goto LABEL_23;
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v18 = WdLogNewEntry5_WdTrace(v17);
        *(_QWORD *)(v18 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v18 + 32) = *a4;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *a3 )
      goto LABEL_23;
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v20 = WdLogNewEntry5_WdTrace(v19);
        *(_QWORD *)(v20 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v20 + 32) = *a4;
      }
    }
  }
  if ( !a7 )
  {
    v15 = 0LL;
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v15 = ((unsigned __int64)*a4 - a5) % a6;
    }
    v16 = (unsigned __int64)*a4 - v15 - a5;
    if ( v16 < *a3 )
      goto LABEL_23;
    *a3 = v16;
LABEL_10:
    if ( g_IsInternalReleaseOrDbg )
    {
      v21 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v21 + 24) = *a3;
      *(_QWORD *)(v21 + 32) = *a4;
    }
    goto LABEL_12;
  }
  this = (VIDMM_LINEAR_POOL *)a6;
  if ( !a6 )
    goto LABEL_10;
  v13 = *a3 % a6;
  if ( !v13 )
    goto LABEL_10;
  this = (VIDMM_LINEAR_POOL *)(a6 - v13);
  v14 = (char *)this + *a3;
  if ( v14 < (char *)*a4 )
  {
    *a3 = (unsigned __int64)v14;
    goto LABEL_10;
  }
LABEL_23:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v9 = 1;
LABEL_12:
  *a2 = v9;
}
