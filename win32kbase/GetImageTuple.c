/*
 * XREFs of GetImageTuple @ 0x1C008C704
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008C178 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int16 v3; // cx
  int v4; // ecx
  int v5; // r9d
  __int64 result; // rax

  v3 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v3 == 267 || v3 == 523 )
  {
    v4 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
    v5 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  *a2 = v5;
  result = 1LL;
  *a3 = v4;
  return result;
}
