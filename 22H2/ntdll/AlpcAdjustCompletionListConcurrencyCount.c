/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E07E0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009E670 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
