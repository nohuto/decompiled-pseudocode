/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x140858A40
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 * Callees:
 *     ZwPowerInformation @ 0x140412EF0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  _QWORD v2[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+48h] [rbp-20h] BYREF
  int v4; // [rsp+58h] [rbp-10h]

  v3[0] = 0LL;
  if ( !a1 )
    return -1073741811;
  v3[1] = a1;
  v4 = 1;
  v2[1] = 1LL;
  v2[0] = 34LL;
  v2[2] = v3;
  return ZwPowerInformation(PowerInformationInternal, v2, 0x18u, 0LL, 0);
}
