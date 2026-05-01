/*
 * XREFs of _lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_ @ 0x180088210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // ebx

  v5 = (unsigned int)Context;
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)v5, 0, a5);
}
