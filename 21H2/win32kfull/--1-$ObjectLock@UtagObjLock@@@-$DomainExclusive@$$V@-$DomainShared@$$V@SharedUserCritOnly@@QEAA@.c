/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C006B9B0
 * Callers:
 *     NtUserSetProp @ 0x1C00791E0 (NtUserSetProp.c)
 *     NtUserGetProp @ 0x1C00DA0E0 (NtUserGetProp.c)
 *     _BuildPropList @ 0x1C00E5788 (_BuildPropList.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
        __int64 a1)
{
  tagObjLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) && *(_BYTE *)(a1 + 32) )
  {
    v2 = *(tagObjLock **)(a1 + 16);
    if ( v2 )
      tagObjLock::UnLockExclusive(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
