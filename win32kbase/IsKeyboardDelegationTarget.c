char __fastcall IsKeyboardDelegationTarget(__int64 a1)
{
  char v1; // bl

  v1 = 1;
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) == 0
    || !*(_QWORD *)(a1 + 432)
    || (unsigned int)PsGetThreadId(*(PETHREAD *)a1) != *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
  {
    return 0;
  }
  return v1;
}
