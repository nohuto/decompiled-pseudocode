/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1C007FFC0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C007FBB0 (NtUserGetAsyncKeyState.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C02174FC (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
