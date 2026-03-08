/*
 * XREFs of EtwTraceStopProcessQueuedMouseEvents @ 0x1C007D080
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStopProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &StopProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
