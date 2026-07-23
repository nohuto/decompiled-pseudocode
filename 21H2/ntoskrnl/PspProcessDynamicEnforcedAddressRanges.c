/*
 * XREFs of PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CFDB0 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1405CFF24 (RtlRemoveDynamicEnforcedAddressRange.c)
 */

__int64 __fastcall PspProcessDynamicEnforcedAddressRanges(
        PRKPROCESS PROCESS,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int *a5)
{
  volatile signed __int64 *v5; // r15
  unsigned int v6; // ebp
  char v7; // bl
  unsigned int v8; // esi
  struct _EX_RUNDOWN_REF *p_Blink; // r12
  unsigned int v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // r12d
  bool v15; // zf
  struct _KTHREAD *v16; // rsi
  _DWORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  int *v20; // r14
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-A8h]
  struct _LIST_ENTRY **v27; // [rsp+28h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-98h]
  struct _KPROCESS *v30; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = (volatile signed __int64 *)(a2 + 8);
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  v7 = 0;
  v8 = a4;
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  v30 = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  v27 = &PROCESS[1].ProfileListHead.Blink;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    v13 = 0;
    v14 = v8;
    v15 = v8 == 0;
    v7 = 2;
    v16 = CurrentThread;
    if ( v15 )
    {
LABEL_13:
      if ( PROCESS != v30 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v7 = 3;
      }
      v7 |= 4u;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( v14 )
      {
        v20 = (int *)(a3 + 16);
        while ( 1 )
        {
          if ( (*(_DWORD *)(&v16[1].SwapListEntry + 1) & 1) != 0 )
          {
            v12 = -1073741749;
            goto LABEL_34;
          }
          if ( (PROCESS[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          {
            v12 = -1073741558;
            goto LABEL_34;
          }
          v21 = *v20;
          v22 = *((_QWORD *)v20 - 2);
          v23 = *((_QWORD *)v20 - 1);
          v24 = (*v20 & 1) != 0
              ? RtlAddDynamicEnforcedAddressRange(a2, v22, v23)
              : RtlRemoveDynamicEnforcedAddressRange(a2, v22, v23);
          v12 = v24;
          if ( v24 < 0 )
            break;
          *v20 = v21 | 2;
          v20 += 6;
          v6 = v26 + 1;
          v26 = v6;
          if ( v6 >= v14 )
            goto LABEL_32;
          v16 = CurrentThread;
        }
        v6 = v26;
      }
      else
      {
LABEL_32:
        v12 = 0;
      }
LABEL_34:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
    }
    else
    {
      v17 = (_DWORD *)(a3 + 16);
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (PROCESS[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
        {
          v12 = -1073741558;
          goto LABEL_37;
        }
        v18 = *((_QWORD *)v17 - 2);
        v19 = *((_QWORD *)v17 - 1);
        if ( v19 + v18 < v18 )
        {
          v12 = -1073741675;
          goto LABEL_37;
        }
        if ( v18 - 0x10000 > 0x7FFFFFFDFFFFLL || v19 + v18 - 0x10000 > 0x7FFFFFFDFFFFLL || !v19 )
        {
          v12 = -1073741503;
          goto LABEL_37;
        }
        if ( (*v17 & 0xFFFFFFFE) != 0 )
        {
          v12 = -1073741811;
          goto LABEL_37;
        }
        ++v13;
        v17 += 6;
        if ( v13 >= v14 )
          goto LABEL_13;
      }
      v12 = -1073741749;
    }
LABEL_37:
    p_Blink = (struct _EX_RUNDOWN_REF *)v27;
  }
  else
  {
    v12 = -1073741558;
  }
  if ( (v7 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( (v7 & 2) != 0 )
    ExReleaseRundownProtection(p_Blink);
  KeLeaveCriticalRegion();
  *a5 = v6;
  return v12;
}
