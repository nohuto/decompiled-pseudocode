/*
 * XREFs of EtwTraceWinlogonSleepStartEvent @ 0x1C00C21E0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C1188 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C0125340 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceWinlogonSleepStartEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &WinlogonSleepStartEvent, a3, (unsigned int)a1);
  return result;
}
