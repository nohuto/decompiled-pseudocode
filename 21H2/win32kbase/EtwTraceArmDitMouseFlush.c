/*
 * XREFs of EtwTraceArmDitMouseFlush @ 0x1C014C530
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceArmDitMouseFlush(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ArmDitMouseFlush, &W32kControlGuid);
  return result;
}
