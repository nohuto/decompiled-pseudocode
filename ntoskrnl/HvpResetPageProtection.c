/*
 * XREFs of HvpResetPageProtection @ 0x140765A30
 * Callers:
 *     HvResetDirtyData @ 0x14072E110 (HvResetDirtyData.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x1402DC12C (RtlFindNextForwardRunSet.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 */

__int64 __fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int v4; // ebp
  int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v2 = *(_DWORD *)(BugCheckParameter2 + 88);
  result = 0LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 104);
  while ( (unsigned int)result < v2 )
  {
    result = RtlFindNextForwardRunSet(BugCheckParameter2 + 88, result, &v7);
    v5 = result;
    if ( !(_DWORD)result )
      break;
    v6 = v7;
    HvpSetRangeProtection(BugCheckParameter2, v7 << 9);
    result = v5 + v6;
    v4 -= v5;
    if ( !v4 )
      break;
  }
  return result;
}
