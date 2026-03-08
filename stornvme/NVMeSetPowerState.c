/*
 * XREFs of NVMeSetPowerState @ 0x1C002413C
 * Callers:
 *     NVMePowerSetFState @ 0x1C0010324 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00103B0 (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeGetPowerState @ 0x1C0007C94 (NVMeGetPowerState.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ecx

  v2 = a2;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1040);
  v5 = (*(_DWORD *)(v4 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v4 + 4096) = 9;
  *(_DWORD *)(v4 + 4140) ^= v5;
  *(_BYTE *)(v4 + 4136) = 2;
  ProcessCommand(a1, a1 + 952);
  NVMeGetPowerState(a1, *(_BYTE *)(a1 + 1884));
  NVMeGetPowerState(v6, v2);
  return WaitForCommandCompleteWithCustomTimeout(v7);
}
