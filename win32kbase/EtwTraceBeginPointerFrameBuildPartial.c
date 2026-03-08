/*
 * XREFs of EtwTraceBeginPointerFrameBuildPartial @ 0x1C0161A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00EE3C8 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerFrameBuildPartial(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameBuildPartial, a3, 0, a1, a2);
  return result;
}
