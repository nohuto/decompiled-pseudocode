bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
