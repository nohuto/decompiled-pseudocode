__int64 __fastcall PspProcessDynamicEHContinuationTargets(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // rsi
  int v10; // esi
  unsigned int v11; // edx
  int v12; // ebp
  _QWORD *v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 *v17; // rbx
  int VsmEnclaveThread; // eax
  unsigned int v20; // [rsp+20h] [rbp-98h]
  unsigned int v21; // [rsp+24h] [rbp-94h]
  struct _KTHREAD *v22; // [rsp+28h] [rbp-90h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+30h] [rbp-88h]
  $115DCDF994C6370D29323EAB0E0C9502 v25; // [rsp+40h] [rbp-78h] BYREF

  memset(&v25, 0, sizeof(v25));
  v5 = 0;
  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  v20 = 0;
  v22 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    v11 = 0;
    v21 = v6;
    v12 = 2;
    if ( v6 )
    {
      v13 = a2;
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
        {
          v10 = -1073741558;
          goto LABEL_44;
        }
        if ( (unsigned __int64)(*v13 - 0x10000LL) > 0x7FFFFFFDFFFFLL )
        {
          v10 = -1073741503;
          goto LABEL_44;
        }
        if ( (v13[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v10 = -1073741811;
          goto LABEL_44;
        }
        ++v11;
        v13 += 2;
        if ( v11 >= v6 )
          goto LABEL_10;
      }
      v10 = -1073741749;
    }
    else
    {
LABEL_10:
      if ( (_KPROCESS *)BugCheckParameter1 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v25);
        v12 = 3;
      }
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2848, 0LL);
      if ( v6 )
      {
        v14 = a2 + 1;
        while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v10 = -1073741558;
            goto LABEL_38;
          }
          v15 = *v14;
          v16 = *(v14 - 1);
          if ( (*v14 & 1) != 0 )
          {
            v10 = RtlAddDynamicEHContinuationTarget(BugCheckParameter1 + 2840, *(v14 - 1));
            if ( v10 < 0 )
              goto LABEL_34;
          }
          else
          {
            v17 = *(unsigned __int64 **)(BugCheckParameter1 + 2840);
            while ( v17 )
            {
              VsmEnclaveThread = PspFindVsmEnclaveThread(v16, (__int64)v17);
              if ( VsmEnclaveThread >= 0 )
              {
                if ( VsmEnclaveThread <= 0 )
                  break;
                v17 = (unsigned __int64 *)v17[1];
              }
              else
              {
                v17 = (unsigned __int64 *)*v17;
              }
            }
            if ( !v17 )
            {
              v10 = -1073741275;
LABEL_34:
              v5 = v20;
              goto LABEL_38;
            }
            RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 2840), v17);
            ExFreePoolWithTag(v17, 0);
            v6 = v21;
          }
          *v14 = v15 | 2;
          v14 += 2;
          v5 = v20 + 1;
          v20 = v5;
          if ( v5 >= v6 )
            goto LABEL_37;
          CurrentThread = v22;
        }
        v10 = -1073741749;
      }
      else
      {
LABEL_37:
        v10 = 0;
      }
LABEL_38:
      if ( (v12 | 4u) >= 4 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2848), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 2848));
        KeAbPostRelease(BugCheckParameter1 + 2848);
      }
      if ( (v12 & 1) != 0 )
        KiUnstackDetachProcess(&v25);
    }
LABEL_44:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v10 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a4 = v5;
  return (unsigned int)v10;
}
