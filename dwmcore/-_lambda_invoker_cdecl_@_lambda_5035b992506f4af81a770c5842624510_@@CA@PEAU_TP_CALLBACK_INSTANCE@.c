/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180193D10
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18019770C (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 */

void __fastcall _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 5;
    AcquireSRWLockExclusive(Context + 5);
    if ( (PVOID)((char *)Context[30].Ptr - (char *)Context[29].Ptr) >= (PVOID)0xC )
    {
      wil_details_WriteSRUMWnfUsageBuffer(&Context[29]);
      Context[30].Ptr = Context[29].Ptr;
    }
    LOBYTE(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
