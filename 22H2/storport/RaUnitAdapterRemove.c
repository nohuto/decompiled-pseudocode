/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0046CE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00063A0 (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C0016540 (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C001903C (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019BC0 (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    *(_DWORD *)(a1 + 48) = 6;
    RaUnitWaitForRemoveLock(a1);
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 320LL);
    RaidDeleteUnit(a1);
  }
  return 0LL;
}
