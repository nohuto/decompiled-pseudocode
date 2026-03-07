char __fastcall ObpRegisterObject(__int64 a1)
{
  struct _KTHREAD *v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r9
  __int64 Pool2; // rax
  unsigned int v6; // r8d
  _QWORD *v7; // rcx
  char *v8; // rdi
  char v9; // al
  char v10; // cl
  char *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_140D1EAD0 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  LOBYTE(v2) = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v13) >= 0 )
    {
      v4 = v13;
      if ( v13 )
        goto LABEL_12;
      Pool2 = ExAllocatePool2(64LL, 6136LL, 1951556175LL);
      v13 = (char *)Pool2;
      v4 = (char *)Pool2;
      if ( Pool2 )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        v7 = ObpObjectTable;
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)ObpObjectTable + v6);
        v7[v6] = Pool2;
        *(_WORD *)(Pool2 + 34) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v4 = a1;
        v8 = v13;
        RtlStringCbCopyA(
          v13 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors);
        *((_WORD *)v8 + 16) = 0;
        memset(v8 + 36, 0, 12LL * *((unsigned __int16 *)v8 + 17));
        v9 = ObpTraceFlags;
        v10 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v10;
        if ( (v9 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v10 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v2 = KeGetCurrentThread();
    if ( v2->SpecialApcDisable++ == -1 )
    {
      v2 = (struct _KTHREAD *)((char *)v2 + 152);
      if ( *(struct _KTHREAD **)&v2->Header.Lock != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
