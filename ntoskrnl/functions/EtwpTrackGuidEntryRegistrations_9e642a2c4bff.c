__int64 __fastcall EtwpTrackGuidEntryRegistrations(int *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // r13
  _QWORD *i; // rsi
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v13; // rbx
  int v15; // [rsp+20h] [rbp-78h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (__int64 *)(a2 + 408);
  v15 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  if ( EtwpGetEnableInfoIndex(a2, *a1, &v15) )
  {
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( a3 == 2 )
      {
        v9 = KeGetCurrentThread();
        v10 = (__int64)(i - 2);
        --v9->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
        *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v10 = (__int64)i;
      }
      if ( (*(_BYTE *)(v10 + 98) & 1) != 0 )
      {
        EtwpProviderArrivalCallback((__int64)a1, 0, v10);
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v10 + 80) + 1112LL)) )
      {
        v11 = *(_QWORD *)(v10 + 80);
        memset(&v16, 0, sizeof(v16));
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v11);
        v13 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(*(_KPROCESS **)(v10 + 80), 0, (__int64)&v16);
        EtwpProviderArrivalCallback((__int64)a1, 1, v10);
        KiUnstackDetachProcess(&v16);
        PsDetachSiloFromCurrentThread(v13);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v10 + 80) + 1112LL));
      }
      if ( a3 == 2 )
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v10 + 32) + 408LL), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v4, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
