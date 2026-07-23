/*
 * XREFs of PsCallEnclave @ 0x14090D330
 * Callers:
 *     NtCallEnclave @ 0x140408860 (NtCallEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ZwTerminateProcess @ 0x1403FAB00 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x140581560 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x140593450 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x1405935B8 (RtlPrepareEnclaveCall.c)
 *     VslCallEnclave @ 0x14088ED54 (VslCallEnclave.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA798 (MiHotPatchImageTreeCompare.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3DD4 (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x14090E000 (PsDereferenceVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14090E570 (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x14090E604 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x14090E660 (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x14090E710 (PspSelectVsmEnclaveByNumber.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  unsigned __int64 v9; // r13
  char *v10; // r14
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  PVOID v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // r14
  bool v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // [rsp+50h] [rbp-A8h] BYREF
  char v50; // [rsp+51h] [rbp-A7h]
  PVOID v51; // [rsp+58h] [rbp-A0h] BYREF
  int v52; // [rsp+60h] [rbp-98h] BYREF
  __int64 v53; // [rsp+68h] [rbp-90h] BYREF
  int v54; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  __int64 v56; // [rsp+80h] [rbp-78h] BYREF
  __int64 v57; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 *v58; // [rsp+90h] [rbp-68h]
  __int64 v59; // [rsp+98h] [rbp-60h]
  __int64 v60; // [rsp+A0h] [rbp-58h]
  _QWORD v61[10]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+100h] [rbp+8h] BYREF
  __int64 v63; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v65; // [rsp+118h] [rbp+20h]

  v65 = a4;
  ExitStatus = a3;
  v63 = a2;
  v62 = a1;
  v53 = 0LL;
  v51 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v49 = 0;
  v61[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v61[1] = CurrentThread;
  v60 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v62 )
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
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v53 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v51);
    v9 = v62;
  }
  else
  {
    v9 = v62;
    result = MmSelectVsmEnclaveByAddress(Process, v62, &v51);
  }
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v51;
  if ( !*((_DWORD *)v51 + 10) )
  {
    EnclaveReturnFrame = -1073741816;
    goto LABEL_91;
  }
  if ( *((_BYTE *)v51 + 76) )
  {
    --CurrentThread->KernelApcDisable;
    v15 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v58 = (unsigned __int64 *)(v10 + 104);
    v16 = *((_QWORD *)v10 + 13);
    while ( v16 )
    {
      v28 = MiHotPatchImageTreeCompare(v9, v16);
      if ( v28 >= 0 )
      {
        if ( v28 <= 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v16 = *(_QWORD *)v16;
      }
    }
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v29, v30, v31);
    if ( !v16 )
    {
      EnclaveReturnFrame = -1073741800;
      goto LABEL_90;
    }
    v59 = v16;
    goto LABEL_61;
  }
  BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
  v60 = BaseTrapFrame;
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlPrepareEnclaveCall(
                         BaseTrapFrame,
                         (__int64)a4,
                         v13,
                         v14,
                         (CurrentThread->MiscFlags & 0x100000) != 0,
                         &v57,
                         &v56);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( EnclaveReturnFrame < 0 )
    goto LABEL_91;
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v58 = (unsigned __int64 *)(v10 + 104);
  v16 = *((_QWORD *)v10 + 13);
  while ( v16 )
  {
    v17 = MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, v16);
    if ( v17 >= 0 )
    {
      if ( v17 <= 0 )
        break;
      v16 = *(_QWORD *)(v16 + 8);
    }
    else
    {
      v16 = *(_QWORD *)v16;
    }
  }
  if ( !v16 )
  {
    v18 = 0LL;
    P = 0LL;
    if ( v63 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v19 = *((_DWORD *)v10 + 18);
      if ( v19 )
      {
        *((_DWORD *)v10 + 18) = v19 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v18 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v18 )
      {
LABEL_45:
        v16 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v16;
        *(_QWORD *)(v16 + 24) = CurrentThread;
        *(_QWORD *)(v16 + 32) = 0LL;
        goto LABEL_46;
      }
    }
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21, v22);
    if ( EnclaveReturnFrame < 0 )
    {
LABEL_90:
      v10 = (char *)v51;
      goto LABEL_91;
    }
    v23 = P;
    v24 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v61 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v51;
    if ( v24 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v51, v23, v24);
    else
      EnclaveReturnFrame = v23[10];
    ExFreePoolWithTag(v23, 0);
    if ( EnclaveReturnFrame )
    {
      if ( (unsigned int)(EnclaveReturnFrame - 257) > 1
        && EnclaveReturnFrame != -1073740526
        && EnclaveReturnFrame != 192 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_91;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
    goto LABEL_45;
  }
LABEL_46:
  v59 = v16;
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v25, v26, v27);
  if ( *(_DWORD *)(v16 + 36) == -1 )
  {
    EnclaveReturnFrame = -1073741670;
    goto LABEL_90;
  }
LABEL_61:
  --CurrentThread->SpecialApcDisable;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  v52 = *(_DWORD *)(v16 + 32);
  v10 = (char *)v51;
  EnclaveReturnFrame = VslCallEnclave((__int64)v51, &v52, &v62, ExitStatus, &v53, &v57, &v56, &ExitStatus, &v49);
  v54 = EnclaveReturnFrame;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v49 )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( EnclaveReturnFrame < 0 )
  {
    if ( !v63 )
      goto LABEL_85;
    v62 = 0LL;
  }
  v34 = v62;
  if ( !v62 )
  {
    *v65 = v53;
    if ( v63 )
    {
      if ( (*(_DWORD *)(v16 + 36))-- == 1 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v16);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 112);
        KeAbPostRelease((ULONG_PTR)(v10 + 112));
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v43, v44, v45);
        v10 = (char *)v51;
      }
    }
    goto LABEL_85;
  }
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                         v60,
                         v32,
                         v33,
                         *((_QWORD *)v10 + 1),
                         v34,
                         ExitStatus,
                         v57,
                         v56,
                         v53,
                         (CurrentThread->MiscFlags & 0x100000) != 0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v63 )
    goto LABEL_85;
  v35 = *(_DWORD *)(v16 + 36);
  if ( v35 )
    goto LABEL_79;
  *(_DWORD *)(v16 + 32) = v52;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
  v36 = (_QWORD *)*v58;
  v37 = 0;
  v50 = 0;
  if ( !v36 )
    goto LABEL_76;
  while ( (int)MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, (__int64)v36) >= 0 )
  {
    v38 = (_QWORD *)v36[1];
    if ( !v38 )
    {
      v37 = 1;
      v50 = 1;
      goto LABEL_76;
    }
LABEL_74:
    v36 = v38;
  }
  v38 = (_QWORD *)*v36;
  if ( *v36 )
    goto LABEL_74;
  v37 = 0;
  v50 = 0;
LABEL_76:
  RtlAvlInsertNodeEx(v58, (unsigned __int64)v36, v37, (_QWORD *)v16);
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v39, v40, v41);
  v35 = *(_DWORD *)(v16 + 36);
  v10 = (char *)v51;
LABEL_79:
  *(_DWORD *)(v16 + 36) = v35 + 1;
LABEL_85:
  if ( !v10[76] && !*(_DWORD *)(v16 + 36) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v16 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v16;
    PspReleaseEnclaveThread(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v46, v47, v48);
    goto LABEL_90;
  }
LABEL_91:
  PsDereferenceVsmEnclave(v10);
  return (unsigned int)EnclaveReturnFrame;
}
