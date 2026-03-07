char __fastcall HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 0x80u) == 0 )
    return 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFF7F);
  return 1;
}
