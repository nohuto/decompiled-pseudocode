/*
 * XREFs of PopDirectedDripsEngage @ 0x140586FC4
 * Callers:
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x14058956C (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x140802CA0 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983AA4 (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C3F1F8, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140C3F3D8 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140C3F1F0;
    if ( (dword_140C3F1F0 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
