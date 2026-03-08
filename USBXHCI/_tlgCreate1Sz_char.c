/*
 * XREFs of _tlgCreate1Sz_char @ 0x1C004BCA0
 * Callers:
 *     Etw_DeviceUpdate @ 0x1C001D724 (Etw_DeviceUpdate.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C001F980 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00533E4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_1C005A0F6;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
