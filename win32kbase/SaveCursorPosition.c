void __fastcall SaveCursorPosition(__int64 a1)
{
  *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12) = a1;
}
