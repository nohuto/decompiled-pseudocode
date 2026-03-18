/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C0004A5C
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00900F0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}
