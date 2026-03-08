/*
 * XREFs of ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FCB10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::CheckLowestAddress(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( *((_QWORD *)a2 + 15) )
      v4 = *((_QWORD *)a2 + 16);
    else
      v4 = *((_QWORD *)a2 + 24);
    *a4 = v4;
    return 3221225473LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 6407LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221226021LL;
  }
}
