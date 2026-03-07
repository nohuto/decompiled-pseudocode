void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rbp
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140C14130, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14130, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&stru_140C14130, v4, (__int64)&stru_140C14130);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v8 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v8 != a2) )
    __fastfail(3u);
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14130, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14130);
  KeAbPostRelease((ULONG_PTR)&stru_140C14130);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExWaitForRundownProtectionRelease(a2 + 6);
  _InterlockedExchange64((volatile __int64 *)&a2[6], 1LL);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C14148
    || a2 >= (struct _EX_RUNDOWN_REF *)&CmFcFeatureConfigSecurityDescriptor )
  {
    ExFreePoolWithTag(a2, 0);
  }
}
