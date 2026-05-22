/*
 * XREFs of ?IsGazeDevice@GazeProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180188C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GazeProcessor::IsGazeDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 0x4000;
}
