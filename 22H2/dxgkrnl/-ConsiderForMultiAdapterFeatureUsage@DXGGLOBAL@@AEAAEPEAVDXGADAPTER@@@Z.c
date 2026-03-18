/*
 * XREFs of ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C021A08C
 * Callers:
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0219498 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0219510 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0312580 (-DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  bool result; // al
  int v3; // ecx

  result = 0;
  if ( *((_QWORD *)a2 + 366) )
  {
    v3 = *((_DWORD *)a2 + 109);
    if ( (v3 & 4) == 0 )
      return (v3 & 0x10) == 0;
  }
  return result;
}
