/*
 * XREFs of EtwpCreateUmReplyObject @ 0x14078BE14
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x140695054 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rdi
  int v8; // r9d
  int Object; // ebx
  PVOID NewObject; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v12[3]; // [rsp+60h] [rbp+Fh] BYREF
  int v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+7Ch] [rbp+2Bh]
  __int128 v15; // [rsp+80h] [rbp+2Fh]

  v14 = 0;
  NewObject = 0LL;
  v12[1] = 0LL;
  v12[2] = 0LL;
  v12[0] = 48LL;
  v13 = 64;
  v15 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(64LL, 72LL, 1903653957LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    LOBYTE(v8) = 1;
    Object = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v12, v8);
    if ( Object < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      memset(0LL, 0, 0x70uLL);
      MEMORY[0x62] = 4;
      MEMORY[0x30] = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      MEMORY[0x20] = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      MEMORY[0] = EtwpReplyListHead;
      MEMORY[8] = &EtwpReplyListHead;
      *(_QWORD *)(EtwpReplyListHead + 8) = 0LL;
      EtwpReplyListHead = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      MEMORY[0x18] = 16LL;
      MEMORY[0x10] = 16LL;
      _InterlockedOr16((volatile signed __int16 *)0x62, 0x80u);
      Object = ObInsertObject(0LL, 0LL, 0x804u, 1u, &NewObject, Handle);
      if ( Object >= 0 )
        *a3 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Object;
}
