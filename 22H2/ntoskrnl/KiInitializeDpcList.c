/*
 * XREFs of KiInitializeDpcList @ 0x14032D134
 * Callers:
 *     KiInitPrcb @ 0x14099C048 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14099EE3C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
