/*
 * XREFs of ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C0040AF8
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021AFBC (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C022F9AC (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B6DB0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D5BF8 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        const struct _GUID *a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)this + 31, a2);
  if ( a3 )
    *(struct _GUID *)((char *)this + 264) = *a3;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
