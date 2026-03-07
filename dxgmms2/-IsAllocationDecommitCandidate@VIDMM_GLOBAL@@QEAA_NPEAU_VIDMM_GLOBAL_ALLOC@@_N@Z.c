char __fastcall VIDMM_GLOBAL::IsAllocationDecommitCandidate(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = *((_QWORD *)a2 + 67);
  if ( *(_WORD *)(v3 + 4) >= 2u )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x40) != 0 )
    {
      if ( (*(_DWORD *)v3 & 0x30) != 0 )
      {
        WdLogSingleEntry1(3LL, 3LL);
      }
      else
      {
        if ( !a3 || VIDMM_GLOBAL::IsAllocationRepurposed(this, a2) )
          return 1;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = 5LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 2LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 1LL);
  }
  return 0;
}
