/*
 * XREFs of ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C01D2280
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDesktopSwitch(OUTPUTDUPL_MGR *this, __int64 a2)
{
  if ( (unsigned int)a2 < *((_DWORD *)this + 19) )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2, 0LL, 0LL, 0, 4);
}
