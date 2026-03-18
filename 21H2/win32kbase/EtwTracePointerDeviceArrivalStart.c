/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C014E1B0
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C020C7BC (ApiSetEtwTracePointerDeviceArrivalStart.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStart, &W32kControlGuid);
  return result;
}
