/*
 * XREFs of ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C00268CC
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall VIDPN_MGR::GetContainingAdapter(VIDPN_MGR *this)
{
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  return *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
}
