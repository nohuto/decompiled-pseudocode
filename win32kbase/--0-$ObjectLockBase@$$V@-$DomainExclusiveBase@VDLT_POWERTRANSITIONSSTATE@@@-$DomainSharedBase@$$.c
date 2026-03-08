/*
 * XREFs of ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00CFACC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::ObjectLockBase<>(
        __int64 a1)
{
  *(_QWORD *)a1 = GetDomainLockRef(13);
  *(_QWORD *)(a1 + 16) = &gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  return a1;
}
