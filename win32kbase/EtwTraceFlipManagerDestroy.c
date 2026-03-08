/*
 * XREFs of EtwTraceFlipManagerDestroy @ 0x1C01627B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C016524C (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerDestroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &FlipManagerDestroy, a3, (unsigned int)a1);
  return result;
}
