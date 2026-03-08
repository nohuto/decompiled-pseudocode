/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00E9D10
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00E86E8 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C00C42B6 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00E9ED0 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // al
  int v11; // ecx
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  __int64 v16; // rcx

  v9 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x80000);
  v10 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x100000);
  if ( !a4 )
  {
    if ( !v9 )
    {
      v12 = v10 == 0;
      goto LABEL_6;
    }
LABEL_12:
    v13 = 0;
    v14 = v10 != 0 ? 2 : 0;
    goto LABEL_13;
  }
  v11 = *((_DWORD *)a4 + 20);
  if ( (v11 & 0x80000) != 0 )
    goto LABEL_12;
  v12 = (v11 & 0x100000) == 0;
LABEL_6:
  if ( v12 )
  {
    v13 = 2;
    v14 = 3;
    goto LABEL_9;
  }
  v13 = 1;
  v14 = (v9 != 0) + 1;
LABEL_13:
  if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, a2, a3, 0x180000u, 0LL) )
  {
    WdLogSingleEntry1(1LL, 12962LL);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 0;
  }
LABEL_9:
  if ( a5 )
    *(_DWORD *)a5 = v13 | (16 * v14) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
