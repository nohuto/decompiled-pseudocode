/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C006C4AC
 * Callers:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     _BuildPropList @ 0x1C00E5788 (_BuildPropList.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2,
        __int64 a3)
{
  tagObjLock **v3; // rdi
  tagObjLock *v4; // rsi
  int v7; // esi

  v3 = (tagObjLock **)(a1 + 16);
  *(_QWORD *)a1 = gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  v4 = a2;
  *(_BYTE *)(a1 + 40) = 0;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY(a1, a2, a3) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    if ( v4 == (tagObjLock *)gObjDummyLock )
      v4 = 0LL;
    *v3 = v4;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v7 = 0;
      do
      {
        if ( *v3 )
          tagObjLock::LockExclusive(*v3);
        ++v7;
        ++v3;
      }
      while ( !v7 );
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return a1;
}
