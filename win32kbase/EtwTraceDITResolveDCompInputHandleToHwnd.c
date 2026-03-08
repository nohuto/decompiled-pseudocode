/*
 * XREFs of EtwTraceDITResolveDCompInputHandleToHwnd @ 0x1C000BFB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppxq_EtwWriteTransfer @ 0x1C0165D24 (McTemplateK0ppxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDITResolveDCompInputHandleToHwnd(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0ppxq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
