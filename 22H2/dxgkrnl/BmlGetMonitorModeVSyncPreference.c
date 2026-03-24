/*
 * XREFs of BmlGetMonitorModeVSyncPreference @ 0x1C0143B98
 * Callers:
 *     BmlGetMonitorModePreference @ 0x1C0143AFC (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetMonitorModeVSyncPreference(_DWORD *a1)
{
  int v1; // r8d

  if ( a1[8] )
  {
    v1 = a1[7] / a1[8] + 1;
    if ( (unsigned int)a1[7] % (unsigned __int64)(unsigned int)a1[8] < (unsigned int)a1[8]
                                                                     - (unsigned int)a1[7]
                                                                     % (unsigned __int64)(unsigned int)a1[8] )
      v1 = a1[7] / a1[8];
  }
  else
  {
    v1 = -1;
  }
  if ( (unsigned int)(v1 - 24) > 0x33 )
    return 0LL;
  if ( (unsigned int)(v1 - 50) > 0x14 )
    return 1LL;
  if ( v1 != 60 )
    return 2LL;
  if ( a1[5] == 1024 && a1[6] == 768 )
    return 4LL;
  return 3LL;
}
