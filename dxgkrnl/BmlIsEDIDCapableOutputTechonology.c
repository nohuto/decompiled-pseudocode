/*
 * XREFs of BmlIsEDIDCapableOutputTechonology @ 0x1C016F144
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C016EB6C (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C016ED64 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlGetMonitorModePreference @ 0x1C016F008 (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsEDIDCapableOutputTechonology(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  bool v6; // zf

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= 8 )
  {
    if ( v1 == 8 || v1 == 0x80000000 || v1 == -1 || v1 == 1 || v1 == 2 || v1 == 3 )
      return 0;
    v6 = v1 == 6;
  }
  else
  {
    v2 = v1 - 9;
    if ( !v2 )
      return 0;
    v3 = v2 - 2;
    if ( !v3 )
      return 0;
    v4 = v3 - 1;
    if ( !v4 )
      return 0;
    v5 = v4 - 1;
    if ( !v5 )
      return 0;
    v6 = v5 == 1;
  }
  return !v6;
}
