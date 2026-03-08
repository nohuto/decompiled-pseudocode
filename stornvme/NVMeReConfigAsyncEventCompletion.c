/*
 * XREFs of NVMeReConfigAsyncEventCompletion @ 0x1C0021820
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalCommand @ 0x1C0009C80 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FB54 (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeReConfigAsyncEventCompletion(__int64 a1, __int64 a2)
{
  _BYTE *LocalCommand; // rax
  __int64 v3; // r11

  LocalCommand = (_BYTE *)GetLocalCommand(a1, a2);
  *LocalCommand = 0;
  return NVMeIssueAsyncEventCommand(v3, (__int64)LocalCommand);
}
