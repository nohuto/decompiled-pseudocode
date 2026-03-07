__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v4; // rdi
  int *v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *a4 = 0LL;
  v4 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v4 + 81) )
  {
    v5 = *(int **)(v4 + 536);
    if ( (*v5 & 0x40000100) != 0 || *v5 < 0 )
    {
      if ( v5[3] )
      {
        if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          WdLogSingleEntry3(1LL, a2, a3, *((_QWORD *)a3 + 1));
          DxgkLogInternalTriageEvent(v11, 0x40000LL);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v5);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v4;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 9335LL);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      WdLogSingleEntry1(1LL, v4);
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = v4;
  }
  return 3223191814LL;
}
