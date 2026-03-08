/*
 * XREFs of DxgkAddAdapter @ 0x1C01F10BC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 */

__int64 __fastcall DxgkAddAdapter(
        PDEVICE_OBJECT DeviceObject,
        void *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        _DWORD *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  struct DXGADAPTER *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !DeviceObject || !a2 || !a3 || !a4 )
  {
    WdLogSingleEntry1(1LL, 165LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDeviceObject != nullptr) && (PnPTransitionToken != nullptr) && (pAdapterCaps != nullptr) && (pAdapterDi"
                "splayCaps != nullptr)",
      165LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::CreateAdapter(Global, DeviceObject, &v12, a2, a3, a5);
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)v12 + 365);
    if ( v11 )
      *a4 = *(_DWORD *)(v11 + 24);
  }
  return result;
}
