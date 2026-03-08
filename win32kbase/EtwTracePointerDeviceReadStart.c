/*
 * XREFs of EtwTracePointerDeviceReadStart @ 0x1C00EDE00
 * Callers:
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C00F614A (ApiSetEtwTracePointerDeviceReadStart.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceReadStart, &W32kControlGuid);
  return result;
}
