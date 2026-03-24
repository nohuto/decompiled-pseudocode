/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x14094131C
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x140940E90 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x14068DF0C (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *i; // rsi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v15; // rbx
  _DWORD *v16; // r9
  _OWORD v18[3]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 408;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  v8 = a2 + 128;
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v9 = 0;
  while ( !*(_DWORD *)v8 || *(unsigned __int16 *)(v8 + 6) != *a1 )
  {
    ++v9;
    v8 += 32LL;
    if ( v9 >= 8 )
      goto LABEL_18;
  }
  for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
  {
    if ( a3 == 2 )
    {
      v11 = KeGetCurrentThread();
      v12 = (__int64)(i - 2);
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
      *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
    }
    else
    {
      v12 = (__int64)i;
    }
    if ( (*(_BYTE *)(v12 + 98) & 1) != 0 )
    {
      EtwpProviderArrivalCallback((__int64)a1, 0, v12);
    }
    else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 1112LL)) )
    {
      v13 = *(_QWORD *)(v12 + 80);
      memset(v18, 0, sizeof(v18));
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v13);
      v15 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v12 + 80), 0LL, (__int64)v18, v16);
      EtwpProviderArrivalCallback((__int64)a1, 1, v12);
      KiUnstackDetachProcess((__int64)v18, 0);
      PsDetachSiloFromCurrentThread(v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 1112LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v12 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
