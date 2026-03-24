/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x1C00B7500
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceChangeDisplayModeBroadcast(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ChangeDisplayModeBroadcast, a1);
  return result;
}
