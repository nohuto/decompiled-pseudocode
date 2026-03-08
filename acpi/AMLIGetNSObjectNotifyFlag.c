/*
 * XREFs of AMLIGetNSObjectNotifyFlag @ 0x1C0048394
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008310C (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIGetNSObjectNotifyFlag(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)a1 + 64LL) & 0x10) != 0;
}
