/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0093E58
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C009391C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093A84 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00FEE20 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00B0924 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct _VIDMM_POOL_BLOCK *v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r11
  VIDMM_LINEAR_POOL *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  struct _VIDMM_POOL_BLOCK *v16; // rcx
  char **v17; // rax
  struct _VIDMM_POOL_BLOCK *v18; // rdx
  struct _VIDMM_POOL_BLOCK *v19; // rcx
  char *v20; // rdi
  struct _VIDMM_POOL_BLOCK *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[17], a3, a4);
  v8 = a2[64];
  v9 = (unsigned __int64)a2[2];
  *((_DWORD *)a2 + 28) = 1;
  v10 = *(_QWORD *)v8;
  if ( this[27] < (VIDMM_LINEAR_POOL *)((char *)this[27] - v9) )
  {
    WdLogSingleEntry1(1LL, 301LL);
    DxgkLogInternalTriageEvent(v22, 0x40000LL);
  }
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] - v9);
  v11 = *((unsigned int *)this + 95);
  v12 = this[1];
  v13 = *((int *)this + 119);
  v14 = *((_QWORD *)v12 + 5028);
  if ( (*(_BYTE *)(1616 * v11 + 24 * v13 + v14 + 520) & 1) != 0 )
    v15 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)v12 + 3) + 240LL) + *(_QWORD *)(v10 + 40) + 24) + 344 * v11;
  else
    v15 = 1616 * v11 + 344 * v13 + v14 + 552;
  if ( *(_QWORD *)(v15 + 120) < *(_QWORD *)(v15 + 120) - v9 )
  {
    WdLogSingleEntry1(1LL, 311LL);
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
  }
  *(_QWORD *)(v15 + 120) -= v9;
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v16 = a2[65];
    if ( (!v16 || _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 11, 0xFFFFFFFF) == 1)
      && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)a2[64] + 56LL), -(__int64)a2[2]) < (unsigned __int64)a2[2] )
    {
      WdLogSingleEntry1(1LL, 2343LL);
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
    }
  }
  v17 = (char **)(a2 + 51);
  v18 = a2[51];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v18 + 1) != a2 + 51
    || (v19 = a2[52], *(char ***)v19 != v17)
    || (*(_QWORD *)v19 = v18,
        v20 = (char *)(this + 22),
        *((_QWORD *)v18 + 1) = v19,
        v21 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v20 + 1),
        *(char **)v21 != v20) )
  {
    __fastfail(3u);
  }
  *v17 = v20;
  a2[52] = v21;
  *(_QWORD *)v21 = v17;
  *((_QWORD *)v20 + 1) = v17;
}
