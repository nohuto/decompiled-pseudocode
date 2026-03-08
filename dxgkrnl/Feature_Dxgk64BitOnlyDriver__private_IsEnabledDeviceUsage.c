/*
 * XREFs of Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage @ 0x1C00244DC
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A4B90 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback @ 0x1C0024514 (Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback.c)
 */

__int64 Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Dxgk64BitOnlyDriver__private_featureState & 0x10) != 0 )
    return Feature_Dxgk64BitOnlyDriver__private_featureState & 1;
  else
    return Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback(
             (unsigned int)Feature_Dxgk64BitOnlyDriver__private_featureState,
             3LL);
}
