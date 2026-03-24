/*
 * XREFs of EtwTraceSmoothRotationStart @ 0x1C01239C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qtq_EtwWriteTransfer @ 0x1C01270B8 (McTemplateK0qtq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStart(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0qtq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
