/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E7004
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C002D370 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *a4 = 0LL;
  v4 = **(_QWORD **)a3;
  if ( *(_BYTE *)(v4 + 81) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = v4;
    }
    return 3223191814LL;
  }
  else
  {
    v7 = *(unsigned int *)(*(_QWORD *)(v4 + 536) + 12LL);
    if ( (_DWORD)v7 )
    {
      if ( !a2 || *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
        *a4 = a3;
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(1LL, a2, a3, *((_QWORD *)a3 + 1));
        DxgkLogInternalTriageEvent(v9, 0x40000LL);
        return 3223191829LL;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v4;
      }
      return 3223191812LL;
    }
  }
}
