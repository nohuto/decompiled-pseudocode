/*
 * XREFs of EtwTraceTouchTargetingPointerEvent @ 0x1C0164590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0dddddddddddd_EtwWriteTransfer @ 0x1C0165350 (McTemplateK0dddddddddddd_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchTargetingPointerEvent(
        int a1,
        unsigned __int16 a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dddddddddddd_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return result;
}
