__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  char v2; // bp
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  v2 = 0;
  v3 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) || *(_DWORD *)(a1 + 16) == 3 )
  {
    Pool2 = ExAllocatePool2(256LL, 24LL, 930115152LL);
    v6 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v7 = (_QWORD *)qword_140D54EA8;
      if ( *(PVOID **)qword_140D54EA8 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v6 = &PnpDeferredRegistrationList;
      v6[1] = v7;
      *v7 = v6;
      qword_140D54EA8 = (__int64)v6;
      ExReleaseFastMutex(&PnpDeferredRegistrationLock);
      if ( !BYTE3(NlsMbOemCodePageTag) )
        v2 = 1;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  ExReleaseFastMutex(&PnpNotificationInProgressLock);
  if ( v2 )
  {
    PnpInsertNoopEvent(0LL, 0LL);
    return 0;
  }
  return v3;
}
