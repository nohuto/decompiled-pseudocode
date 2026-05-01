/*
 * XREFs of _lambda_40ebd5a7edad19454cb0db177a6ae919_::_lambda_invoker_cdecl_ @ 0x18009CB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_40ebd5a7edad19454cb0db177a6ae919_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        ExperienceManagerUtils **Context,
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[51], (struct IUnknown *)Context, (void *)0x401, 1LL);
}
