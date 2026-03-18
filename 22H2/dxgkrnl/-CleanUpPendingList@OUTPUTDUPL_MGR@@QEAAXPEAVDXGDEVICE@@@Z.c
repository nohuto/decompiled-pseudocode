/*
 * XREFs of ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C032A700
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B85E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C01CBEE0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A9260 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::CleanUpPendingList(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  struct _KTHREAD *v4; // rcx
  struct _KTHREAD **RemoteOutputDuplMgr; // rax

  v4 = *this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v4 + 2)) )
  {
    WdLogSingleEntry1(1LL, 1461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, a2, 0);
  RemoteOutputDuplMgr = (struct _KTHREAD **)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
}
