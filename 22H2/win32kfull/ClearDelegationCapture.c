/*
 * XREFs of ClearDelegationCapture @ 0x1C0114E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearDelegationCapture(__int64 a1)
{
  __int64 result; // rax

  result = HMAssignmentUnlock(a1 + 136);
  *(_BYTE *)(a1 + 144) = 0;
  return result;
}
