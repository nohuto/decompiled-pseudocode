__int64 __fastcall VIDMM_GLOBAL::VerifyAllocationForSubmissionPhysical(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  v2 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v2 + 68) & 0x200000) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
  }
  else
  {
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v2 + 536) + 4LL) - 2) > 1u && (*((_BYTE *)a2 + 28) & 3) == 2 )
      return 0LL;
    WdLogSingleEntry1(1LL, a2);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
  }
  return 3221225473LL;
}
