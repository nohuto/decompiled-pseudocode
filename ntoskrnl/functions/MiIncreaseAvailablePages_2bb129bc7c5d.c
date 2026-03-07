unsigned __int64 __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed int v4; // ebp
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbx
  struct _KEVENT *v14; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 != 1 )
  {
    v4 = 0;
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17216), a2);
    v6 = a2 + v5;
    v7 = 0;
    if ( a2 + v5 < 0xA0 )
    {
      if ( v6 < 0x22 )
        goto LABEL_9;
    }
    else if ( v5 < 0xA0 )
    {
      v7 = 2;
    }
    if ( v5 < 0x22 )
      v7 |= 1u;
    if ( v5 < 0x420 && v6 >= 0x420 )
      v7 |= 4u;
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 15872), &LockHandle);
      v14 = (struct _KEVENT *)(a1 + 15904);
      do
      {
        if ( _bittest(&v7, v4) )
        {
          KeSetEvent(v14 - 1, 0, 0);
          ++v14->Header.LockNV;
        }
        ++v4;
        v14 = (struct _KEVENT *)((char *)v14 + 32);
      }
      while ( v4 < 3 );
      KxReleaseQueuedSpinLock(&LockHandle);
    }
LABEL_9:
    v8 = *(_QWORD *)(a1 + 16160);
    if ( v5 <= v8 && v6 > v8 )
      return MiUpdateAvailableEvents(a1, a2, a3);
    result = *(_QWORD *)(a1 + 16152);
    if ( v5 <= result && v6 > result )
      return MiUpdateAvailableEvents(a1, a2, a3);
    return result;
  }
  v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 17216));
  result = 1056LL;
  if ( v10 <= 0x420 )
  {
    switch ( v10 )
    {
      case 0xA0uLL:
        v12 = 1LL;
        break;
      case 0x420uLL:
        v12 = 2LL;
        break;
      case 0x22uLL:
        v12 = 0LL;
        break;
      default:
        goto LABEL_13;
    }
    v13 = 32 * v12;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 15872), &LockHandle);
    KeSetEvent((PRKEVENT)(v13 + a1 + 15880), 0, 0);
    ++*(_DWORD *)(v13 + a1 + 15904);
    result = KxReleaseQueuedSpinLock(&LockHandle);
  }
LABEL_13:
  v11 = v10 - 1;
  if ( v11 == *(_QWORD *)(a1 + 16152) || v11 == *(_QWORD *)(a1 + 16160) )
    return MiUpdateAvailableEvents(a1, a2, a3);
  return result;
}
