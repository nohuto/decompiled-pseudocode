/*
 * XREFs of PoEndPartitionReplace @ 0x140986568
 * Callers:
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 11;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
