/*
 * XREFs of PopBootStatSet @ 0x14073D9E0
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
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  int SetBootStatusData; // esi
  __int64 j; // r15
  __int64 v9; // r11
  char *v10; // rsi
  size_t v12; // rbx
  size_t v13; // rax
  __int64 i; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v21; // [rsp+38h] [rbp-50h] BYREF
  _DWORD Handle[3]; // [rsp+3Ch] [rbp-4Ch] BYREF
  char *v23; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  int *v25; // [rsp+58h] [rbp-30h]
  char v27; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v21 = 0;
  Size = 0;
  Pool2 = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_12;
    v12 = pullResult;
    Pool2 = (char *)ExAllocatePool2(256LL, pullResult, 544040269LL);
    v23 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_12;
    }
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      if ( (v13 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + v12 > 0x7FFFFFFF0000LL || v13 + v12 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v12);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v15 = &Pool2[24 * i];
      v25 = (int *)v15;
      v16 = *((unsigned int *)v15 + 4);
      if ( (_DWORD)v16 )
      {
        v17 = *((_QWORD *)v15 + 1);
        v18 = v17 + v16;
        if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v23 = Pool2;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&Handle[1]);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v6) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(*(_QWORD *)&Handle[1], v6, 2LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v25 = (int *)&Pool2[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*v25, &v21, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v9 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v10 = (char *)&PopBootStat + v21;
        memmove(v10, *(const void **)(v9 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(*(HANDLE *)&Handle[1], 0, *v25, v10, Size, Handle);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = Handle[0];
      }
    }
  }
LABEL_12:
  if ( *(_QWORD *)&Handle[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Handle[1]);
  if ( v27 )
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
