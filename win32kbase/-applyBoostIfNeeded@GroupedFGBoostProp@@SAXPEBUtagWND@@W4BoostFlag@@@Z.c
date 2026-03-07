void __fastcall GroupedFGBoostProp::applyBoostIfNeeded(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  char v9; // [rsp+50h] [rbp-28h]
  char v10; // [rsp+58h] [rbp-20h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v7,
    *(__int64 **)(a1 + 144));
  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v5) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
    GroupedFGBoostProp::applyBoost(v5, a2);
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v10 && v9 )
  {
    v4 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
