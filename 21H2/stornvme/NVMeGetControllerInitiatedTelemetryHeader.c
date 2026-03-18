/*
 * XREFs of NVMeGetControllerInitiatedTelemetryHeader @ 0x1C0022CC0
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C0022AC8 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryHeader(__int64 a1, void *a2, __int64 *a3)
{
  void *v6; // rcx
  __int64 v7; // rbx
  int v9; // [rsp+28h] [rbp-30h]

  memset(a2, 0, 0x200uLL);
  v6 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v6, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v7 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v7;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v7 + 4253) |= 3u;
  *(_WORD *)(v7 + 4244) = 0;
  BuildGetLogPageCommandForTelemetryLog(a1, v7, 8u, 0x200u, *a3, v9, 0LL, 1, 1u);
  *(_BYTE *)(v7 + 4253) |= 4u;
  *(_QWORD *)(v7 + 4200) = a2;
  *(_QWORD *)(v7 + 4208) = *a3;
  *(_DWORD *)(v7 + 4240) = 512;
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  return *(_BYTE *)(a1 + 867) != 1 ? 0xC1000001 : 0;
}
