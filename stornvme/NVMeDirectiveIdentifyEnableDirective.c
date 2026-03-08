/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC08
 * Callers:
 *     NVMeInitStreams @ 0x1C000F660 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al

  LocalCommandReuse(a1, a1 + 944);
  v2 = *(_QWORD *)(a1 + 1040);
  v3 = *(_BYTE *)(v2 + 4253);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4253) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 952);
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
}
