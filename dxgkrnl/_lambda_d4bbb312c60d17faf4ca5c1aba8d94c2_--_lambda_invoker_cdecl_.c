/*
 * XREFs of _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C03254E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_CONTEXT **this,
        __int64 a2)
{
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
    this,
    *(_DWORD *)(a2 + 4),
    0LL,
    *(_DWORD *)(a2 + 8) == 0,
    0,
    *(_DWORD *)(a2 + 8) != 0 ? 9 : 0);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, 0LL, 0);
  return 0LL;
}
