/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C005F33C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C039AACC (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C00628D4 (McTemplateK0xq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    return McTemplateK0xq_EtwWriteTransfer(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
