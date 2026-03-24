/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C0123860
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01CE8D4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStart, &W32kControlGuid);
  return result;
}
