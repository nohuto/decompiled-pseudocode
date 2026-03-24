/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C0018DE8
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 851) = 0;
    memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 936);
    *(_QWORD *)(a1 + 904) = v2;
    *(_DWORD *)(a1 + 840) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
    return NVMeAllocateDmaBuffer(a1, 0x100u);
  }
  return result;
}
