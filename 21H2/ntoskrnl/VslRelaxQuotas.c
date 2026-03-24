/*
 * XREFs of VslRelaxQuotas @ 0x14089017C
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140277468 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

NTSTATUS VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1070268386;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return -1073740972;
  return VslpEnterIumSecureMode(2u, 52, 0, (__int64)v2);
}
