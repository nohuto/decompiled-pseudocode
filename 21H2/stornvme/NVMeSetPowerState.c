/*
 * XREFs of NVMeSetPowerState @ 0x1C000A084
 * Callers:
 *     NVMePowerSetFState @ 0x1C000A004 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0019C58 (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeGetPowerState @ 0x1C000A1AC (NVMeGetPowerState.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx

  v2 = a2;
  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v4;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 952);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 864);
  LOBYTE(v6) = *(_BYTE *)(a1 + 1684);
  NVMeGetPowerState(a1, v6);
  LOBYTE(v7) = v2;
  NVMeGetPowerState(v8, v7);
  return WaitForCommandCompleteWithCustomTimeout(v9);
}
