/*
 * XREFs of PspProcessDynamicEHContinuationTargets @ 0x140907D04
 * Callers:
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA638 (MiHotPatchImageTreeCompare.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091A8E8 (RtlAddDynamicEHContinuationTarget.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspProcessDynamicEHContinuationTargets(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  unsigned int v4; // r15d
  char v5; // bl
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // rbp
  _DWORD *v11; // r9
  int v12; // esi
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  __int64 *v15; // r14
  __int64 v16; // r15
  unsigned __int64 **v17; // r12
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // r12
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-98h]
  unsigned int v23; // [rsp+24h] [rbp-94h]
  struct _KTHREAD *v24; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+38h] [rbp-80h]
  _OWORD v27[3]; // [rsp+48h] [rbp-70h] BYREF

  memset(v27, 0, sizeof(v27));
  v4 = 0;
  v5 = 0;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v22 = 0;
  v24 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    v13 = 0;
    v23 = v6;
    v5 = 2;
    if ( v6 )
    {
      v14 = a2;
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          goto LABEL_2;
        if ( (unsigned __int64)(*v14 - 0x10000LL) > 0x7FFFFFFDFFFFLL )
        {
          v12 = -1073741503;
          goto LABEL_38;
        }
        if ( (v14[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v12 = -1073741811;
          goto LABEL_38;
        }
        ++v13;
        v14 += 2;
        if ( v13 >= v6 )
          goto LABEL_10;
      }
      v12 = -1073741749;
    }
    else
    {
LABEL_10:
      if ( (_KPROCESS *)BugCheckParameter1 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27, v11);
        v5 = 3;
      }
      v5 |= 4u;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2568, 0LL);
      if ( v6 )
      {
        v15 = a2 + 1;
        while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v12 = -1073741558;
            goto LABEL_35;
          }
          v16 = *v15;
          v17 = (unsigned __int64 **)(BugCheckParameter1 + 2560);
          if ( (*v15 & 1) != 0 )
          {
            v12 = RtlAddDynamicEHContinuationTarget(BugCheckParameter1 + 2560, *(v15 - 1));
          }
          else
          {
            v18 = *v17;
            if ( !*v17 )
              goto LABEL_33;
            v19 = *(v15 - 1);
            do
            {
              v20 = MiHotPatchImageTreeCompare(v19, (__int64)v18);
              if ( v20 >= 0 )
              {
                if ( v20 <= 0 )
                  break;
                v18 = (unsigned __int64 *)v18[1];
              }
              else
              {
                v18 = (unsigned __int64 *)*v18;
              }
            }
            while ( v18 );
            if ( !v18 )
            {
LABEL_33:
              v12 = -1073741275;
LABEL_34:
              v4 = v22;
              goto LABEL_35;
            }
            RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 2560), v18);
            ExFreePoolWithTag(v18, 0);
            v12 = 0;
          }
          if ( v12 < 0 )
            goto LABEL_34;
          *v15 = v16 | 2;
          v15 += 2;
          v4 = v22 + 1;
          v22 = v4;
          if ( v4 >= v23 )
            goto LABEL_45;
          CurrentThread = v24;
        }
        v12 = -1073741749;
      }
      else
      {
LABEL_45:
        v12 = 0;
      }
LABEL_35:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2568), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2568);
      KeAbPostRelease(BugCheckParameter1 + 2568);
    }
  }
  else
  {
LABEL_2:
    v12 = -1073741558;
  }
LABEL_38:
  if ( (v5 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v27, 0);
  if ( (v5 & 2) != 0 )
    ExReleaseRundownProtection_0(RunRef);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a4 = v4;
  return (unsigned int)v12;
}
