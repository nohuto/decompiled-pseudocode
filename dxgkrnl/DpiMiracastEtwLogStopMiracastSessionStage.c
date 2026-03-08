/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C005F36C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C039AF44 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C00628D4 (McTemplateK0xq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    return McTemplateK0xq_EtwWriteTransfer(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
