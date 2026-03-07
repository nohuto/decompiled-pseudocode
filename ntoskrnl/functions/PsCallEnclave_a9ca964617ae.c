__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 Process; // rcx
  char *v10; // r14
  int EnclaveReturnFrame; // r13d
  unsigned __int64 *BaseTrapFrame; // rax
  bool v13; // zf
  volatile signed __int64 *v14; // r12
  unsigned __int64 v15; // rsi
  int v16; // eax
  PVOID v17; // rcx
  _DWORD *v18; // rsi
  unsigned int v19; // eax
  int v20; // eax
  int VsmEnclaveThread; // eax
  __int64 v22; // rcx
  volatile signed __int64 *v23; // r12
  _QWORD *v24; // r14
  bool v25; // r8
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v28; // [rsp+58h] [rbp-A0h] BYREF
  int v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 *v31; // [rsp+70h] [rbp-88h]
  int v32; // [rsp+78h] [rbp-80h]
  PVOID P; // [rsp+80h] [rbp-78h] BYREF
  __int64 v34; // [rsp+88h] [rbp-70h] BYREF
  __int64 v35; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-60h]
  _QWORD v37[2]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE *v38; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+100h] [rbp+8h] BYREF
  __int64 v40; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v42; // [rsp+118h] [rbp+20h]

  v42 = a4;
  ExitStatus = a3;
  v40 = a2;
  v39 = a1;
  v5 = a2;
  v30 = 0LL;
  v28 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v27[0] = 0;
  v37[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37[1] = CurrentThread;
  v31 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v39 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v8 = (__int64)a4;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  v30 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, (__int64 *)&v28);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v39, &v28);
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v28;
  if ( !*((_DWORD *)v28 + 10) )
  {
    EnclaveReturnFrame = -1073741816;
    goto LABEL_102;
  }
  v38 = (char *)v28 + 76;
  if ( *((_BYTE *)v28 + 76) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v15 = *((_QWORD *)v10 + 13);
    while ( v15 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(v39, v15);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v15 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v15 = *(_QWORD *)v15;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v15 )
    {
      EnclaveReturnFrame = -1073741800;
      goto LABEL_101;
    }
    v36 = v15;
    goto LABEL_66;
  }
  BaseTrapFrame = (unsigned __int64 *)PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
  v31 = BaseTrapFrame;
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlPrepareEnclaveCall(
                         (__int64)BaseTrapFrame,
                         (__int64)a4,
                         qword_140D1F398,
                         qword_140D1F3A8,
                         (CurrentThread->MiscFlags & 0x100000) != 0,
                         &v35,
                         &v34);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( EnclaveReturnFrame < 0 )
    goto LABEL_102;
  --CurrentThread->KernelApcDisable;
  v14 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v15 = *((_QWORD *)v10 + 13);
  while ( v15 )
  {
    v16 = PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, v15);
    if ( v16 >= 0 )
    {
      if ( v16 <= 0 )
        break;
      v15 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v15;
    }
  }
  if ( !v15 )
  {
    v17 = 0LL;
    P = 0LL;
    if ( v40 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v20 = *((_DWORD *)v10 + 18);
      if ( v20 )
      {
        *((_DWORD *)v10 + 18) = v20 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v17 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v17 )
      {
LABEL_49:
        v15 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v15;
        *(_QWORD *)(v15 + 24) = CurrentThread;
        *(_QWORD *)(v15 + 32) = 0LL;
        goto LABEL_50;
      }
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
    {
LABEL_101:
      v10 = (char *)v28;
      goto LABEL_102;
    }
    v18 = P;
    v19 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v37 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v28;
    if ( v19 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v28, v18, v19);
    else
      EnclaveReturnFrame = v18[10];
    ExFreePoolWithTag(v18, 0);
    if ( EnclaveReturnFrame )
    {
      if ( EnclaveReturnFrame != 192
        && EnclaveReturnFrame != -1073740526
        && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_102;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
    goto LABEL_49;
  }
LABEL_50:
  v36 = v15;
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( *(_DWORD *)(v15 + 36) == -1 )
  {
    EnclaveReturnFrame = -1073741670;
    goto LABEL_101;
  }
  v5 = v40;
LABEL_66:
  --CurrentThread->SpecialApcDisable;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  v29 = *(_DWORD *)(v15 + 32);
  v10 = (char *)v28;
  EnclaveReturnFrame = VslCallEnclave((__int64)v28, &v29, &v39, ExitStatus, &v30, &v35, &v34, &ExitStatus, v27);
  v32 = EnclaveReturnFrame;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v27[0] )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( EnclaveReturnFrame < 0 )
  {
    if ( !v5 )
      goto LABEL_96;
    v39 = 0LL;
  }
  v22 = v39;
  if ( !v39 )
  {
    *v42 = v30;
    if ( v40 )
    {
      v13 = (*(_DWORD *)(v15 + 36))-- == 1;
      if ( v13 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v15);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
        KeAbPostRelease((ULONG_PTR)(v10 + 112));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v10 = (char *)v28;
      }
    }
    goto LABEL_96;
  }
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                         (__int64)v31,
                         qword_140D1F3A0,
                         qword_140D1F3A8,
                         *((_QWORD *)v10 + 1),
                         v22,
                         ExitStatus,
                         v35,
                         v34,
                         v30,
                         (CurrentThread->MiscFlags & 0x100000) != 0);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
    goto LABEL_96;
  if ( *(_DWORD *)(v15 + 36) )
    goto LABEL_90;
  *(_DWORD *)(v15 + 32) = v29;
  --CurrentThread->KernelApcDisable;
  v23 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v31 = (unsigned __int64 *)(v10 + 104);
  v24 = (_QWORD *)*((_QWORD *)v10 + 13);
  v25 = 0;
  if ( !v24 )
    goto LABEL_87;
  while ( (int)PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, (__int64)v24) >= 0 )
  {
    v26 = (_QWORD *)v24[1];
    if ( !v26 )
    {
      v25 = 1;
      goto LABEL_87;
    }
LABEL_85:
    v24 = v26;
  }
  v26 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_85;
  v25 = 0;
LABEL_87:
  RtlAvlInsertNodeEx(v31, (unsigned __int64)v24, v25, v15);
  if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v23);
  KeAbPostRelease((ULONG_PTR)v23);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v10 = (char *)v28;
LABEL_90:
  ++*(_DWORD *)(v15 + 36);
LABEL_96:
  if ( !*v38 && !*(_DWORD *)(v15 + 36) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v15 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v15;
    PspReleaseEnclaveThread(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_101;
  }
LABEL_102:
  PsDereferenceVsmEnclave(v10);
  return (unsigned int)EnclaveReturnFrame;
}
