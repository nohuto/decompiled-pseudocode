/*
 * XREFs of DxgkAddAdapter @ 0x1C0195B98
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 */

__int64 __fastcall DxgkAddAdapter(
        PDEVICE_OBJECT DeviceObject,
        void *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v10; // rax
  struct DXGADAPTER *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !DeviceObject || !a2 || !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(DeviceObject, a2);
    *(_QWORD *)(v10 + 24) = 137LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)DeviceObject, (__int64)a2);
  return DXGGLOBAL::CreateAdapter(Global, DeviceObject, &v11, a2, a3, a4);
}
