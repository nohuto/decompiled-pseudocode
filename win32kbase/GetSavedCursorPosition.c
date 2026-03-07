__int64 GetSavedCursorPosition()
{
  return *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12);
}
