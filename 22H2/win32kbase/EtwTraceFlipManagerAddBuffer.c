/*
 * XREFs of EtwTraceFlipManagerAddBuffer @ 0x1C01395C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpp_EtwWriteTransfer @ 0x1C013D364 (McTemplateK0qpp_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerAddBuffer(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpp_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
