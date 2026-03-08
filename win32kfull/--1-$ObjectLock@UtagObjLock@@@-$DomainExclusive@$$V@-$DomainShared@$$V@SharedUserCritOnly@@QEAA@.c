/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012F0E4
 * Callers:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     NtUserGetProp @ 0x1C00B6C30 (NtUserGetProp.c)
 *     NtUserSetProp @ 0x1C0100EE0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 *     _BuildPropList @ 0x1C01023EC (_BuildPropList.c)
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
