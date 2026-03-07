__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // r14d
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // rbp
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  struct _KPROCESS *v10; // rbx
  struct _KPROCESS *i; // rcx
  struct _KPROCESS *NextSession; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
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
        NextSession = (struct _KPROCESS *)MmGetNextSession(i);
        v10 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, &ApcState) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
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
