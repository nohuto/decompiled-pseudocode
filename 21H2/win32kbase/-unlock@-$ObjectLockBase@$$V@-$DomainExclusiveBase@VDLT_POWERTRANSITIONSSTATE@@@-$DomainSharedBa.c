/*
 * XREFs of ?unlock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C0147D14
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::unlock(
        __int64 a1)
{
  PERESOURCE *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(PERESOURCE **)a1;
    if ( v2 )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    *(_BYTE *)(a1 + 40) = 0;
  }
}
