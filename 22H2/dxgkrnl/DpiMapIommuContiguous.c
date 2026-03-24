/*
 * XREFs of DpiMapIommuContiguous @ 0x1C02C6FB0
 * Callers:
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C020E884 (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057754 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuContiguousInternal @ 0x1C00577A0 (DpiMapIommuContiguousInternal.c)
 */

__int64 __fastcall DpiMapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3, int a4, __int64 a5)
{
  int IoMmuContextFromDevice; // eax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
