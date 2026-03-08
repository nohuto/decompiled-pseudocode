/*
 * XREFs of EtwTracePointerDeviceReadStop @ 0x1C00EDE30
 * Callers:
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C0243EE8 (ApiSetEtwTracePointerDeviceReadStop.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceReadStop, &W32kControlGuid);
  return result;
}
