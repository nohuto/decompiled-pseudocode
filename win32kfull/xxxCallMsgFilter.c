__int64 __fastcall xxxCallMsgFilter(__int64 a1, unsigned int a2)
{
  struct tagTHREADINFO *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+50h] [rbp-18h]

  v4 = PtiCurrentShared(a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 != 576 && ((v5 - 281) & 0xFFFFFFFD) != 0 )
  {
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v8);
    if ( ((*((_BYTE *)v4 + 680) | *(_BYTE *)(**((_QWORD **)v4 + 58) + 16LL)) & 0x80u) != 0
      && (unsigned int)xxxCallHook(a2, 0LL, a1, 6) )
    {
      v6 = 1;
LABEL_8:
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v8);
      return v6;
    }
    if ( ((*((_BYTE *)v4 + 680) | *(_BYTE *)(**((_QWORD **)v4 + 58) + 16LL)) & 1) != 0 )
    {
      v6 = xxxCallHook(a2, 0LL, a1, -1);
      goto LABEL_8;
    }
    if ( v11 && v10 && v8 )
    {
      if ( v9 )
        tagDomLock::UnLockExclusive(v8);
      else
        tagDomLock::UnLockShared(v8);
    }
  }
  return 0LL;
}
