/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C001862C
 * Callers:
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al

  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v2;
  *(_DWORD *)(a1 + 840) = 1;
  v3 = *(_BYTE *)(v2 + 4253);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4253) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 848);
  ProcessCommand(a1, a1 + 848);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 851) != 1 ? 0xC1000001 : 0;
}
