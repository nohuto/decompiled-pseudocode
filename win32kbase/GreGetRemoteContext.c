/*
 * XREFs of GreGetRemoteContext @ 0x1C00D3160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRemoteContext(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 24) + 3016LL;
}
