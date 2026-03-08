/*
 * XREFs of PopBootStatGet @ 0x14073D308
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlUnlockBootStatusData @ 0x14073D1B0 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x14073D600 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14073D958 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140798D98 (PopBootStatAccessCheck.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *Pool2; // rsi
  char PreviousMode; // r15
  NTSTATUS SetBootStatusData; // r14d
  size_t v6; // rbx
  size_t v7; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 j; // r12
  __int64 v12; // r11
  unsigned int Size; // [rsp+30h] [rbp-68h] BYREF
  int Size_4; // [rsp+34h] [rbp-64h]
  unsigned int v16; // [rsp+38h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-4Ch]
  PVOID P; // [rsp+50h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+58h] [rbp-40h] BYREF
  char *v22; // [rsp+60h] [rbp-38h]
  void *Src; // [rsp+68h] [rbp-30h]
  char v25; // [rsp+B8h] [rbp+20h]

  pullResult = 0LL;
  Size = 0;
  v16 = 0;
  v18 = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v25 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_25;
    v6 = pullResult;
    Pool2 = (char *)ExAllocatePool2(256LL, pullResult, 544040269LL);
    P = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_25;
    }
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v22 = &Pool2[24 * i];
      ProbeForWrite(*((volatile void **)v22 + 1), *((unsigned int *)v22 + 4), 1u);
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    P = Pool2;
  }
  v25 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v10) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v10, 1LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v22 = &Pool2[24 * j];
        v19 = *(_DWORD *)v22;
        SetBootStatusData = RtlBootStatusItemInfo(v19, &v16, &v18);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v16;
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, *(_DWORD *)(v12 + 16), (__int64)&Size);
        if ( SetBootStatusData >= 0 && Size )
          memmove(*((void **)v22 + 1), Src, Size);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = Size;
      }
    }
  }
LABEL_25:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v25 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
