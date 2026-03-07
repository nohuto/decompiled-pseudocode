__int64 __fastcall GetPowerTransitionsState(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( !tagDomLock::IsLockedShared(gDomainPowerTransitionsStateLock) )
    __int2c();
  result = SGDGetUserSessionState(v2);
  *a1 = *(_OWORD *)(result + 2952);
  a1[1] = *(_OWORD *)(result + 2968);
  a1[2] = *(_OWORD *)(result + 2984);
  a1[3] = *(_OWORD *)(result + 3000);
  return result;
}
