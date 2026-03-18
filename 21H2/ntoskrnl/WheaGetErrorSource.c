/*
 * XREFs of WheaGetErrorSource @ 0x140643590
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
