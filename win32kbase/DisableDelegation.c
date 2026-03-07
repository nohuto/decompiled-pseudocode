__int64 __fastcall DisableDelegation(CCursorClip *a1)
{
  __int64 result; // rax

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  result = 0LL;
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
  dword_1C02D1848 = 0;
  return result;
}
