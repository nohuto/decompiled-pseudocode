/*
 * XREFs of ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00BA4C4
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00782B0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C0088A14 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(VIDMM_PROCESS *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *i; // rbx

  if ( (*(_BYTE *)(*((_QWORD *)this + 4) + 347LL) & 0x20) == 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 1390LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = (_QWORD *)((char *)this + 48);
        (_QWORD *)*i != i;
        VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*i - 16LL), a2, a3) )
  {
    ;
  }
}
