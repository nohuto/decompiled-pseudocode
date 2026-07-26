/*
 * XREFs of ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C0123978
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C0099170 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     <none>
 */

void Ndis::BindEngine::BeginBindOperation(void)
{
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
}
