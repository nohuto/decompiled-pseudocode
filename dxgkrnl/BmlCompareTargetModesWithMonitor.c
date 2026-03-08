/*
 * XREFs of BmlCompareTargetModesWithMonitor @ 0x1C016E13C
 * Callers:
 *     BmlCompareTargetModes @ 0x1C016E704 (BmlCompareTargetModes.c)
 * Callees:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C016ED64 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 */

__int64 __fastcall BmlCompareTargetModesWithMonitor(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rsi
  int TargetModePreferenceOnMonitor; // eax
  __int64 v8; // rdx
  int v9; // ebp
  int v10; // eax

  v5 = a2;
  LOBYTE(a2) = a3;
  TargetModePreferenceOnMonitor = BmlGetTargetModePreferenceOnMonitor(a1, a2, a4);
  LOBYTE(v8) = a3;
  v9 = TargetModePreferenceOnMonitor;
  v10 = BmlGetTargetModePreferenceOnMonitor(v5, v8, a4);
  if ( v9 > v10 )
    return 1LL;
  else
    return (unsigned int)(v9 >= v10) - 1;
}
