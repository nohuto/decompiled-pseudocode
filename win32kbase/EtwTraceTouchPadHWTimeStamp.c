/*
 * XREFs of EtwTraceTouchPadHWTimeStamp @ 0x1C01643C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqxqqqqqqtqqqqtqq_EtwWriteTransfer @ 0x1C016730C (McTemplateK0qqxqqqqqqtqqqqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadHWTimeStamp(
        int a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qqxqqqqqqtqqqqtqq_EtwWriteTransfer(
             a1,
             a2,
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
             a14,
             a15,
             a16,
             a17);
  return result;
}
