__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2)
{
  unsigned int DLT; // eax
  unsigned int v5; // ebx
  char *v6; // rsi
  char v7; // di
  int v8; // r14d
  tagDomLock *v9; // rcx
  struct tagTHREADINFO *v10; // r14
  __int64 i; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  char v22; // di
  tagDomLock *DomainLockRef; // [rsp+50h] [rbp-9h] BYREF
  char v24; // [rsp+58h] [rbp-1h] BYREF
  __int64 v25; // [rsp+60h] [rbp+7h]
  char v26; // [rsp+68h] [rbp+Fh]
  __int64 v27; // [rsp+70h] [rbp+17h]
  char v28; // [rsp+78h] [rbp+1Fh]

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v22,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        0xCu,
        0x1Bu,
        (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids,
        a1);
    return 0LL;
  }
  else
  {
    DLT = DLT_HOOK::getDLT();
    v5 = 0;
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v6 = &v24;
    v25 = gDomainDummyLock;
    v7 = 1;
    v24 = 1;
    v27 = 0LL;
    v8 = 0;
    v26 = 0;
    v28 = 0;
    do
    {
      v9 = (tagDomLock *)*((_QWORD *)v6 - 1);
      if ( v9 )
      {
        if ( *v6 )
          tagDomLock::LockExclusive(v9);
        else
          tagDomLock::LockShared(v9);
      }
      ++v8;
      v6 += 16;
    }
    while ( !v8 );
    v28 = 1;
    v10 = PtiCurrentShared((__int64)v9);
    for ( i = PhkFirstValid((__int64)v10, a1); ; i = PhkNextValid(v14) )
    {
      v14 = i;
      if ( !i )
      {
        UserSetLastError(1431);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v7 = 0;
        }
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 29;
          LOBYTE(v17) = v7;
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v15,
            v16,
            3,
            12,
            29,
            (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids);
        }
        if ( v28 && DomainLockRef )
        {
          if ( v24 )
            tagDomLock::UnLockExclusive(DomainLockRef);
          else
            tagDomLock::UnLockShared(DomainLockRef);
        }
        return 0LL;
      }
      v13 = *(_DWORD *)(i + 68) == -1
          ? *(_QWORD *)(i + 56)
          : *(_QWORD *)(i + 56) + *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v12) + 53) + 8LL * *(int *)(i + 68) + 400);
      if ( v13 == a2 )
        break;
    }
    if ( *(struct tagTHREADINFO **)(v14 + 16) == v10 )
    {
      v5 = zzzUnhookWindowsHookEx((struct tagHOOK *)v14);
    }
    else
    {
      UserSetLastError(5);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 28;
        LOBYTE(v20) = v7;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v18,
          v19,
          3,
          12,
          28,
          (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids);
      }
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return v5;
  }
}
