void __fastcall VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 424LL) & 0x180) == 0 )
  {
    WdLogSingleEntry1(1LL, 1553LL);
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  for ( i = (_QWORD *)((char *)this + 48);
        (_QWORD *)*i != i;
        VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*i - 16LL)) )
  {
    ;
  }
}
