/*
 * XREFs of EtwWindowRendering @ 0x1C01987E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer @ 0x1C0165B28 (McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwWindowRendering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer(
             a1,
             &WindowRendering,
             a3,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  return result;
}
