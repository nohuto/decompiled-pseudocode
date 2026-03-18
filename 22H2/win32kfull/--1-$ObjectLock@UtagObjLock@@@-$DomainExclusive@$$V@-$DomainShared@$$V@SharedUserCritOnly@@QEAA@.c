/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00BE880
 * Callers:
 *     _BuildPropList @ 0x1C0071C8C (_BuildPropList.c)
 *     NtUserGetProp @ 0x1C008B300 (NtUserGetProp.c)
 *     NtUserSetProp @ 0x1C00C63E0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
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
