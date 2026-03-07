__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C3EDB8, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140C3EF98 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140C3EDB0;
    if ( (dword_140C3EDB0 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
