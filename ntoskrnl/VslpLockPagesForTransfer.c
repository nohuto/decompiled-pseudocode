__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, unsigned int a3, int a4, unsigned int a5)
{
  int v5; // r11d
  __int64 v6; // r9
  struct _MDL *v7; // r10
  struct _MDL *Pool2; // rdi
  unsigned int v9; // r14d
  struct _MDL *v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  int v14; // r14d
  struct _MDL *Next; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _MDL *v17; // [rsp+20h] [rbp-48h]
  struct _MDL *v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Pool2 = 0LL;
  v9 = a5;
  if ( (a5 & 0x13) != 0 )
  {
    if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    {
      v12 = -1073741811;
      goto LABEL_20;
    }
    v7 = a2;
  }
  v10 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v11 = 8 * (((unsigned int)v6 + (unsigned __int64)((unsigned __int16)v7 & 0xFFF) + 4095) >> 12) + 48;
    if ( (v9 & 1) != 0 )
      v11 = 4096;
    if ( (v9 & 4) != 0 )
      v11 = (v11 + 4095) & 0xFFFFF000;
    if ( (v9 & 0x20) != 0 )
    {
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v11, 1416850774LL);
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (((((unsigned __int16)v7 & 0xFFF) + 4095LL + (unsigned __int64)(unsigned int)v6) >> 12) + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v7 & 0xFFF;
      Pool2->ByteCount = v6;
      if ( (v9 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( (_DWORD)v6 )
      {
        MiProbeAndLockPages(Pool2, 0, v5 != 0);
      }
      if ( (v9 & 0x10) == 0 )
      {
        Pool2->Next = v10;
        v10 = Pool2;
        v17 = Pool2;
        v7 = Pool2;
        v19 = Pool2;
        v6 = v11;
        v20 = v11;
        if ( v11 > 0x1000 )
          break;
      }
      v12 = VslpLockMdlForTransfer(a1, Pool2, v9, v6);
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 64) |= 8u;
        return 0LL;
      }
      if ( (v9 & 0x10) == 0 )
        goto LABEL_20;
      MmUnlockPages(Pool2);
      ExFreePoolWithTag(Pool2, 0);
      v10 = v17;
LABEL_34:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VslpReservedTransferLock, 0LL);
      Pool2 = (struct _MDL *)VslpReservedTransferMdl;
      v9 |= 0x20u;
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    v5 = a4;
  }
  if ( (v9 & 0x10) != 0 )
    goto LABEL_34;
  Pool2 = v10;
  v12 = -1073741670;
LABEL_20:
  v14 = v9 & 0x20;
  while ( Pool2 )
  {
    Next = Pool2->Next;
    Pool2->Next = 0LL;
    if ( (Pool2->MdlFlags & 2) != 0 )
      MmUnlockPages(Pool2);
    if ( !v14 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = Next;
  }
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
