__int64 __fastcall EtwpQueueNotification(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int16 v4; // r15
  char v8; // r13
  __int64 v9; // r14
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  struct _KEVENT *v16; // rcx
  void *v18; // rbx
  unsigned int i; // r8d

  v3 = 0;
  v4 = *(_WORD *)(a3 + 98) & 0x100;
  v8 = 1;
  v9 = EtwpAddDataSource(a1);
  if ( v9 && (Pool2 = ExAllocatePool2(64LL, 56LL, 1920431173LL), (v11 = (_QWORD *)Pool2) != 0LL) )
  {
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_WORD *)(Pool2 + 48) = *(_WORD *)(a3 + 96);
    *(_DWORD *)(Pool2 + 52) = 1;
    if ( *(_BYTE *)(a2 + 12) )
    {
      v18 = *(void **)(a2 + 24);
      *(_DWORD *)(Pool2 + 52) |= 2u;
      ObfReferenceObject(v18);
      v11[4] = v18;
      v11[5] = PsChargeProcessWakeCounter(a1);
      for ( i = 0; i < 4; ++i )
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * i + 48), (signed __int64)v11, 0LL) )
        {
          *((_WORD *)v11 + 25) = i;
          v3 = 0;
          goto LABEL_4;
        }
      }
      v3 = -1073741823;
      EtwpReleaseQueueEntry(v11);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v13 = (_QWORD *)(v9 + 24);
      v14 = *(_QWORD **)(v9 + 24);
      if ( v14 != (_QWORD *)(v9 + 24) )
      {
        while ( (v4 != 0) != (*(_BYTE *)(v14[3] + 99LL) & 1) )
        {
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            goto LABEL_5;
        }
        v8 = 0;
      }
LABEL_5:
      v15 = *(_QWORD **)(v9 + 32);
      if ( (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v11 = v13;
      v11[1] = v15;
      *v15 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v8 )
      {
        if ( v4 )
          v16 = *(struct _KEVENT **)(v9 + 8);
        else
          v16 = *(struct _KEVENT **)v9;
        if ( v16 )
          KeSetEvent(v16, 1, 0);
      }
      ExReleasePushLockEx((__int64 *)(v9 + 16), 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
