/*
 * XREFs of ACPIEcRemoveDevice @ 0x1C00253C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C0025890 (ACPIEcStopRemoveDeviceCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIEcRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbp
  _QWORD *v5; // rsi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD **)(DeviceExtension + 184);
  result = ACPIBusIrpRemoveDevice(a1, a2);
  if ( (int)result >= 0 )
  {
    v7 = ACPIEcStopRemoveDeviceCommon(v5);
    *v5 = 0LL;
    v8 = v7;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x80000000080LL) != 0 )
    {
      AMLIDereferenceHandleEx(v5[7]);
      v5[7] = 0LL;
    }
    return v8;
  }
  return result;
}
