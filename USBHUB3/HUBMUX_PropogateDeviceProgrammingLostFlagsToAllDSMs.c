/*
 * XREFs of HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x1C00114C0
 * Callers:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0007808 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0007C30 (HUBPARENT_ResetHubComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al
  KSPIN_LOCK *v3; // rcx
  KSPIN_LOCK *v4; // r8
  KSPIN_LOCK *v5; // rdx

  v1 = (KSPIN_LOCK *)(a1 + 2320);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  v3 = (KSPIN_LOCK *)v1[8];
  v4 = v3 - 24;
  if ( v1 + 8 != v3 )
  {
    do
    {
      _InterlockedOr((volatile signed __int32 *)v4 + 409, 0x20u);
      v5 = (KSPIN_LOCK *)v4[24];
      v4 = v5 - 24;
    }
    while ( v1 + 8 != v5 );
  }
  KeReleaseSpinLock(v1, v2);
}
