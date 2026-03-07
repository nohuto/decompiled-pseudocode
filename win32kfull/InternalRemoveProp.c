__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  tagObjLock *v9; // [rsp+30h] [rbp-48h]
  char v10; // [rsp+40h] [rbp-38h]
  char v11; // [rsp+48h] [rbp-30h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v8,
    *(_QWORD *)(a1 + 144));
  if ( (_WORD)a2 == word_1C0361338 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v6 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v11 && v10 && v9 )
    tagObjLock::UnLockExclusive(v9);
  return v6;
}
