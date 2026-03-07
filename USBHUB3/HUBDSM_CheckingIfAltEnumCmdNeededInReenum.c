__int64 __fastcall HUBDSM_CheckingIfAltEnumCmdNeededInReenum(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2464) & 4) == 0 || (*(_DWORD *)(v1 + 2468) & 1) != 0 )
    return 4061LL;
  _InterlockedOr((volatile signed __int32 *)(v1 + 2468), 2u);
  return 4089LL;
}
