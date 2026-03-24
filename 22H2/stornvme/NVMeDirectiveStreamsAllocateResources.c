/*
 * XREFs of NVMeDirectiveStreamsAllocateResources @ 0x1C00188A4
 * Callers:
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsAllocateResources(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // r8
  char v7; // al

  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v6;
  *(_DWORD *)(a1 + 840) = 1;
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 26;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 259;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4144) = a3;
  SrbAssignQueueId(a1, a1 + 848);
  ProcessCommand(a1, a1 + 848);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 851) != 1 ? 0xC1000001 : 0;
}
