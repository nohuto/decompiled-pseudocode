/*
 * XREFs of _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A8950
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0195B40 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

__int64 __fastcall lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *this,
        struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
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
  }
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, a2, 0);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
  return 0LL;
}
