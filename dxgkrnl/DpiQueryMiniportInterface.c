/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C01F65F4
 * Callers:
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C001D334 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C001D3B8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C001D4C0 (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F3380 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F3824 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F59A0 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C039D8B4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C039E120 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C039E600 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C01F667C (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+2Ah] [rbp-2Eh]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  v13 = 0;
  v6 = -1073741637;
  v17 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL) )
  {
    v15 = 0LL;
    v11 = a3;
    v14 = a6;
    v10 = a2;
    v12 = a4;
    v16 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), &v10);
    v6 = v8;
    if ( v8 < 0 )
      WdLogSingleEntry1(4LL, v8);
  }
  return v6;
}
