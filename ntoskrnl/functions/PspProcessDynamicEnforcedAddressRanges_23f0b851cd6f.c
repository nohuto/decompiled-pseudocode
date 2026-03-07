__int64 __fastcall PspProcessDynamicEnforcedAddressRanges(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int *a5)
{
  volatile signed __int64 *v5; // r15
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned int v10; // esi
  unsigned int v11; // r9d
  int v12; // ebp
  unsigned int v13; // r12d
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int *v19; // rbx
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  _KPROCESS *Process; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+40h] [rbp-88h]
  $115DCDF994C6370D29323EAB0E0C9502 v30; // [rsp+50h] [rbp-78h] BYREF

  v5 = (volatile signed __int64 *)(a2 + 8);
  memset(&v30, 0, sizeof(v30));
  v7 = 0;
  v8 = a4;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    v11 = 0;
    v12 = 2;
    v13 = v8;
    if ( v8 )
    {
      v14 = (_DWORD *)(a3 + 16);
      while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
        {
          v10 = -1073741558;
          goto LABEL_39;
        }
        v15 = *((_QWORD *)v14 - 2);
        v16 = *((_QWORD *)v14 - 1);
        if ( v15 < 0x10000 )
          goto LABEL_26;
        v17 = v16 + v15 - 1;
        if ( !v16 )
          v17 = *((_QWORD *)v14 - 2);
        if ( v17 < v15 )
          goto LABEL_26;
        v18 = v16 + v15 - 1;
        if ( !v16 )
          v18 = *((_QWORD *)v14 - 2);
        if ( v18 > 0x7FFFFFFEFFFFLL || !v16 )
        {
LABEL_26:
          v10 = -1073741503;
          goto LABEL_39;
        }
        if ( (*v14 & 0xFFFFFFFE) != 0 )
        {
          v10 = -1073741811;
          goto LABEL_39;
        }
        ++v11;
        v14 += 6;
        if ( v11 >= v8 )
          goto LABEL_17;
      }
      v10 = -1073741749;
    }
    else
    {
LABEL_17:
      if ( (_KPROCESS *)BugCheckParameter1 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v30);
        v12 = 3;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( v8 )
      {
        v19 = (int *)(a3 + 16);
        while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v10 = -1073741558;
            goto LABEL_33;
          }
          v20 = *v19;
          v21 = *((_QWORD *)v19 - 2);
          v22 = *((_QWORD *)v19 - 1);
          if ( (*v19 & 1) != 0 )
            v23 = RtlAddDynamicEnforcedAddressRange(a2, v21, v22);
          else
            v23 = RtlRemoveDynamicEnforcedAddressRange(a2, v21, v22);
          v10 = v23;
          if ( v23 < 0 )
          {
            v7 = v25;
            goto LABEL_33;
          }
          *v19 = v20 | 2;
          v19 += 6;
          v7 = v25 + 1;
          v25 = v7;
          if ( v7 >= v13 )
            goto LABEL_32;
        }
        v10 = -1073741749;
      }
      else
      {
LABEL_32:
        v10 = 0;
      }
LABEL_33:
      if ( (v12 | 4u) >= 4 )
      {
        if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5);
        KeAbPostRelease((ULONG_PTR)v5);
      }
      if ( (v12 & 1) != 0 )
        KiUnstackDetachProcess(&v30);
    }
LABEL_39:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v10 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a5 = v7;
  return v10;
}
