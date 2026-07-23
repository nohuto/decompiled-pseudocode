/*
 * XREFs of PspProcessDynamicEHContinuationTargets @ 0x140907E64
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA798 (MiHotPatchImageTreeCompare.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091AA48 (RtlAddDynamicEHContinuationTarget.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  _QWORD *v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // r15
  unsigned __int64 **v18; // r12
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // r12
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-98h]
  unsigned int v24; // [rsp+24h] [rbp-94h]
  struct _KTHREAD *v25; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+38h] [rbp-80h]
  _OWORD v28[3]; // [rsp+48h] [rbp-70h] BYREF

  memset(v28, 0, sizeof(v28));
  v4 = 0;
  v5 = 0;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v23 = 0;
  v25 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    v11 = 0LL;
    v24 = v6;
    v5 = 2;
    if ( v6 )
    {
      v15 = a2;
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          goto LABEL_2;
        v12 = 0x7FFFFFFDFFFFLL;
        if ( (unsigned __int64)(*v15 - 0x10000LL) > 0x7FFFFFFDFFFFLL )
        {
          v14 = -1073741503;
          goto LABEL_38;
        }
        if ( (v15[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v14 = -1073741811;
          goto LABEL_38;
        }
        v11 = (unsigned int)(v11 + 1);
        v15 += 2;
        if ( (unsigned int)v11 >= v6 )
          goto LABEL_10;
      }
      v14 = -1073741749;
    }
    else
    {
LABEL_10:
      if ( (_KPROCESS *)BugCheckParameter1 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
        v5 = 3;
      }
      v5 |= 4u;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2568, 0LL);
      if ( v6 )
      {
        v16 = a2 + 1;
        while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v14 = -1073741558;
            goto LABEL_35;
          }
          v17 = *v16;
          v18 = (unsigned __int64 **)(BugCheckParameter1 + 2560);
          if ( (*v16 & 1) != 0 )
          {
            v14 = RtlAddDynamicEHContinuationTarget(BugCheckParameter1 + 2560, *(v16 - 1));
          }
          else
          {
            v19 = *v18;
            if ( !*v18 )
              goto LABEL_33;
            v20 = *(v16 - 1);
            do
            {
              v21 = MiHotPatchImageTreeCompare(v20, (__int64)v19);
              if ( v21 >= 0 )
              {
                if ( v21 <= 0 )
                  break;
                v19 = (unsigned __int64 *)v19[1];
              }
              else
              {
                v19 = (unsigned __int64 *)*v19;
              }
            }
            while ( v19 );
            if ( !v19 )
            {
LABEL_33:
              v14 = -1073741275;
LABEL_34:
              v4 = v23;
              goto LABEL_35;
            }
            RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 2560), v19);
            ExFreePoolWithTag(v19, 0);
            v14 = 0;
          }
          if ( v14 < 0 )
            goto LABEL_34;
          *v16 = v17 | 2;
          v16 += 2;
          v4 = v23 + 1;
          v23 = v4;
          if ( v4 >= v24 )
            goto LABEL_45;
          CurrentThread = v25;
        }
        v14 = -1073741749;
      }
      else
      {
LABEL_45:
        v14 = 0;
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
    v14 = -1073741558;
  }
LABEL_38:
  if ( (v5 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v28, 0LL);
  if ( (v5 & 2) != 0 )
    ExReleaseRundownProtection(RunRef);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  *a4 = v4;
  return (unsigned int)v14;
}
