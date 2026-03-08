/*
 * XREFs of ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C020B4AC
 * Callers:
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020A8B8 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C030D750 (-DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z.c)
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
