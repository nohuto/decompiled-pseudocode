/*
 * XREFs of NVMeDirectiveStreamsReleaseId @ 0x1C001D090
 * Callers:
 *     IoctlStorageStreamsReleaseId @ 0x1C0014708 (IoctlStorageStreamsReleaseId.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReleaseId(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rdx
  char v7; // al

  LocalCommandReuse(a1, a1 + 944);
  v6 = *(_QWORD *)(a1 + 1040);
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 25;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 257;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4142) = a3;
  SrbAssignQueueId(a1, a1 + 952);
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
}
