/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D60CC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B5BA4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D5BF8 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(unsigned int a1, struct _LUID *a2)
{
  unsigned int v4; // ebx
  struct DXGADAPTER *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v6, a1);
  if ( v6[0] )
  {
    v4 = DxgkSetIndirectDisplayRenderAdapter(v6[0], a2, 0LL);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
    v4 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign(v6, 0LL);
  return v4;
}
