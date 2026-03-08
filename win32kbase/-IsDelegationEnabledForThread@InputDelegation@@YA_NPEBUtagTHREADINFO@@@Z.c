/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C02174FC
 * Callers:
 *     NtUserGetKeyState @ 0x1C0078A00 (NtUserGetKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C007FFC0 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C00B0080 (IsSpatialDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
