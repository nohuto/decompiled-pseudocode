/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x14060EA3C
 * Callers:
 *     NtUpdateWnfStateData @ 0x14060EA00 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoostUpdate @ 0x1406A1FC4 (PfSnPowerBoostUpdate.c)
 *     ExWnfCrossVmCallback @ 0x140955CF0 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x14060DE94 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F748 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F7A4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FD88 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14060FE80 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfWriteStateData @ 0x140610910 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406F63DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1406F6488 (ExpWnfLookupPermanentName.c)
 *     ExpCrossVmWnfPush @ 0x14095C6B0 (ExpCrossVmWnfPush.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtUpdateWnfStateData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  __int64 v10; // r14
  int v11; // esi
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  int v16; // ecx
  struct _KTHREAD *v17; // rbx
  struct _KPROCESS *Process; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r13
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // r8
  PVOID v25; // r15
  struct _EX_RUNDOWN_REF *v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 Count; // rcx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // [rsp+38h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v33; // [rsp+40h] [rbp-D8h] BYREF
  int v34; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-C8h] BYREF
  PVOID P; // [rsp+58h] [rbp-C0h] BYREF
  int v37; // [rsp+60h] [rbp-B8h]
  PSID Sid; // [rsp+68h] [rbp-B0h] BYREF
  __int128 *v39; // [rsp+70h] [rbp-A8h]
  int v40[2]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+80h] [rbp-98h]
  struct _KPROCESS *v42; // [rsp+88h] [rbp-90h]
  __int128 v43; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-58h] BYREF

  v41 = a2;
  v35 = 0LL;
  v46 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v40 = 0LL;
  v33 = 0LL;
  LODWORD(v10) = 0;
  v43 = 0LL;
  v39 = a4;
  v11 = ExpCaptureWnfStateName(a1, &v35);
  if ( v11 < 0 )
    goto LABEL_26;
  v37 = (v35 >> 4) & 3;
  v10 = (v35 >> 6) & 0xF;
  v31 = (v35 >> 6) & 0xF;
  if ( PreviousMode )
  {
    if ( (_DWORD)v14 && (v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v13 )
    {
      if ( v13 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v46 = *(_OWORD *)v13;
      v39 = &v46;
    }
  }
  LOBYTE(v12) = PreviousMode;
  v11 = ExpWnfCaptureScopeInstanceId((v35 >> 6) & 0xF, a5, v12, &Sid, &v43);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( PreviousMode )
  {
    v34 = 0;
    if ( a5 )
    {
      v11 = ExpWnfCheckCrossScopeAccess(v35);
      if ( v11 < 0 )
        goto LABEL_26;
    }
  }
  else
  {
    v34 = 1;
  }
  if ( PreviousMode )
  {
    v17 = KeGetCurrentThread();
    Process = v17->ApcState.Process;
    v42 = Process;
    LODWORD(v10) = v31;
    if ( v31 == 3 && (!Sid || Process == *(struct _KPROCESS **)Sid) )
      goto LABEL_44;
  }
  else
  {
    LODWORD(v17) = 0;
    LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
    v42 = PsInitialSystemProcess;
  }
  if ( (_DWORD)v10 == 5 && a8 )
  {
    if ( a7 )
    {
LABEL_44:
      v11 = -1073741811;
      goto LABEL_26;
    }
    v44 = v35 ^ 0x41C64E6DA3BC0074LL;
    v11 = ExpCrossVmWnfPush(v16, 1, (unsigned int)&v44, -1, v41, a3);
    if ( v11 != -1073741822 )
      goto LABEL_26;
  }
  v11 = ExpWnfResolveScopeInstance((int)v40, (int)Process, (int)v17, v10, Sid);
  if ( v11 < 0 )
    goto LABEL_26;
  v19 = v35;
  v20 = *(_QWORD *)v40;
  v21 = ExpWnfLookupNameInstance(*(_QWORD *)v40, v35, &v33);
  v11 = v21;
  if ( v21 != -1073741772 || v37 == 3 )
  {
    if ( v21 < 0 )
      goto LABEL_26;
    v22 = a3;
    v11 = ExpWnfValidatePubSubPreconditions(2u, v34);
    if ( v11 < 0 )
      goto LABEL_26;
  }
  else
  {
    v11 = ExpWnfLookupPermanentName(v19, &P);
    if ( v11 < 0 )
      goto LABEL_26;
    v25 = P;
    v11 = ExpWnfValidatePubSubPreconditions(2u, v34);
    if ( v11 < 0 )
      goto LABEL_26;
    v11 = ExpWnfCreateNameInstance(v20, v19, (__int64)v25, v42, &v33);
    ExFreePoolWithTag(v25, 0x20666E57u);
    P = 0LL;
    if ( v11 < 0 )
      goto LABEL_26;
    v22 = a3;
  }
  v11 = ExpWnfWriteStateData(v33, v41, v22, a6, a7);
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v10 == 5 )
    {
      v45 = v35 ^ 0x41C64E6DA3BC0074LL;
      v26 = v33 + 10;
      v27 = KeAbPreAcquire((ULONG_PTR)&v33[10], 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&v26->Count, v27, (ULONG_PTR)v26);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      Count = 0LL;
      if ( v33[11].Count != 1 )
        Count = v33[11].Count;
      if ( Count )
      {
        v29 = Count + 16;
        v30 = *(_DWORD *)(Count + 8);
      }
      else
      {
        v29 = 0LL;
        v30 = 0;
      }
      ExpCrossVmWnfPush(v30, 0, (unsigned int)&v45, v33[12].Count, v29, v30);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v26);
      KeAbPostRelease((ULONG_PTR)v26);
      LODWORD(v10) = v31;
    }
    ExpWnfNotifyNameSubscribers(v33, 1LL, 1LL, PreviousMode != 0);
    v11 = 0;
  }
LABEL_26:
  if ( v33 )
    ExReleaseRundownProtection(v33 + 1);
  if ( *(_QWORD *)v40 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v40 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v23) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v10, &v43, v23);
  return (unsigned int)v11;
}
