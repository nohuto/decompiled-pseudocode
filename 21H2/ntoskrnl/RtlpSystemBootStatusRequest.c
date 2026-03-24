/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x1407906CC
 * Callers:
 *     RtlSetSystemBootStatusEx @ 0x1406C37F0 (RtlSetSystemBootStatusEx.c)
 *     PoClearTransitionMarker @ 0x1407903D4 (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x140790580 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1407905C0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatus @ 0x140790690 (RtlSetSystemBootStatus.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403FAF80 (ZwPowerInformation.c)
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
