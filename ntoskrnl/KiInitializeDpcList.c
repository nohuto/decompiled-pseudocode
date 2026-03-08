/*
 * XREFs of KiInitializeDpcList @ 0x140302F70
 * Callers:
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140A8BBD4 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
