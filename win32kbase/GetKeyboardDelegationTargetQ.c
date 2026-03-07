__int64 GetKeyboardDelegationTargetQ()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
  {
    v1 = PtiFromThreadId(*(&InputDelegation::CInputDelegationInfo::gInstance + 1));
    if ( v1 )
      return *(_QWORD *)(v1 + 432);
  }
  return v0;
}
