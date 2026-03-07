char __fastcall UmfdHostLifeTimeManager::EnsureUmfdHost(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // di
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v1);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( *(_QWORD *)(v3 + 23496) == PsGetCurrentProcess(v5, v4, v6) )
  {
    if ( v1 )
    {
      GreReleasePushLockShared(v1);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    v7 = 0;
    if ( v1 )
    {
      GreReleasePushLockShared(v1);
      KeLeaveCriticalRegion();
    }
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      v10 = *(_QWORD *)(SGDGetSessionState(v8) + 32);
      v11 = v10 == -23544;
      v12 = v10 + 23544;
      v15 = v12;
      if ( !v11 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v12, 0LL);
      }
      v13 = *(_QWORD *)(SGDGetSessionState(v9) + 32);
      if ( *(_BYTE *)(v13 + 23537) )
        goto LABEL_8;
      KeClearEvent(*(PRKEVENT *)(v13 + 23528));
      if ( !gpidLogon || (int)PostWinlogonMessage(1033LL, 0LL) < 0 )
      {
        if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0357098,
            (unsigned __int8 *)dword_1C0320295,
            0LL,
            0LL,
            2u,
            &v16);
        goto LABEL_9;
      }
      if ( !KeWaitForSingleObject(*(PVOID *)(v13 + 23528), Executive, 0, 0, 0LL) && *(_QWORD *)(v13 + 23496) )
      {
LABEL_8:
        v7 = 1;
LABEL_9:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
        return v7;
      }
      if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0357098,
          (unsigned __int8 *)dword_1C0320295,
          0LL,
          0LL,
          2u,
          &v16);
      if ( v12 )
      {
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    return 0;
  }
}
