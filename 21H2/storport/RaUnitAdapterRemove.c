/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0046D00
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00063B0 (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C00165B0 (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C00190AC (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019C30 (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
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
