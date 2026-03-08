/*
 * XREFs of KiWaitForAllObjects @ 0x1402936D0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiCheckWaitNext @ 0x14022AE00 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x140239300 (KiFastExitThreadWait.c)
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiBeginThreadWait @ 0x1402934C0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x140293640 (KiCheckDueTimeExpired.c)
 *     KiWaitSatisfyOther @ 0x140293B88 (KiWaitSatisfyOther.c)
 *     KiUnlockKobjectArray @ 0x140293BB8 (KiUnlockKobjectArray.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x140352000 (KiWaitSatisfyMutant.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiWaitForAllObjects(unsigned int a1, __int64 *a2, int a3, char a4, char a5, __int64 a6, __int64 *a7)
{
  char v7; // di
  __int64 *v8; // r12
  unsigned int v9; // esi
  char v10; // r15
  __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned __int64 *v13; // r11
  __int64 *v14; // rbx
  unsigned __int64 v15; // r10
  unsigned int v16; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  char v18; // r14
  volatile __int64 WaitStatus; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  __int64 *v23; // r14
  __int64 v24; // r15
  char v25; // r8
  __int64 *v26; // rdx
  __int64 v27; // r10
  char *v28; // rcx
  _BYTE *v29; // rax
  int v30; // edx
  __int64 v31; // rcx
  __int64 *v32; // r11
  unsigned int v33; // edx
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 **v36; // r8
  unsigned int v37; // edi
  unsigned __int64 v38; // r14
  unsigned int v39; // eax
  int v40; // r12d
  unsigned __int8 CurrentIrql; // r8
  __int64 v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rdi
  char v45; // r10
  __int64 v46; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v50; // rdx
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 *v55; // r13
  unsigned __int64 v56; // rax
  char v57; // r12
  __int64 *v58; // rax
  __int64 *v59; // r15
  char v60; // cl
  __int64 v61; // rax
  __int64 *v62; // rbx
  unsigned __int64 v63; // rax
  __int64 v64; // r13
  _KPROCESS **v65; // r15
  __int64 v66; // rax
  char v67; // [rsp+30h] [rbp-D0h]
  char v68; // [rsp+30h] [rbp-D0h]
  unsigned int v70; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v71; // [rsp+38h] [rbp-C8h]
  _DWORD v72[3]; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v73; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v75; // [rsp+58h] [rbp-A8h]
  __int64 *v76; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v77; // [rsp+68h] [rbp-98h]
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v79[512]; // [rsp+78h] [rbp-88h] BYREF

  v7 = a3;
  v72[0] = a3;
  v8 = a2;
  v76 = a2;
  v9 = a1;
  v71 = a1;
  v75 = a7;
  v74 = 0LL;
  v10 = a4;
  memset(v79, 0, 0x1F8uLL);
  v11 = *v8;
  v12 = 1;
  v70 = 0;
  v78 = v11;
  if ( v9 > 1 )
  {
    v13 = (unsigned __int64 *)(v8 + 1);
    v14 = &v78;
    do
    {
      v15 = *v13;
      v16 = v12;
      if ( *v14 > *v13 )
      {
        do
        {
          v42 = v16--;
          *(_QWORD *)&v79[8 * v42 - 8] = *(_QWORD *)&v79[8 * v16 - 8];
        }
        while ( v16 && *(&v78 + v16 - 1) > v15 );
      }
      ++v12;
      ++v14;
      ++v13;
      *(_QWORD *)&v79[8 * v16 - 8] = v15;
    }
    while ( v12 < v9 );
  }
  CurrentThread = KeGetCurrentThread();
  v77 = CurrentThread;
  v18 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v74, &v70);
  v67 = v18;
LABEL_6:
  LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, v10, v7, a5);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0LL;
    v22 = v78;
    v73 = 0LL;
    KiAcquireKobjectLockSafe(v78);
    if ( v9 <= 1 )
    {
      if ( !v9 )
      {
LABEL_18:
        CurrentThread->WaitStatus = 0LL;
        v30 = 0;
        CurrentThread->AbWaitObject = 0LL;
        while ( 1 )
        {
          v31 = v8[v30];
          if ( (*(_BYTE *)v31 & 0x7F) == 2 )
          {
            DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
            v52 = *(struct _KTHREAD **)(v31 + 40);
            if ( CurrentThread == v52 && *(_BYTE *)(v31 + 2) == DpcRoutineActive && *(_DWORD *)(v31 + 4) == 0x80000000 )
            {
              KiUnlockKobjectArray(&v78, v9);
              LOBYTE(v54) = v18;
              KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v54);
              RtlRaiseStatus(-1073741423);
            }
            if ( *(int *)(v31 + 4) <= 0 && (CurrentThread != v52 || *(_BYTE *)(v31 + 2) != DpcRoutineActive) )
            {
LABEL_22:
              if ( v30 == v9 )
              {
                if ( v9 )
                {
                  v43 = v9;
                  do
                  {
                    v44 = *v8;
                    if ( !(unsigned __int8)KiWaitSatisfyOther(*v8)
                      && (*(_BYTE *)v44 & 0x7F) == v45
                      && (*(_DWORD *)(v44 + 4))-- == 1 )
                    {
                      v72[0] = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                      {
                        do
                          KeYieldProcessorEx(v72);
                        while ( CurrentThread->ThreadLock );
                      }
                      KiWaitSatisfyMutant(v44, CurrentThread, CurrentPrcb);
                      CurrentThread->ThreadLock = 0LL;
                      if ( (*(_BYTE *)(v44 + 48) & 2) != 0 )
                      {
                        v66 = KeAbPreAcquire(v44, 0LL);
                        if ( v66 )
                          *(_BYTE *)(v66 + 18) = 1;
                      }
                    }
                    ++v8;
                    --v43;
                  }
                  while ( v43 );
                  v9 = v71;
                }
                KiUnlockKobjectArray(&v78, v9);
                WaitStatus = CurrentThread->WaitStatus;
                LOBYTE(v46) = v67;
                CurrentThread->AbWaitObject = 0LL;
                KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v46);
              }
              else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v70, v74) )
              {
                KiUnlockKobjectArray(&v78, v9);
                LOBYTE(v53) = v18;
                KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v53);
                LODWORD(WaitStatus) = 258;
              }
              else
              {
                v33 = 0;
                if ( v9 )
                {
                  v34 = v32;
                  do
                  {
                    v35 = v34[4] + 8;
                    v36 = *(__int64 ***)(v34[4] + 16);
                    if ( *v36 != (__int64 *)v35 )
                      __fastfail(3u);
                    *v34 = v35;
                    ++v33;
                    v34[1] = (__int64)v36;
                    *v36 = v34;
                    *(_QWORD *)(v35 + 8) = v34;
                    v34 += 6;
                  }
                  while ( v33 < v9 );
                }
                KiUnlockKobjectArray(&v78, v9);
                CurrentThread->WaitBlockCount = v9;
                v37 = 0;
                v38 = 0LL;
                if ( v21 )
                {
                  v55 = v76;
                  do
                  {
                    _BitScanForward64(&v56, v21);
                    v57 = v56;
                    _bittestandreset64((__int64 *)&v21, (unsigned int)v56);
                    v72[1] = v56;
                    v73 = v21;
                    v58 = (__int64 *)KeAbPreAcquire(v55[v56], 0LL);
                    v59 = v58;
                    if ( !v58 )
                      break;
                    v38 |= 1LL << v57;
                    KeAbPreWait(v58);
                    v60 = *((_BYTE *)v59 + 16);
                    v21 = v73;
                    v61 = v37++;
                    v79[v61 + 504] = (2 * v60) | 1;
                  }
                  while ( v21 );
                  v9 = v71;
                }
                v39 = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, v75, v70, v74, 0LL);
                LODWORD(WaitStatus) = v39;
                if ( v39 <= 0x3F || (v68 = 0, v39 - 128 <= 0x3F) )
                  v68 = 1;
                CurrentThread->AbWaitObject = 0LL;
                v40 = 0;
                if ( v38 )
                {
                  v62 = v76;
                  do
                  {
                    _BitScanForward64(&v63, v38);
                    v64 = (unsigned int)v63;
                    v72[2] = v63;
                    v38 &= ~(1LL << v63);
                    v65 = &KeGetCurrentThread()[1].Process + 12 * (v79[v40 + 504] >> 1);
                    KeAbPreAcquire(v62[(unsigned int)v63], (__int64)v65);
                    if ( v68 )
                      *((_BYTE *)v65 + 18) = 1;
                    else
                      KeAbPostReleaseEx(v62[v64], (ULONG_PTR)v65);
                    ++v40;
                  }
                  while ( v38 );
                  CurrentThread = v77;
                  v9 = v71;
                }
                if ( (_DWORD)WaitStatus == 256 )
                {
                  v18 = 0;
                  v67 = 0;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                    if ( CurrentIrql == 2 )
                      LODWORD(v50) = 4;
                    else
                      v50 = (-1LL << (CurrentIrql + 1)) & 4;
                    SchedulerAssist[5] |= v50;
                  }
                  v8 = v76;
                  v7 = v72[0];
                  v10 = a4;
                  CurrentThread->WaitIrql = CurrentIrql;
                  goto LABEL_6;
                }
              }
              return (unsigned int)WaitStatus;
            }
          }
          else if ( *(int *)(v31 + 4) <= 0 )
          {
            goto LABEL_22;
          }
          if ( ++v30 >= v9 )
            goto LABEL_22;
        }
      }
    }
    else
    {
      v23 = (__int64 *)v79;
      v24 = v9 - 1;
      do
      {
        if ( *v23 != v22 )
        {
          v22 = *v23;
          KiAcquireKobjectLockSafe(*v23);
        }
        ++v23;
        --v24;
      }
      while ( v24 );
      v21 = v73;
      v18 = v67;
    }
    v25 = 0;
    v26 = v8;
    v27 = v9;
    v28 = (char *)v75 + 17;
    do
    {
      v29 = (_BYTE *)*v26;
      *(v28 - 1) = 0;
      *v28 = 4;
      *(_WORD *)(v28 + 1) = 0;
      if ( CurrentThread )
        *(_QWORD *)(v28 + 7) = CurrentThread;
      *(_QWORD *)(v28 + 15) = v29;
      v28 += 48;
      if ( (*(_BYTE *)*v26 & 0x7F) == 2 && (*(_BYTE *)(*v26 + 48) & 2) != 0 )
        v21 |= 1LL << v25;
      ++v25;
      ++v26;
      --v27;
    }
    while ( v27 );
    goto LABEL_18;
  }
  return (unsigned int)WaitStatus;
}
