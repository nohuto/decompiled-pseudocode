/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140681F80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspSendJobNotification @ 0x14024234C (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspSendReliableJobNotification @ 0x1405DC67C (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140615028 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspRateControlLimitFlag @ 0x1406802BC (PspRateControlLimitFlag.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1406823FC (PspLockJobShared.c)
 *     PspGetEffectiveNoWakeCharge @ 0x140682424 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x14068253C (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14068259C (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406825F8 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x14068264C (PspLockJobMemoryLimitsShared.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140909474 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(_QWORD *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r12
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edi
  int v18; // r13d
  int v19; // edx
  int v20; // r14d
  int v21; // esi
  int v22; // r12d
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  bool v25; // zf
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rdx
  _QWORD *v28; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  _QWORD *v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // eax
  struct _KPROCESS *v49; // rcx
  struct _KTHREAD *v50; // rdi
  int v51; // [rsp+20h] [rbp-E0h]
  struct _KTHREAD *v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h]
  _QWORD v58[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+70h] [rbp-90h]
  __int128 v60; // [rsp+80h] [rbp-80h]
  __int128 v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+A0h] [rbp-60h]
  __int128 v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  _OWORD v66[4]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v52 = CurrentThread;
  v56 = 0LL;
  v55 = 0LL;
  PspLockJobShared(Object, CurrentThread);
  v6 = Object[123];
  if ( v6 )
  {
    v30 = *(_OWORD *)(v6 + 24);
    v66[0] = *(_OWORD *)(v6 + 8);
    v31 = *(_OWORD *)(v6 + 40);
    v66[1] = v30;
    v32 = *(_OWORD *)(v6 + 56);
    v66[2] = v31;
    v66[3] = v32;
  }
  else
  {
    memset(v66, 0, sizeof(v66));
  }
  v7 = Object[23];
  v8 = *((_OWORD *)Object + 71);
  v9 = Object[64];
  v10 = Object[65];
  v11 = Object[20];
  v59 = *((_OWORD *)Object + 70);
  v12 = *((_OWORD *)Object + 72);
  v57 = v7;
  LODWORD(v7) = *((_DWORD *)Object + 113);
  v60 = v8;
  v13 = *((_OWORD *)Object + 73);
  v53 = v7;
  LODWORD(v7) = *((_DWORD *)Object + 64);
  v61 = v12;
  v62 = v13;
  v14 = *((_OWORD *)Object + 75);
  v63 = *((_OWORD *)Object + 74);
  v65 = Object[152];
  v64 = v14;
  if ( (v7 & 4) != 0 )
    v54 = Object[29];
  else
    v54 = 0LL;
  PspGetEffectiveNoWakeCharge(Object, &v56, &v55);
  PspUnlockJob(v15, CurrentThread);
  v16 = 0x10000LL;
  v51 = 0;
  if ( *(_QWORD *)&v66[0] )
  {
    if ( (unsigned __int64)(v9 + v63) > *(_QWORD *)&v66[0] )
      v4 = 0x10000;
    v51 = v4;
  }
  if ( *((_QWORD *)&v66[0] + 1) && (unsigned __int64)(v10 + *((_QWORD *)&v63 + 1)) > *((_QWORD *)&v66[0] + 1) )
  {
    v4 |= 0x20000u;
    v51 = v4;
  }
  if ( *(_QWORD *)&v66[1] && (unsigned __int64)(v11 + *((_QWORD *)&v59 + 1)) > *(_QWORD *)&v66[1] )
  {
    v4 |= 4u;
    v51 = v4;
  }
  if ( *(_OWORD *)((char *)&v66[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Object, CurrentThread);
    v51 = PspGetJobMemoryUsageNotificationViolations(Object, Object[122], Object[122] + Object[167], 33280LL) | v4;
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
  }
  v17 = DWORD2(v66[2]);
  v18 = DWORD1(v66[3]);
  if ( DWORD2(v66[2]) && *(_DWORD *)(a2 + 32) == DWORD1(v66[3]) && *(_DWORD *)(a2 + 44) >= DWORD2(v66[2]) )
  {
    v19 = PspRateControlLimitFlag(0) | v51;
    v51 = v19;
  }
  else
  {
    v19 = v51;
  }
  v20 = HIDWORD(v66[2]);
  if ( HIDWORD(v66[2]) && *(_DWORD *)(a2 + 36) == DWORD2(v66[3]) && *(_DWORD *)(a2 + 48) >= HIDWORD(v66[2]) )
  {
    v44 = PspRateControlLimitFlag(1);
    v19 = v44 | v45;
    v51 = v19;
  }
  v21 = v66[3];
  v22 = HIDWORD(v66[3]);
  if ( LODWORD(v66[3]) && *(_DWORD *)(a2 + 40) == HIDWORD(v66[3]) && *(_DWORD *)(a2 + 52) >= LODWORD(v66[3]) )
  {
    v46 = PspRateControlLimitFlag(2);
    v19 = v46 | v47;
    v51 = v19;
  }
  if ( v19 )
  {
    PspLockJobExclusive(Object, v52);
    v33 = Object[123];
    if ( v33 )
    {
      *(_DWORD *)(v33 + 4) |= v51;
      v34 = (_QWORD *)Object[123];
      if ( (v51 & 0x10000) != 0 )
        v34[9] = *(_QWORD *)&v66[0];
      if ( (v51 & 0x20000) != 0 )
        v34[10] = *((_QWORD *)&v66[0] + 1);
      if ( (v51 & 4) != 0 )
        v34[11] = *(_QWORD *)&v66[1];
      if ( (v51 & 0x200) != 0 )
        v34[13] = *(_QWORD *)&v66[2];
      if ( (v51 & 0x8000) != 0 )
        v34[12] = *((_QWORD *)&v66[1] + 1);
      v35 = PspRateControlLimitFlag(0);
      if ( (v35 & v37) != 0 )
      {
        *(_DWORD *)(v36 + 112) = v17;
        *(_DWORD *)(v36 + 124) = v18;
      }
      v38 = PspRateControlLimitFlag(1);
      if ( (v38 & v40) != 0 )
      {
        v48 = DWORD2(v66[3]);
        *(_DWORD *)(v39 + 116) = v20;
        *(_DWORD *)(v39 + 128) = v48;
      }
      v41 = PspRateControlLimitFlag(2);
      if ( (v41 & v43) != 0 )
      {
        *(_DWORD *)(v42 + 120) = v21;
        *(_DWORD *)(v42 + 132) = v22;
      }
    }
    if ( Object[57] && (*((_DWORD *)Object + 219) & 0x800) != 0 && (Object[165] & 4) == 0 )
      PspSendReliableJobNotification(Object, 0xBu);
    PspUnlockJob(Object, v52);
  }
  v23 = *(_QWORD *)(a2 + 16);
  if ( v23 )
  {
    if ( (*(_DWORD *)(v23 + 1120) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v23 + 1120), 0xFFFFFFDF);
      v49 = *(struct _KPROCESS **)(a2 + 16);
      v58[0] = *(_QWORD *)(a2 + 8);
      v58[1] = 2LL;
      v58[2] = v49[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v49, v58, 0xEu, 0xC0000044);
      v23 = *(_QWORD *)(a2 + 16);
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v23);
  }
  if ( v54 && *((_QWORD *)&v59 + 1) + v57 > v54 )
  {
    if ( v53 )
    {
      if ( v53 != 1 )
        goto LABEL_17;
      v50 = v52;
      PspLockJobShared(Object, v52);
      if ( !Object[57] || (*((_DWORD *)Object + 219) & 2) == 0 )
      {
        PspUnlockJob(Object, v52);
        PspTerminateAllProcessesInJobHierarchy((volatile signed __int32 *)Object, 0xC0000044, 1);
        goto LABEL_17;
      }
      if ( (int)PspSendJobNotification((__int64)Object, 1LL, 0, 0) >= 0 )
      {
        *((_DWORD *)Object + 64) &= ~4u;
        Object[29] = 0LL;
      }
    }
    else
    {
      if ( !PspTerminateAllProcessesInJobHierarchy((volatile signed __int32 *)Object, 0xC0000044, 1) )
        goto LABEL_17;
      v50 = v52;
      PspLockJobExclusive(Object, v52);
      if ( !*((_DWORD *)Object + 54) && Object[57] && (*((_DWORD *)Object + 219) & 2) != 0 )
        PspSendJobNotification((__int64)Object, 1LL, 0, 0);
    }
    PspUnlockJob(Object, v50);
  }
LABEL_17:
  v24 = *(_QWORD *)(a2 + 24) + v55;
  v25 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v24;
  if ( v25 )
  {
    if ( v24 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL, v24, v16);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v56 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Object, v24, v16);
    }
  }
  v26 = Object[134];
  if ( v26 )
  {
    PspLockJobExclusive(v26, v52);
    PspLockJobExclusive(Object, v52);
    PspAddAccountingValues(Object[134] + 1120LL, Object + 140);
    memset(Object + 140, 0, 0x68uLL);
    PspUnlockJob(Object, v52);
    v28 = (_QWORD *)Object[134];
    v27 = v52;
  }
  else
  {
    PspLockJobExclusive(Object, v52);
    memset(Object + 140, 0, 0x68uLL);
    v27 = v52;
    v28 = Object;
  }
  PspUnlockJob(v28, v27);
  return 0LL;
}
