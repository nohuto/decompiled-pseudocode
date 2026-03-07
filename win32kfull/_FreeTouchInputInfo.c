__int64 __fastcall FreeTouchInputInfo(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  tagDomLock *v5; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+48h] [rbp-20h]
  char v8; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)&v5);
  v2 = HMValidateHandleNoSecure(a1, 20);
  v3 = v2;
  if ( v2 && *(_BYTE *)(_HMPheFromObject(v2) + 24) == 20 )
  {
    HMDestroyObject(v3);
    if ( v8 && v7 && v5 )
    {
      if ( v6 )
        tagDomLock::UnLockExclusive(v5);
      else
        tagDomLock::UnLockShared(v5);
    }
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v5);
    return 0LL;
  }
}
