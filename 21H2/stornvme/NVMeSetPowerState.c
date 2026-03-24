/*
 * XREFs of NVMeSetPowerState @ 0x1C001BEC4
 * Callers:
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00106D0 (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     NVMeGetPowerState @ 0x1C000EBE0 (NVMeGetPowerState.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx

  v2 = a2;
  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v4;
  *(_DWORD *)(a1 + 840) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 936);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 848);
  NVMeGetPowerState(a1, *(_BYTE *)(a1 + 1668));
  NVMeGetPowerState(v6, v2);
  return WaitForCommandCompleteWithCustomTimeout(v7);
}
