NTSTATUS __fastcall TlgUnregisterAggregateProvider(__int64 a1)
{
  void *v2; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 *v5; // rax
  REGHANDLE v6; // rcx
  REGHANDLE v7; // rcx
  REGHANDLE v9; // rcx

  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v2 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C02D4EA0, 0LL);
    v3 = qword_1C02D4EA8;
    v4 = &qword_1C02D4EA8;
    while ( v3 )
    {
      v5 = (__int64 *)(v3 + 352);
      if ( *(_QWORD *)(v3 + 344) == a1 )
      {
        v2 = (void *)v3;
        *v4 = *v5;
        LookUpTableFlushComplete(v3);
        if ( !qword_1C02D4EA8 )
        {
          v6 = qword_1C02C9768;
          qword_1C02C9768 = 0LL;
          dword_1C02C9748 = 0;
          EtwUnregister(v6);
        }
        break;
      }
      v3 = *v5;
      v4 = v5;
    }
    ExReleasePushLockExclusiveEx(&unk_1C02D4EA0, 0LL);
    if ( v2 )
      CancelTimerCallbacksAndDeleteTimer(v2);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v7);
    *(_QWORD *)(a1 + 40) = 0LL;
    return DestroyAggregateSession(v2);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    return EtwUnregister(v9);
  }
}
