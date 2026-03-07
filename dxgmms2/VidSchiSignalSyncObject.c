void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+48h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a2 + 8LL * a1);
  if ( a5 )
  {
    v6 = *(_DWORD *)(v5 + 48);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v19 = *(_DWORD *)(v5 + 64);
        if ( v19 >= *(_DWORD *)(v5 + 60) )
          WdLogSingleEntry1(3LL, *(_QWORD *)(v5 + 16));
        else
          *(_DWORD *)(v5 + 64) = v19 + 1;
      }
      else if ( v6 == 2 )
      {
        if ( *(_BYTE *)(v5 + 27) )
        {
          v14 = *(_QWORD *)(v5 + 208);
          v15 = *(_QWORD *)(a4 + 8LL * a1);
          memset(&v21, 0, sizeof(v21));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 8), &v21);
          v16 = *(_QWORD *)(v14 + 40);
          if ( v16 >= v15 )
            WdLogSingleEntry3(3LL, *(_QWORD *)(v5 + 16), v16, v15);
          else
            *(_QWORD *)(v14 + 40) = v15;
          p_LockHandle = &v21;
          goto LABEL_12;
        }
        v17 = *(_QWORD *)(v5 + 64);
        v18 = *(_QWORD *)(a4 + 8LL * a1);
        if ( v17 >= v18 )
          WdLogSingleEntry3(3LL, *(_QWORD *)(v5 + 16), v17, v18);
        else
          *(_QWORD *)(v5 + 64) = v18;
      }
      else if ( (unsigned int)(v6 - 4) <= 1 && !*(_BYTE *)(v5 + 28) )
      {
        if ( *(_BYTE *)(v5 + 27) )
        {
          v7 = *(_QWORD *)(v5 + 208);
          v8 = *(_QWORD *)(a4 + 8LL * a1);
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 8), &LockHandle);
          v9 = *(_QWORD *)(v7 + 40);
          if ( v9 >= v8 )
            WdLogSingleEntry3(3LL, *(_QWORD *)(v5 + 16), v9, v8);
          else
            *(_QWORD *)(v7 + 40) = v8;
          p_LockHandle = &LockHandle;
LABEL_12:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
          goto LABEL_40;
        }
        v11 = (unsigned __int64 *)(a4 + 8LL * a1);
        if ( (a3 & 4) == 0 )
        {
          v12 = *v11;
          v13 = *(_QWORD *)(v5 + 88);
          if ( *(_BYTE *)(v5 + 29) )
          {
            if ( v12 < v13 )
            {
              WdLogSingleEntry2(3LL, *v11, v13);
LABEL_21:
              WdLogSingleEntry3(3LL, *(_QWORD *)(v5 + 16), *(_QWORD *)(v5 + 88), *v11);
LABEL_25:
              WdLogSingleEntry4(4LL, v5, **(_QWORD **)(v5 + 64), *v11, *(unsigned __int8 *)(v5 + 28));
              goto LABEL_40;
            }
            if ( v12 == v13 )
              WdLogSingleEntry1(3LL, *v11);
          }
          else
          {
            if ( (int)v13 - (int)v12 > 0 )
            {
              WdLogSingleEntry2(3LL, (unsigned int)v12, (unsigned int)v13);
              goto LABEL_21;
            }
            if ( (_DWORD)v13 == (_DWORD)v12 )
              WdLogSingleEntry1(3LL, (unsigned int)v12);
          }
        }
        *(_QWORD *)(v5 + 88) = *v11;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v5 + 64) )
        WdLogSingleEntry1(3LL, *(_QWORD *)(v5 + 16));
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
LABEL_40:
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 36));
}
