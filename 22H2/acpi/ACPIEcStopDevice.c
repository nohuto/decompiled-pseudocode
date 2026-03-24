/*
 * XREFs of ACPIEcStopDevice @ 0x1C0053DF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C0053E40 (ACPIEcStopRemoveDeviceCommon.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AE050 (ACPIBusIrpStopDevice.c)
 */

__int64 __fastcall ACPIEcStopDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
  result = ACPIBusIrpStopDevice(a1, a2);
  if ( (int)result >= 0 )
    return ACPIEcStopRemoveDeviceCommon(v4);
  return result;
}
