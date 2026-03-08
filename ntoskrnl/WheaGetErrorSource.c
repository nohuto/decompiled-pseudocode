/*
 * XREFs of WheaGetErrorSource @ 0x14060E1E0
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A04E60 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
