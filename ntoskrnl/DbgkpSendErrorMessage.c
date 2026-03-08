/*
 * XREFs of DbgkpSendErrorMessage @ 0x14093730C
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     AlpcGetMessageAttribute @ 0x1402BBFE0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1402BC020 (AlpcInitializeMessageAttribute.c)
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KeTestAlertThread @ 0x1403646F0 (KeTestAlertThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140413490 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140576430 (KeCopyExceptionRecord.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14070C774 (PsTestProtectedProcessIncompatibility.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     DbgkpSuspendProcess @ 0x1409365B4 (DbgkpSuspendProcess.c)
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 *     DbgkpDeleteErrorPort @ 0x140936FD4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140937000 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409377EC (DbgkpStartSystemErrorHandler.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, int a2, __int64 a3)
{
  char v3; // r12
  PVOID v5; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r14
  __int64 ProcessServerSilo; // rbx
  PVOID *v9; // rsi
  signed int started; // ebx
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int16 v20; // ax
  char v21; // r12
  int v22; // ebx
  char *MessageAttribute; // rax
  char v24; // si
  int v25; // eax
  char v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  _OWORD v33[10]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a2;
  v30 = a2;
  v32 = a1;
  memset(&v33[4], 0, 0x60uLL);
  v5 = 0LL;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31.QuadPart = 0LL;
  v27 = 0;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v9 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968);
  memset(v33, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 2172) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 1304), 1, (__int64)v33);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)MmGetSessionIdEx(Process) != ServerSiloServiceSessionId && LODWORD(v33[2]) != 1 && (v3 & 2) != 0 )
    v27 = DbgkpSuspendProcess(Process);
  started = DbgkpStartSystemErrorHandler();
  if ( started >= 0 )
  {
    if ( DbgkErrorPortStartTimeout == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v31;
      v31.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v13 = KeWaitForSingleObject(v9[3], Executive, 1, 0, Timeout);
    if ( v13 == 258 || !v9[1] )
    {
      started = -1073740973;
    }
    else if ( v13 == 257 || v13 == 192 )
    {
      started = -1073741749;
    }
    else
    {
      Object = 0LL;
      started = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
      v14 = v9[2];
      if ( (PVOID)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v5 = v9[1];
        if ( v5 )
        {
          Object = v9[2];
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v5);
          v3 = v30;
        }
        else
        {
          started = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( started >= 0 )
      {
        v15 = v32;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        KeCopyExceptionRecord((_OWORD *)(a3 + 48), v15);
        v16 = v33[1];
        *(_OWORD *)(a3 + 200) = v33[0];
        *(_DWORD *)(a3 + 264) = 0;
        v17 = v33[2];
        *(_OWORD *)(a3 + 216) = v16;
        v18 = v33[3];
        *(_OWORD *)(a3 + 232) = v17;
        *(_OWORD *)(a3 + 248) = v18;
        if ( (*(_BYTE *)(Process + 2170) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v19 = 1LL;
        }
        else
        {
          v19 = 0LL;
        }
        if ( (*(_BYTE *)(Process + 992) & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 8;
          *(_DWORD *)(a3 + 264) = v19;
        }
        if ( *(_QWORD *)(Process + 1408) )
        {
          v20 = *(_WORD *)(Process + 2412);
          if ( v20 == 332 || v20 == 452 )
          {
            v19 = (unsigned int)v19 | 2;
            *(_DWORD *)(a3 + 264) = v19;
          }
        }
        if ( (v3 & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 4;
          v21 = 1;
          *(_DWORD *)(a3 + 264) = v19;
        }
        else
        {
          v21 = 0;
        }
        LOBYTE(v19) = 1;
        v22 = PsTestProtectedProcessIncompatibility(v19, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000LL, v33, 0xA0uLL, &v28);
        DWORD1(v33[0]) = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(v33, 0x10000000);
        *((_DWORD *)MessageAttribute + 5) = v22;
        *(_DWORD *)MessageAttribute = 0;
        *((_DWORD *)MessageAttribute + 4) = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        v28 = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          goto LABEL_36;
        v25 = ZwAlpcSendWaitReceivePort(*((_QWORD *)v5 + 1), 2228224LL);
        started = v25;
        if ( v25 < 0 )
        {
          if ( v25 == -1073741769 )
            DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v9, (volatile signed __int32 *)v5);
          goto LABEL_37;
        }
        if ( v25 == 257 )
        {
LABEL_36:
          started = -1073741749;
        }
        else
        {
          if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
            ZwAlpcSendWaitReceivePort(*((_QWORD *)v5 + 1), 0x10000LL);
          started = *(_DWORD *)(a3 + 44);
          if ( started >= 0 && !v21 && started == 65538 )
          {
            v24 = v27;
            if ( v27 )
            {
              PsThawMultiProcess(Process, 0LL, 1u);
              KeLeaveCriticalRegion();
              v24 = 0;
            }
            started = !DbgkForwardException(v32, 1, 1) ? 0xC0000144 : 0;
            goto LABEL_38;
          }
        }
LABEL_37:
        v24 = v27;
LABEL_38:
        ObfDereferenceObjectWithTag(Object, 0x50676244u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((HANDLE *)v5);
        goto LABEL_55;
      }
    }
  }
  v24 = v27;
LABEL_55:
  if ( v24 )
  {
    PsThawMultiProcess(Process, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)started;
}
