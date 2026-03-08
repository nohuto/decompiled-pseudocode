/*
 * XREFs of KseSkipDriverUnloadCallbackHookDriverUnload @ 0x1405800F0
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14058024C (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadCallbackHookDriverUnload(__int64 a1)
{
  return KsepSkipDriverUnloadEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
