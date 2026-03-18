/*
 * XREFs of ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02C15F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01E46B8 (DxgkIncreaseSessionAdapterUniqueness.c)
 */

char __fastcall IncreaseAdapterUniquenessCallback(__int64 a1, int a2)
{
  if ( a2 == 1 )
    DxgkIncreaseSessionAdapterUniqueness();
  return 1;
}
