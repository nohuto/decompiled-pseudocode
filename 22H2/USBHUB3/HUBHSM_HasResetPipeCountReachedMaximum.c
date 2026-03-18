/*
 * XREFs of HUBHSM_HasResetPipeCountReachedMaximum @ 0x1C0008930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_HasResetPipeCountReachedMaximum(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = ++*(_WORD *)(v1 + 52);
  result = 2041LL;
  if ( v2 > 3u )
    return 2057LL;
  return result;
}
