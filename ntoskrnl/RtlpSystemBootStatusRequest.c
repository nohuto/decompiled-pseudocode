/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x14073AEEC
 * Callers:
 *     RtlSetSystemBootStatus @ 0x14073AEB0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x140858A10 (RtlGetSystemBootStatusEx.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x14085FAD0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BAD30 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x140412EF0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned __int64 OutputBufferLength; // rax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( !a4 )
  {
    LODWORD(OutputBufferLength) = 0;
LABEL_3:
    InputBuffer[1] = 0;
    InputBuffer[3] = 0;
    InputBuffer[2] = a3;
    InputBuffer[0] = a1;
    v7 = a2;
    return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  OutputBufferLength = 4LL * a3;
  if ( OutputBufferLength <= 0xFFFFFFFF )
    goto LABEL_3;
  return -1073741675;
}
