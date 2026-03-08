/*
 * XREFs of KseDsHookDriverTargeted @ 0x14057EDF0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverLoad @ 0x14057F4DC (KsepDsEventDriverLoad.c)
 */

__int64 __fastcall KseDsHookDriverTargeted(int a1, int a2, int a3, int a4, char a5)
{
  KsepDsEventDriverLoad(a1, a2, a3, a4, a5);
  return 0LL;
}
