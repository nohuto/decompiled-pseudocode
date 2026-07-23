/*
 * XREFs of DbgkpSendErrorMessage @ 0x1408873C0
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x140732540 (DbgkForwardException.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KeCopyExceptionRecord @ 0x14032CED8 (KeCopyExceptionRecord.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     KeTestAlertThread @ 0x140340540 (KeTestAlertThread.c)
 *     AlpcGetMessageAttribute @ 0x14034A340 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14034A380 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403FABA0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406079D8 (PsTestProtectedProcessIncompatibility.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     DbgkForwardException @ 0x140732540 (DbgkForwardException.c)
 *     DbgkpDeleteErrorPort @ 0x140887098 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1408870C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408878A0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x140887D30 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r15
  __int64 ProcessServerSilo; // rbx
  PVOID *v8; // rsi
  signed int started; // edi
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // eax
  PVOID v13; // r14
  PVOID v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rax
  __int16 v22; // dx
  char v23; // r13
  int v24; // ebx
  _DWORD *MessageAttribute; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rcx
  NTSTATUS v30; // eax
  char v31; // bl
  char v33; // [rsp+40h] [rbp-C0h]
  ULONG_PTR RequiredBufferSize; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v39; // [rsp+68h] [rbp-98h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+80h] [rbp-80h] BYREF

  v38 = a1;
  memset(&Buffer[8], 0, 0x60uLL);
  RequiredBufferSize = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37.QuadPart = 0LL;
  v33 = 0;
  v39 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v8 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968);
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 2172) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 1304), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)MmGetSessionIdEx(Process) != ServerSiloServiceSessionId
    && Buffer[4].AllocatedAttributes != 1
    && (a2 & 2) != 0 )
  {
    v33 = DbgkpSuspendProcess(Process);
  }
  started = DbgkpStartSystemErrorHandler();
  if ( started >= 0 )
  {
    if ( DbgkErrorPortStartTimeout == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v37;
      v37.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v12 = KeWaitForSingleObject(v8[3], Executive, 1, 0, Timeout);
    if ( v12 == 258 || !v8[1] )
    {
      started = -1073740973;
    }
    else if ( v12 == 257 || v12 == 192 )
    {
      started = -1073741749;
    }
    else
    {
      Object = 0LL;
      --CurrentThread->KernelApcDisable;
      started = 0;
      v13 = 0LL;
      ExAcquirePushLockSharedEx((ULONG_PTR)v8, 0LL);
      v14 = v8[2];
      if ( (PVOID)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v13 = v8[1];
        if ( v13 )
        {
          Object = v8[2];
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v13);
        }
        else
        {
          started = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( started >= 0 )
      {
        v15 = v38;
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
        v16 = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        v17 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        *(_DWORD *)(a3 + 264) = 0;
        *(_OWORD *)(a3 + 200) = v16;
        v18 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 216) = v17;
        v19 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 232) = v18;
        *(_OWORD *)(a3 + 248) = v19;
        if ( (*(_BYTE *)(Process + 2170) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v20 = 1LL;
        }
        else
        {
          v20 = 0LL;
        }
        if ( (*(_BYTE *)(Process + 992) & 1) != 0 )
        {
          v20 = (unsigned int)v20 | 8;
          *(_DWORD *)(a3 + 264) = v20;
        }
        v21 = *(_QWORD *)(Process + 1408);
        if ( v21 )
        {
          v22 = *(_WORD *)(v21 + 8);
          if ( v22 == 332 || v22 == 452 )
          {
            v20 = (unsigned int)v20 | 2;
            *(_DWORD *)(a3 + 264) = v20;
          }
        }
        if ( (a2 & 1) != 0 )
        {
          v20 = (unsigned int)v20 | 4;
          v23 = 1;
          *(_DWORD *)(a3 + 264) = v20;
        }
        else
        {
          v23 = 0;
        }
        LOBYTE(v20) = 1;
        v24 = PsTestProtectedProcessIncompatibility(v20, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        *MessageAttribute = 0;
        MessageAttribute[5] = v24;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0, v26, v27, v28);
        v29 = (__int64)v39;
        if ( (*(_DWORD *)(&v39[1].SwapListEntry + 1) & 1) != 0 )
          started = -1073741749;
        if ( started >= 0 )
        {
          v30 = ZwAlpcSendWaitReceivePort(
                  *((HANDLE *)v13 + 1),
                  0x220000u,
                  (PPORT_MESSAGE)a3,
                  Buffer,
                  (PPORT_MESSAGE)a3,
                  &RequiredBufferSize,
                  0LL,
                  0LL);
          started = v30;
          if ( v30 >= 0 )
          {
            if ( v30 == 257 )
            {
              started = -1073741749;
            }
            else
            {
              if ( (*(_WORD *)(a3 + 4) & 0x2000) != 0 )
                ZwAlpcSendWaitReceivePort(*((HANDLE *)v13 + 1), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
              started = *(_DWORD *)(a3 + 44);
              if ( started >= 0 && !v23 && started == 65538 )
              {
                v31 = v33;
                if ( v33 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v31 = 0;
                }
                started = !DbgkForwardException(v38, 1, 1) ? 0xC0000144 : 0;
                goto LABEL_53;
              }
            }
LABEL_52:
            v31 = v33;
LABEL_53:
            ObfDereferenceObjectWithTag(Object, 0x50676244u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
              DbgkpDeleteErrorPort((HANDLE *)v13);
            goto LABEL_58;
          }
          v29 = (__int64)v39;
        }
        if ( started == -1073741769 )
          DbgkpRemoveErrorPort(v29, (ULONG_PTR)v8, (volatile signed __int32 *)v13);
        goto LABEL_52;
      }
    }
  }
  v31 = v33;
LABEL_58:
  if ( v31 )
  {
    PsThawProcess(Process, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)started;
}
