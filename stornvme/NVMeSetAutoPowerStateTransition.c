/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C0023724
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FCC4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v4 = *(_QWORD *)(a1 + 1040);
    v5 = (*(_DWORD *)(v4 + 4140) ^ v2) & 1;
    *(_BYTE *)(v4 + 4096) = 9;
    *(_DWORD *)(v4 + 4140) ^= v5;
    *(_BYTE *)(v4 + 4136) = 12;
    ProcessCommand(a1, a1 + 952);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
