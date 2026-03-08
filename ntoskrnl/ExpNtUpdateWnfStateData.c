/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x14071943C
 * Callers:
 *     NtUpdateWnfStateData @ 0x140719400 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoostUpdate @ 0x140797E78 (PfSnPowerBoostUpdate.c)
 *     ExWnfCrossVmCallback @ 0x1409FD720 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x140718994 (ExpWnfCreateNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x14071A22C (ExpCaptureWnfStateName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14071A2DC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x14071A330 (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071A42C (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14071A954 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfWriteStateData @ 0x14071B1B0 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     ExpCrossVmWnfPush @ 0x140753680 (ExpCrossVmWnfPush.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1407947E0 (ExpWnfCheckCrossScopeAccess.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtUpdateWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r12
  __int64 v15; // rcx
  int v16; // ecx
  struct _KTHREAD *v17; // rbx
  struct _KPROCESS *Process; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // r8
  PVOID v25; // rsi
  struct _EX_RUNDOWN_REF *v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 Count; // rcx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // [rsp+30h] [rbp-D8h]
  unsigned int v32; // [rsp+38h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+48h] [rbp-C0h]
  unsigned int v35; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+60h] [rbp-A8h]
  PSID Sid; // [rsp+68h] [rbp-A0h] BYREF
  __int128 *v40; // [rsp+70h] [rbp-98h]
  int v41[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h] BYREF

  v8 = (unsigned int)a3;
  v35 = a3;
  v42 = a2;
  v36 = 0LL;
  v46 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v41 = 0LL;
  v33 = 0LL;
  v32 = 0;
  v43 = 0LL;
  v40 = a4;
  LOBYTE(a3) = PreviousMode;
  v31 = ExpCaptureWnfStateName(a1, &v36, a3);
  if ( v31 >= 0 )
  {
    v38 = (v36 >> 4) & 3;
    v14 = (v36 >> 6) & 0xF;
    v32 = (v36 >> 6) & 0xF;
    if ( PreviousMode )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (_DWORD)v8 && (v13 + v8 > 0x7FFFFFFF0000LL || v13 + v8 < v13) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( v12 )
      {
        if ( v12 < 0x7FFFFFFF0000LL )
          v15 = v12;
        v46 = *(_OWORD *)v15;
        v40 = &v46;
      }
    }
    LOBYTE(v11) = PreviousMode;
    v31 = ExpWnfCaptureScopeInstanceId((v36 >> 6) & 0xF, a5, v11, &Sid, &v43);
    if ( v31 >= 0 )
    {
      if ( PreviousMode )
      {
        v34 = 0;
        if ( a5 )
        {
          v31 = ExpWnfCheckCrossScopeAccess(v36);
          if ( v31 < 0 )
            goto LABEL_27;
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
        LODWORD(v14) = v32;
        if ( v32 == 3 && (!Sid || Process == *(struct _KPROCESS **)Sid) )
          goto LABEL_61;
      }
      else
      {
        LODWORD(v17) = 0;
        Process = PsInitialSystemProcess;
      }
      if ( (_DWORD)v14 == 5 && a8 )
      {
        if ( a7 )
        {
LABEL_61:
          v31 = -1073741811;
          goto LABEL_27;
        }
        v44 = v36 ^ 0x41C64E6DA3BC0074LL;
        v31 = ExpCrossVmWnfPush(v16, 1, (unsigned int)&v44, -1, v42, v8);
        if ( v31 != -1073741822 )
          goto LABEL_27;
      }
      v31 = ExpWnfResolveScopeInstance((int)v41, (int)Process, (int)v17, v14, Sid);
      if ( v31 < 0 )
        goto LABEL_27;
      v19 = v36;
      v20 = *(_QWORD *)v41;
      v21 = ExpWnfLookupNameInstance(*(_QWORD *)v41, v36, &v33);
      v31 = v21;
      if ( v21 != -1073741772 || v38 == 3 )
      {
        if ( v21 < 0 )
          goto LABEL_27;
        v22 = v35;
        v31 = ExpWnfValidatePubSubPreconditions(2u, v34);
        if ( v31 < 0 )
          goto LABEL_27;
      }
      else
      {
        v31 = ExpWnfLookupPermanentName(v19, &P);
        if ( v31 < 0 )
          goto LABEL_27;
        v25 = P;
        v31 = ExpWnfValidatePubSubPreconditions(2u, v34);
        if ( v31 < 0 )
          goto LABEL_27;
        v31 = ExpWnfCreateNameInstance(v20, v19, (__int64)v25, Process, &v33);
        ExFreePoolWithTag(v25, 0x20666E57u);
        P = 0LL;
        if ( v31 < 0 )
          goto LABEL_27;
        v22 = v35;
      }
      v31 = ExpWnfWriteStateData(v33, v42, v22, a6, a7);
      if ( v31 >= 0 )
      {
        if ( (_DWORD)v14 == 5 )
        {
          v45 = v36 ^ 0x41C64E6DA3BC0074LL;
          v26 = v33 + 10;
          v27 = KeAbPreAcquire((__int64)&v33[10], 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)v26, 0, v27, (__int64)v26);
          if ( v27 )
            *(_BYTE *)(v27 + 18) = 1;
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
        }
        ExpWnfNotifyNameSubscribers(v33, 1LL, 1LL);
        v31 = 0;
      }
    }
  }
LABEL_27:
  if ( v33 )
    ExReleaseRundownProtection_0(v33 + 1);
  if ( *(_QWORD *)v41 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v41 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LOBYTE(v23) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v32, &v43, v23);
  return (unsigned int)v31;
}
