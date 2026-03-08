/*
 * XREFs of ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01D22B0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_79eef42207348a29c4e9c7f357f04a2a_::_lambda_invoker_cdecl_ @ 0x1C01DD860 (_lambda_79eef42207348a29c4e9c7f357f04a2a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(OUTPUTDUPL_MGR *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 1LL, 0, 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((struct _KTHREAD **)this, 0LL, 0);
}
