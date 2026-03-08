/*
 * XREFs of PfProcessExitNotification @ 0x1407E6B80
 * Callers:
 *     PspExitProcess @ 0x1407E7B3C (PspExitProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PfpLogApplicationEvent @ 0x14035B9B8 (PfpLogApplicationEvent.c)
 *     PfSnEndProcessTrace @ 0x140796460 (PfSnEndProcessTrace.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097C66C (PfSnAltProfileTreeCompareByProcess.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

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
