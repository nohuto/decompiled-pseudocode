/*
 * XREFs of AcceptDeviceFirmwareLockCompletion @ 0x1C001B660
 * Callers:
 *     <none>
 * Callees:
 *     GenericDeviceFirmwareLockCompletion @ 0x1C001BD10 (GenericDeviceFirmwareLockCompletion.c)
 */

__int64 __fastcall AcceptDeviceFirmwareLockCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 32) = a3;
  return GenericDeviceFirmwareLockCompletion();
}
