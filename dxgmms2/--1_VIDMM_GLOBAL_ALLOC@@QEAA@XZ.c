void __fastcall _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(_VIDMM_GLOBAL_ALLOC *this)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x2000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost(this);
    UncommitParavirtualizedAllocationOnHost(this);
  }
  else if ( (v1 & 0x8000) != 0 && *((_DWORD *)this + 146) )
  {
    ExFreePoolWithTag(*((PVOID *)this + 72), 0);
    *((_DWORD *)this + 146) = 0;
    *((_QWORD *)this + 72) = 0LL;
  }
  if ( *((_QWORD *)this + 40) )
  {
    WdLogSingleEntry1(1LL, 471LL);
    DxgkLogInternalTriageEvent(v3, 262146LL);
  }
  if ( *((_DWORD *)this + 82) )
  {
    WdLogSingleEntry1(1LL, 472LL);
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
}
