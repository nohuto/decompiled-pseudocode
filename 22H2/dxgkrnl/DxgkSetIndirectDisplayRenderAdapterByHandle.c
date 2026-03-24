/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0227248
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020C004 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226DB8 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(
        unsigned int a1,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  struct DXGADAPTER *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v5 = a1;
  DXGADAPTER_REFERENCE::AssignByHandle(v11, a1, a3, a4);
  if ( v11[0] )
  {
    v9 = DxgkSetIndirectDisplayRenderAdapter(v11[0], a2, 0LL);
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
    *(_QWORD *)(v8 + 24) = v5;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v8);
    v9 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign(v11, 0LL);
  return v9;
}
