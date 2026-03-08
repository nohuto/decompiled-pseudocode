/*
 * XREFs of WmipDeregisterDevice @ 0x14087DDC8
 * Callers:
 *     IoWMIRegistrationControl @ 0x140869750 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x1403BC634 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1403CEEF0 (WmipDeregisterRegEntry.c)
 */

__int64 __fastcall WmipDeregisterDevice(__int64 a1)
{
  unsigned int v2; // edi
  char *RegEntryByDevice; // rsi
  PVOID *i; // rbx

  v2 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice(a1);
  if ( RegEntryByDevice )
  {
    for ( i = (PVOID *)WmipRegWorkList; i != &WmipRegWorkList; i = (PVOID *)*i )
    {
      if ( i[3] == RegEntryByDevice )
      {
        i[3] = 0LL;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( RegEntryByDevice )
  {
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    WmipDeregisterRegEntry(RegEntryByDevice);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
