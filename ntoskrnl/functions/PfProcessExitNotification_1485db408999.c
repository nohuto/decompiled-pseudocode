void __fastcall PfProcessExitNotification(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rdi
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rax
  void *v7; // rcx

  PfpLogApplicationEvent(a1, 0LL, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6A3B8, 0LL);
  v3 = (unsigned __int64)qword_140C6A398;
  if ( (xmmword_140C6A3A0 & 1) != 0 && qword_140C6A398 )
    v3 = (unsigned __int64)&qword_140C6A398 ^ (unsigned __int64)qword_140C6A398;
  v4 = xmmword_140C6A3A0 & 1;
  while ( v3 )
  {
    v5 = PfSnAltProfileTreeCompareByProcess(a1, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  if ( v3 )
  {
    RtlRbRemoveNode((unsigned __int64 *)&qword_140C6A398, v3);
    RtlRbRemoveNode((unsigned __int64 *)&xmmword_140C6A3A0 + 1, v3 + 24);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6A3B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6A3B8);
  KeAbPostRelease((ULONG_PTR)&qword_140C6A3B8);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v7 = *(void **)(v3 + 48);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x73576650u);
    ExFreePoolWithTag((PVOID)v3, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2, 0LL);
}
