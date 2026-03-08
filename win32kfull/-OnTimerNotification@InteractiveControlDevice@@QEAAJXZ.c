/*
 * XREFs of ?OnTimerNotification@InteractiveControlDevice@@QEAAJXZ @ 0x1C02488E4
 * Callers:
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C02479F0 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0248350 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0248D88 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::OnTimerNotification(InteractiveControlDevice *this)
{
  _WORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+24h] [rbp-24h]
  __int64 v5; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)this + 58) )
    *((_DWORD *)this + 94) = 1;
  *((_DWORD *)this + 95) = 1;
  *((_QWORD *)this + 44) = 0LL;
  InteractiveControlDevice::FlushBufferedInput(this, 128);
  v3[0] = *((_WORD *)this + 196);
  v3[1] = 0;
  v4 = 0;
  v5 = 1LL;
  InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v3);
  return 0LL;
}
