/*
 * XREFs of ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00E9ED0
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00E9D10 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  char v5; // r11
  unsigned int v6; // ebx
  unsigned int v7; // edx

  v5 = 0;
  v6 = *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~*(_DWORD *)(*((_QWORD *)this + 5028) + 24LL) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6) + 80LL)) == 0 )
      v7 |= 1 << v5;
    ++v5;
    ++v6;
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
