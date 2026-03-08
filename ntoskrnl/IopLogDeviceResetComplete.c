/*
 * XREFs of IopLogDeviceResetComplete @ 0x140954464
 * Callers:
 *     PiProcessDeviceResetAction @ 0x14055DCD8 (PiProcessDeviceResetAction.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x14095486C (PnpFinalizeDeviceRemovalForReset.c)
 * Callees:
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x14055DC08 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140968B34 (PnpTraceDeviceRemovalForResetComplete.c)
 */

NTSTATUS __fastcall IopLogDeviceResetComplete(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+30h] [rbp-38h]
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = 0x20000LL;
  v2 = v9;
  v9[1] = &word_1408834C0;
  if ( a1 != -40 )
    v2 = (_QWORD *)(a1 + 40);
  result = PnpTraceDeviceRemovalForResetComplete();
  if ( (byte_140C0E10C & 2) != 0 )
    return McTemplateK0hzr0qqhzr4_EtwWriteTransfer(
             v6,
             v5,
             v7,
             *(_WORD *)v2 >> 1,
             v2[1],
             a2,
             v8,
             0,
             (__int64)&word_1408834C0);
  return result;
}
