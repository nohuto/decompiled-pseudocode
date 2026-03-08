/*
 * XREFs of ClearDelegationCapture @ 0x1C00DBDC0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearDelegationCapture(__int64 a1)
{
  __int64 result; // rax

  result = HMAssignmentUnlock(a1 + 144);
  *(_BYTE *)(a1 + 152) = 0;
  return result;
}
