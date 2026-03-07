__int64 __fastcall AlpcpCancelMessagesByRequestor(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR *a3,
        int a4,
        __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v9; // r14
  ULONG_PTR v10; // rcx
  ULONG_PTR v11; // rdi
  char v12; // al
  __int64 v13; // rdx
  volatile signed __int64 *v14; // r14
  ULONG_PTR v15; // rcx
  ULONG_PTR *i; // rax
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebp
  int v24; // ebp
  volatile signed __int64 *v25; // rdi
  ULONG_PTR v28; // [rsp+80h] [rbp+18h]

  v6 = 0;
  v9 = a1;
  if ( a4 == 1 || a4 == 2 )
  {
    v10 = (ULONG_PTR)(a2 + 17);
  }
  else if ( a4 == 3 )
  {
    v10 = (ULONG_PTR)(a2 + 22);
  }
  else
  {
    v10 = (ULONG_PTR)(a2 + 25);
  }
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = *a3;
  while ( (ULONG_PTR *)v11 != a3 )
  {
    v28 = v11;
    if ( *(_QWORD *)(v11 + 24) == v9 || (*(_DWORD *)(v11 + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(v11);
      v12 = AlpcpTryLockForCachedReferenceBlob(v11);
      v13 = 0LL;
      if ( v12 )
      {
        if ( *(_QWORD *)(v11 + 24) != v9 )
        {
          --*(_WORD *)(v11 - 30);
          AlpcpUnlockMessage(v11);
          goto LABEL_10;
        }
        v17 = 0;
LABEL_36:
        if ( !*(_QWORD *)(v11 + 64) )
        {
          v18 = *(_DWORD *)(v11 + 40);
          if ( (v18 & 0x80u) == 0 )
          {
            v19 = *(_QWORD *)(v11 + 32);
            v20 = v18 | 0x80;
            *(_BYTE *)(v11 + 244) = 0;
            *(_WORD *)(v11 + 244) |= 0xCu;
            *(_DWORD *)(v11 + 40) = v20;
            *(_DWORD *)(v11 + 240) = 2621440;
            if ( v19 )
            {
              if ( _InterlockedExchange64((volatile __int64 *)(v19 + 1400), 0LL) == v11 )
              {
                KeReleaseSemaphoreEx(*(_QWORD *)(v11 + 32) + 1240LL, 1u, 1);
                *(_WORD *)(v11 - 30) -= 3;
                *(_QWORD *)(v11 + 32) = 0LL;
                goto LABEL_44;
              }
            }
            else if ( (v20 & 0x200) == 0 )
            {
              v13 = a5;
              *(_QWORD *)(v11 + 88) = *(_QWORD *)(a5 + 8);
              *(_QWORD *)(v11 + 80) = a5;
              **(_QWORD **)(a5 + 8) = v11 + 80;
              *(_QWORD *)(a5 + 8) = v11 + 80;
              goto LABEL_44;
            }
            --*(_WORD *)(v11 - 30);
          }
        }
LABEL_44:
        AlpcpReleaseMessageAttributesOnCancel(v11, v13);
        *(_DWORD *)(v11 + 40) |= 0x200u;
        *(_WORD *)(v11 + 244) &= ~0x2000u;
        AlpcpClearOwnerPortMessage(v11);
        AlpcpTransferQuotaMessage(v11);
        v21 = *(_QWORD *)(v11 + 208);
        if ( v21 )
        {
          PsReleaseProcessWakeCounter(v21);
          *(_QWORD *)(v11 + 208) = 0LL;
        }
        v22 = *(_QWORD *)(v11 + 216);
        if ( v22 )
        {
          PsReleaseProcessWakeCounter(v22);
          *(_QWORD *)(v11 + 216) = 0LL;
        }
        if ( v17 )
          v11 = *a3;
        else
          v11 = *(_QWORD *)v11;
        AlpcpUnlockMessage(v28);
        v9 = a1;
      }
      else
      {
        if ( a4 == 1 || a4 == 2 )
        {
          v14 = a2 + 17;
        }
        else if ( a4 == 3 )
        {
          v14 = a2 + 22;
        }
        else
        {
          v14 = a2 + 25;
        }
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        v6 = 1;
        AlpcpLockForCachedReferenceBlob(v11);
        if ( a4 == 1 || a4 == 2 )
        {
          v15 = (ULONG_PTR)(a2 + 17);
        }
        else if ( a4 == 3 )
        {
          v15 = (ULONG_PTR)(a2 + 22);
        }
        else
        {
          v15 = (ULONG_PTR)(a2 + 25);
        }
        ExAcquirePushLockExclusiveEx(v15, 0LL);
        v9 = a1;
        if ( *(_QWORD *)(v11 + 24) == a1 )
        {
          for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
          {
            if ( i == (ULONG_PTR *)v11 )
            {
              v13 = 0LL;
              v17 = 1;
              goto LABEL_36;
            }
          }
        }
        --*(_WORD *)(v11 - 30);
        AlpcpUnlockMessage(v11);
        v11 = *a3;
      }
    }
    else
    {
LABEL_10:
      v11 = *(_QWORD *)v11;
    }
  }
  v23 = a4 - 1;
  if ( v23 && (v24 = v23 - 1) != 0 )
  {
    if ( v24 == 1 )
      v25 = a2 + 22;
    else
      v25 = a2 + 25;
  }
  else
  {
    v25 = a2 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v25);
  KeAbPostRelease((ULONG_PTR)v25);
  return v6;
}
