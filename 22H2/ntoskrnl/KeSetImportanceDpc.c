/*
 * XREFs of KeSetImportanceDpc @ 0x1403812A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KeSetImportanceDpc(PRKDPC Dpc, KDPC_IMPORTANCE Importance)
{
  Dpc->Importance = Importance;
}
