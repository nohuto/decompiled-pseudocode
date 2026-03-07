__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, __int128 *a2)
{
  __int128 *v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagTHREADINFO *v18; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rax
  char v21; // al
  struct tagKERNELHANDLETABLEENTRY *v22; // rdi
  BOOL v23; // [rsp+34h] [rbp-74h] BYREF
  BOOL v24[6]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  __int128 *v26; // [rsp+58h] [rbp-50h]
  __int128 v27; // [rsp+68h] [rbp-40h] BYREF

  v2 = a2;
  v27 = 0LL;
  v26 = a2;
  if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
  {
    v25 = 1LL;
    v23 = v2 != 0LL;
    v24[0] = a1 != 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v4,
      byte_1C029446E,
      v5,
      (__int64)v24,
      (__int64)&v23,
      (__int64)&v25);
  }
  if ( ShouldRunShared(8) )
  {
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v7, v6, v8, v9);
  }
  else
  {
    LOBYTE(v7) = 1;
    v18 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v7);
    gptiCurrent = v18;
    if ( v18 )
    {
      *((_DWORD *)v18 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        v11 = (struct tagTHREADINFO *)-*(_QWORD *)CurrentProcessWin32Process;
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v20 = v10 & CurrentProcessWin32Process;
        if ( v20 )
        {
          if ( (*(_DWORD *)(v20 + 12) & 0x8000) != 0 )
          {
            v11 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
              || (v21 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
            {
              v21 = 0;
            }
            if ( v21 )
            {
              while ( 1 )
              {
                v22 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                *((_QWORD *)v22 + 2) = 0LL;
                if ( !*(_DWORD *)(*(_QWORD *)v22 + 8LL) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*(_QWORD *)v22);
              }
            }
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (__int128 *)MmUserProbeAddress;
      v27 = *v2;
      v26 = &v27;
    }
    v13 = (int)xxxEnumDisplayMonitors(a1, 0);
    UserSessionSwitchLeaveCrit(v15, v14, v16);
    return v13;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v11, v10, v12);
    return 0LL;
  }
}
