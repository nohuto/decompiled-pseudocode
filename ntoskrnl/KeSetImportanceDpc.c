/*
 * XREFs of KeSetImportanceDpc @ 0x1403024E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KeSetImportanceDpc(PRKDPC Dpc, KDPC_IMPORTANCE Importance)
{
  Dpc->Importance = Importance;
}
