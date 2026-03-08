/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x14085BBF8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140780E98 (ExpGetSystemFirmwareTableInformation.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  int SystemFirmwareTableInformation; // ecx
  int v8; // edi
  unsigned int v10; // edi
  __int64 Pool2; // rax
  struct _KTHREAD *v12; // rax
  SIZE_T v13; // r15
  _QWORD *v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rdi
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int Length_4; // [rsp+2Ch] [rbp-9Ch] BYREF
  SIZE_T v22; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+38h] [rbp-90h]
  volatile void *Address; // [rsp+40h] [rbp-88h]
  volatile void *v25; // [rsp+48h] [rbp-80h]
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-70h]
  __int128 Src; // [rsp+78h] [rbp-50h] BYREF
  int v29; // [rsp+88h] [rbp-40h]

  v25 = 0LL;
  LODWORD(v22) = 0;
  Src = 0LL;
  v29 = 0;
  Address = 0LL;
  Length_4 = 0;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
    v8 = -1073741811;
    goto LABEL_11;
  }
  LODWORD(v22) = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v25 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v8 = -1073741637;
    goto LABEL_11;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || (_DWORD)v22 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    *(_QWORD *)&Src = 0x141435049LL;
    *((_QWORD *)&Src + 1) = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)&Src, 0, 0x14u, &Length_4);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v8 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v8 = -1073741701;
      goto LABEL_11;
    }
    v10 = Length_4;
    Pool2 = ExAllocatePool2(64LL, Length_4, 1413632087LL);
    v4 = (void *)Pool2;
    v23 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    *(_DWORD *)Pool2 = 1094930505;
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)(Pool2 + 8) = 1413632087;
    *(_DWORD *)(Pool2 + 12) = v10 - 16;
    v8 = ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v10, &Length_4);
    if ( v8 < 0 )
      goto LABEL_11;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v8 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
      v23 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  v13 = (unsigned int)v22;
  if ( (v22 & 1) == 0 )
  {
    v14 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v15 = *((unsigned __int16 *)ExpPlatformBinaryTableInformation + 33), (v15 & 1) != 0)
      || (v16 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v8 = -1073741701;
      goto LABEL_50;
    }
    v17 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v17 > Length || v15 > (unsigned int)v22 )
    {
      v8 = -1073741789;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v14 + 33);
      goto LABEL_50;
    }
    NumberOfBytes = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v18 = (void *)MmMapIoSpaceEx(v16, v17, 2u);
    BaseAddress = v18;
    if ( !v18 )
    {
      v8 = -1073741670;
      goto LABEL_50;
    }
    *(_QWORD *)a1 = v14[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v18, *((unsigned int *)v14 + 13));
    if ( *((_WORD *)v14 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v25, v13, 2u);
      memmove((void *)v25, (char *)v14 + 68, *((unsigned __int16 *)v14 + 33));
    }
    v8 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v8 = -1073741811;
LABEL_50:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_12:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v8;
}
