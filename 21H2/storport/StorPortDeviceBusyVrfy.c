/*
 * XREFs of StorPortDeviceBusyVrfy @ 0x1C007F190
 * Callers:
 *     <none>
 * Callees:
 *     StorPortDeviceBusy @ 0x1C0039180 (StorPortDeviceBusy.c)
 */

char __fastcall StorPortDeviceBusyVrfy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  return StorPortDeviceBusy(a1, a2, a3, a4, a5);
}
