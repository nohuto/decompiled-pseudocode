void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = KeAbPreAcquire((__int64)&qword_140CF81C0, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CF81C0, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140CF81C0, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 18) = 1;
      for ( i = qword_140D173B0; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF81C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140CF81C0);
      KeAbPostRelease((ULONG_PTR)&qword_140CF81C0);
    }
  }
}
