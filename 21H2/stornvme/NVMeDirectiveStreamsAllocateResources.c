/*
 * XREFs of NVMeDirectiveStreamsAllocateResources @ 0x1C0022584
 * Callers:
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsAllocateResources(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // r8
  char v7; // al

  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v6;
  *(_DWORD *)(a1 + 856) = 1;
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 26;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 259;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4144) = a3;
  SrbAssignQueueId(a1, a1 + 864);
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  return *(_BYTE *)(a1 + 867) != 1 ? 0xC1000001 : 0;
}
