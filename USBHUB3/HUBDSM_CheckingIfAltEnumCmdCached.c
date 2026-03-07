__int64 __fastcall HUBDSM_CheckingIfAltEnumCmdCached(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // ax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2468) & 5) != 4 )
    return 4061LL;
  _InterlockedOr((volatile signed __int32 *)(v1 + 2468), 2u);
  v2 = *(_WORD *)(v1 + 2004);
  *(_OWORD *)(v1 + 2536) = *(_OWORD *)(v1 + 1988);
  *(_WORD *)(v1 + 2552) = v2;
  *(_DWORD *)(v1 + 1644) = 0;
  *(_QWORD *)(v1 + 1632) = 0LL;
  return 4089LL;
}
