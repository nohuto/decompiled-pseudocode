bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
