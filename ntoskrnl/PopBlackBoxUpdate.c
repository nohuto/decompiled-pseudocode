/*
 * XREFs of PopBlackBoxUpdate @ 0x14068BFB0
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlTestProtectedAccess @ 0x14070C7FC (RtlTestProtectedAccess.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxUpdate(char **a1, char *a2)
{
  __int64 v3; // rax
  __int64 (**v4)[2]; // rsi
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  size_t v9; // r14
  unsigned int v10; // edi
  char *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 Pool2; // rax
  _KPROCESS *Process; // rcx
  char v18; // [rsp+50h] [rbp+8h]

  v18 = 0;
  v3 = *((int *)a1 + 6);
  if ( (unsigned int)v3 > 0x15 )
  {
    v10 = -1073741811;
    goto LABEL_12;
  }
  v4 = &PopBlackBoxEntries + 13 * v3;
  if ( (_BYTE)a2 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      v13 = *a1;
      a2 = &v12[(_QWORD)v13];
      if ( &v12[(_QWORD)v13] > (char *)0x7FFFFFFF0000LL || a2 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v4[2] & 1) != 0 )
    {
      Process = KeGetCurrentThread()->Process;
      LOBYTE(a2) = 97;
      LOBYTE(Process) = BYTE2(Process[2].Header.WaitListHead.Flink);
      if ( !(unsigned __int8)RtlTestProtectedAccess(Process, a2) )
      {
        v10 = -1073741790;
        goto LABEL_12;
      }
    }
  }
  v5 = *((_BYTE *)a1 + 28) & 1;
  v18 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
  if ( ((_DWORD)v4[2] & 2) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_12;
  }
  v7 = (unsigned __int64)a1[1];
  if ( !v5 )
  {
    v8 = 0LL;
    v9 = 4096LL;
    if ( v7 < 0x1000 )
      v9 = (size_t)a1[1];
    v4[12] = (__int64 (*)[2])v7;
    v4[11] = (__int64 (*)[2])v9;
LABEL_8:
    if ( v4[10] || (Pool2 = ExAllocatePool2(64LL, 4096LL, 544040269LL), (v4[10] = (__int64 (*)[2])Pool2) != 0LL) )
    {
      v4[9] = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      if ( v9 )
        memmove((char *)v4[10] + v8, *a1, v9);
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_12;
  }
  v9 = (size_t)a1[1];
  if ( !v7 )
  {
LABEL_31:
    v10 = -1073741811;
    goto LABEL_12;
  }
  v8 = (unsigned __int64)a1[2];
  v14 = v8 + v7;
  v15 = -1LL;
  if ( v14 >= v8 )
    v15 = v14;
  v10 = v14 < v8 ? 0xC0000095 : 0;
  if ( v14 >= v8 )
  {
    if ( v15 <= (unsigned __int64)v4[12] )
    {
      if ( v8 >= 0x1000 )
      {
        v9 = 0LL;
      }
      else if ( v15 > 0x1000 )
      {
        v9 = 4096 - v8;
      }
      goto LABEL_8;
    }
    goto LABEL_31;
  }
LABEL_12:
  if ( v18 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegion();
  }
  return v10;
}
