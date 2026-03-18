/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C002449C
 * Callers:
 *     NVMePowerInitialize @ 0x1C0009B20 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 20) )
  {
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
    LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 1;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_DWORD *)(v5 + 4140) ^= v4;
    *(_BYTE *)(v5 + 4136) = 12;
    ProcessCommand(a1, a1 + 864);
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  }
  return result;
}
