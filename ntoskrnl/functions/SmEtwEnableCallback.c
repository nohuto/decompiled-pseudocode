void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx
  unsigned int j; // edi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned int k; // edi
  struct _EX_RUNDOWN_REF *v10; // rax
  unsigned __int64 v11; // rax

  if ( ControlCode <= 1 && (dword_140C6AFAC = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C6AF98, 0LL);
    for ( i = (__int64 *)qword_140C6AF88; i != &qword_140C6AF88; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v7 = SmKmStoreReferenceEx((__int64)(i - 245), j);
        v8 = v7;
        if ( v7 )
        {
          SmKmEtwLogStoreStats(&qword_140C6AFA0, v7);
          SmKmEtwLogStoreChange(&qword_140C6AFA0, v8, SmEventStoreRundown);
          v10 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)(i - 245), j & 0x3FF);
          ExReleaseRundownProtection_0(v10 + 1);
        }
      }
      if ( SmEtwEnabled(3) )
      {
        for ( k = 0; k < 0x400; ++k )
        {
          v11 = SmKmStoreReferenceEx((__int64)(i - 245), k);
          if ( v11 )
            SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)(i - 245), v11);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6AF98, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6AF98);
    KeAbPostRelease((ULONG_PTR)&qword_140C6AF98);
    KeLeaveCriticalRegion();
  }
}
