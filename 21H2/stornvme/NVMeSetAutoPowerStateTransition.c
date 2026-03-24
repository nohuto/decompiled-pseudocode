/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C001B504
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 16) )
  {
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
    LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 1;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_DWORD *)(v5 + 4140) ^= v4;
    *(_BYTE *)(v5 + 4136) = 12;
    ProcessCommand(a1, a1 + 848);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
