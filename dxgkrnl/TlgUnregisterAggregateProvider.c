void __fastcall TlgUnregisterAggregateProvider(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 *v5; // rax
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  REGHANDLE v12; // rcx

  if ( *(void (__fastcall **)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v2 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C013C060, 0LL);
    v3 = qword_1C013CC80;
    v4 = &qword_1C013CC80;
    while ( v3 )
    {
      v5 = (__int64 *)(v3 + 352);
      if ( *(_QWORD *)(v3 + 344) == a1 )
      {
        v2 = (_QWORD *)v3;
        *v4 = *v5;
        LookUpTableFlushComplete(v3);
        if ( !qword_1C013CC80 )
        {
          v6 = qword_1C013AA68;
          qword_1C013AA68 = 0LL;
          dword_1C013AA48 = 0;
          EtwUnregister(v6);
        }
        break;
      }
      v3 = *v5;
      v4 = v5;
    }
    ExReleasePushLockExclusiveEx(&unk_1C013C060, 0LL);
    if ( v2 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v2, v7, v8);
    v9 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v9);
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v2, v10, v11);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v12);
  }
}
