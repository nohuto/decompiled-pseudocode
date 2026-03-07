char __fastcall HUBPDO_ParentInterfaceWasHubResetOnResume(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 0x40) == 0 )
    return 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFDFFF);
  return 1;
}
