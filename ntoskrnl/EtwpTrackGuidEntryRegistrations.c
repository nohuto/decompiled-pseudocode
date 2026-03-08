/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1409F2804
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x1409F260C (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     EtwpGetEnableInfoIndex @ 0x1402068FC (EtwpGetEnableInfoIndex.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 */

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
