/*
 * XREFs of _lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_ @ 0x18009CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18008824C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800AB214 (-_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ.c)
 */

void __fastcall lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        SearchAppExperienceManager *Context,
        PTP_TIMER Timer)
{
  char v4; // di

  if ( *((_QWORD *)Context + 70) )
  {
    v4 = *((_BYTE *)Context + 568);
    if ( !SearchAppExperienceManager::_IsMouseOnSearch(Context) )
    {
      if ( v4 )
        ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)*((unsigned int *)Context + 138), 0LL);
    }
  }
}
