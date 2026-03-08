/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C02AA090
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C002A75C (-vSynchronizeDriver@@YAXK@Z.c)
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128LL);
}
