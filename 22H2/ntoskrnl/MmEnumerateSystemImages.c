/*
 * XREFs of MmEnumerateSystemImages @ 0x140828110
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140827FC8 (EtwpSysModuleRunDown.c)
 *     VslVerifySessionSpace @ 0x140943600 (VslVerifySessionSpace.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x14099A668 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     EtwpCoverageSamplerStart @ 0x1409F3488 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x140A0685C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A07104 (ExpCovResetInformation.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB88 (MiSessionLookupImage.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     MmIsSessionAddress @ 0x1402BC7B0 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x140355CB0 (MmDetachSession.c)
 *     MmAttachSession @ 0x140355D50 (MmAttachSession.c)
 *     MmGetNextSession @ 0x14035E6A0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // r14d
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // rbp
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  _KPROCESS *v10; // rbx
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  $115DCDF994C6370D29323EAB0E0C9502 v14; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(&v14, 0, sizeof(v14));
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].Affinity.StaticBitmap[25];
  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v10 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)&v14) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, &v14);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, &v14);
      ObfDereferenceObject(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
