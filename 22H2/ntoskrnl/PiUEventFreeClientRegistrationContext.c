/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x140714E48
 * Callers:
 *     PiUEventDispatch @ 0x140715460 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x140715950 (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x1403FB540 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140413800 (memset.c)
 *     PiDmObjectRelease @ 0x1406AFBD0 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14071A334 (PiUEventDequeuePendingEventWorker.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, char a2)
{
  __int64 v3; // r8
  PFAST_MUTEX v4; // rcx
  PVOID *v5; // rax
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  unsigned int *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
    v4 = *(PFAST_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)P + 33);
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v12 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker(P, v12, 0LL);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v13 = v8;
      LOBYTE(v3) = 1;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker(P, v13, v3);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v10 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
