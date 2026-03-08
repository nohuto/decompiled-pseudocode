/*
 * XREFs of KseSkipDriverUnloadHookDriverTargeted @ 0x140580110
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14058014C (KsepSkipDriverUnloadEventDriverLoad.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverTargeted(int a1, int a2, int a3, int a4, char a5)
{
  KsepSkipDriverUnloadEventDriverLoad(a1, a2, a3, a4, a5);
  return 0LL;
}
