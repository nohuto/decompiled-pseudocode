/*
 * XREFs of EtwTraceUiLimitWriteClipboard @ 0x1C0164C10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qm_EtwWriteTransfer @ 0x1C0166120 (McTemplateK0qm_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUiLimitWriteClipboard(int a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000000000LL) != 0 )
    return McTemplateK0qm_EtwWriteTransfer(a1, (unsigned int)&UiLimitWriteClipboard, a3, a1, a2);
  return result;
}
