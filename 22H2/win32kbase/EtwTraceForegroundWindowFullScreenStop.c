/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C0122610
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
