/*
 * XREFs of KiInitializeDpcList @ 0x14036E8F0
 * Callers:
 *     KiInitPrcb @ 0x140A8C3EC (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140A8F178 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
