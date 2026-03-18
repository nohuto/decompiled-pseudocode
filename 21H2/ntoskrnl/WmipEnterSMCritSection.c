/*
 * XREFs of WmipEnterSMCritSection @ 0x14045F87C
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     WmipAddDataSource @ 0x14075D1B4 (WmipAddDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS WmipEnterSMCritSection()
{
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
