/*
 * XREFs of WmipDeregisterDevice @ 0x140810420
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x140248854 (WmipFindRegEntryByDevice.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
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
