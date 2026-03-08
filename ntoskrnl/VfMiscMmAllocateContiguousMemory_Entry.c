/*
 * XREFs of VfMiscMmAllocateContiguousMemory_Entry @ 0x140ADD1D0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscEnforceRule @ 0x140ADE528 (ViMiscEnforceRule.c)
 */

__int64 __fastcall VfMiscMmAllocateContiguousMemory_Entry(_QWORD *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1[2] == 0LL;
  return ViMiscEnforceRule(a1, *a1, a3);
}
