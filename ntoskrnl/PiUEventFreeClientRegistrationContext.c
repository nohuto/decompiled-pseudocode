/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x14078DA7C
 * Callers:
 *     PiUEventDispatch @ 0x14068DED0 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14068E738 (PiUEventHandleRegistration.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x140413EF0 (ZwDeleteWnfStateName.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14068DE6C (PiUEventDequeuePendingEventWorker.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, __int64 a2)
{
  PFAST_MUTEX *v2; // r14
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  int v6; // ecx
  int v7; // ecx
  char *v8; // rdi
  char *v9; // rdi
  unsigned int *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  v2 = (PFAST_MUTEX *)(P + 16);
  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*v2);
    v4 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = *((_DWORD *)P + 33);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v11 = v7 - 1;
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
    v8 = (char *)*((_QWORD *)P + 14);
    while ( v8 != P + 112 )
    {
      v12 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker((__int64)P, v12, 0);
    }
    v9 = (char *)*((_QWORD *)P + 12);
    while ( v9 != P + 96 )
    {
      v13 = v9;
      v9 = *(char **)v9;
      PiUEventDequeuePendingEventWorker((__int64)P, v13, 1);
    }
    ExReleaseFastMutex(*v2);
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) <= 1 )
  {
    v10 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((__int64)(P + 88), a2);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*v2, 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
