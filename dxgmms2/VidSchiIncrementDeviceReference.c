/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C001470C
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00AC5B0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}
