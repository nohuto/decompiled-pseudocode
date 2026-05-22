/*
 * XREFs of ?IsKeyboardDevice@KeyboardProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18003ACE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardProcessor::IsKeyboardDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 2) & 1;
}
