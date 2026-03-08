/*
 * XREFs of ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00F0E10
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00944F0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00B3170 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

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
