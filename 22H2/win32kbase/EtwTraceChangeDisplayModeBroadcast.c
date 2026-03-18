/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x1C00C5050
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceChangeDisplayModeBroadcast(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ChangeDisplayModeBroadcast, a1);
  return result;
}
