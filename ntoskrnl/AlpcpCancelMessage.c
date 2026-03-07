__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  __int64 v5; // r14
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // ebp
  BOOL v12; // r15d
  __int64 *v13; // r14
  ULONG_PTR v14; // rcx
  __int64 *v15; // r12
  int v16; // ebp
  __int64 *v17; // r14
  int v18; // eax
  unsigned int v19; // r12d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r13d
  int v25; // eax
  volatile signed __int64 *v26; // rbp
  int v27; // eax
  signed __int32 v29[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  unsigned int v31; // [rsp+80h] [rbp+8h]
  __int64 v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  v32 = v5;
  v7 = v3 & 7;
  v8 = v3 & 0x80;
  v31 = v3 & 7;
  v9 = 0LL;
  v10 = 0LL;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v11 = v3 & 0x78;
    v12 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v12) = v11 == 16;
      if ( v8 )
        goto LABEL_44;
      v15 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v15 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 16 )
        {
          v9 = *v15;
          v10 = v15[1];
        }
        else
        {
          v9 = a1;
          v10 = a1;
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15 - 2);
      v14 = (ULONG_PTR)(v15 - 2);
    }
    else
    {
      LOBYTE(v12) = v11 == 8;
      if ( v8 )
        goto LABEL_44;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 8 )
        {
          v9 = v13[2];
          v10 = v9;
        }
        else
        {
          v9 = *v13;
          v10 = v13[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
    }
    KeAbPostRelease(v14);
    goto LABEL_28;
  }
  v16 = v3 & 0x78;
  v12 = v16 == 8;
  if ( !v8 && v5 )
  {
    v17 = *(__int64 **)(a2 + 184);
    if ( v17 )
    {
      ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v16 == 8 )
        {
          v9 = v17[2];
          v10 = v9;
        }
        else
        {
          v9 = *v17;
          v10 = v17[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v17 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v17 - 2);
      KeAbPostRelease((ULONG_PTR)(v17 - 2));
      v12 = v16 == 8;
LABEL_28:
      v7 = v31;
      v5 = v32;
      LOBYTE(a3) = v33;
      goto LABEL_44;
    }
    v5 = v32;
  }
LABEL_44:
  if ( !v12 )
  {
    if ( v5 && ((_DWORD)v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v18 = 0;
      v19 = 0;
    }
    else
    {
      v18 = 1;
      v19 = 1073741870;
    }
    if ( (a3 & 1) != 0 && v18 )
      goto LABEL_90;
LABEL_59:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v7);
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v29, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v21 = *(_QWORD *)(a2 + 208);
    if ( v21 )
    {
      PsReleaseProcessWakeCounter(v21);
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v22 = *(_QWORD *)(a2 + 216);
    if ( v22 )
    {
      PsReleaseProcessWakeCounter(v22);
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v23 = *(_QWORD *)(a2 + 32);
    if ( v23 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v23 + 1400), 0LL) == a2 )
      {
        *(_WORD *)(a2 - 30) -= 2;
        v30 = 0LL;
        v29[8] = 0;
        *(_QWORD *)(a2 + 32) = 0LL;
        KeReleaseSemaphoreEx(v23 + 1240, 1u, 1);
      }
    }
    else if ( v9 )
    {
      v24 = v33;
      if ( v10 )
      {
        if ( !v12 && (v33 & 2) == 0 )
        {
LABEL_87:
          v27 = *(_DWORD *)(a2 + 40);
          if ( (v27 & 0x2000) != 0 && (v27 & 7) == 3 )
            AlpcpRemoveMessageFromPendingQueue(a2);
          goto LABEL_90;
        }
        ExAcquirePushLockSharedEx(v9 + 352, 0LL);
        if ( (*(_DWORD *)(v9 + 416) & 0x40) != 0 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v9 + 352));
          KeAbPostRelease(v9 + 352);
          v5 = v32;
        }
        else
        {
          ++*(_WORD *)(a2 - 30);
          *(_QWORD *)(a2 + 64) = v9;
          *(_QWORD *)(a2 + 56) = v10;
          *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
          *(_QWORD *)(a2 + 128) = *(_QWORD *)(v10 + 56);
          AlpcpInsertMessageCanceledQueue(v9, a2);
          AlpcpSignalPortAndUnlock(v9);
          v5 = v32;
        }
      }
LABEL_67:
      if ( v12 && (v24 & 0x10000) != 0 && v5 )
      {
        v25 = *(_DWORD *)(a2 + 40) & 7;
        if ( v25 == 3 )
        {
          AlpcpRemoveMessageFromPendingQueue(a2);
        }
        else
        {
          if ( v25 == 4 )
          {
            v26 = (volatile signed __int64 *)(v5 + 200);
            ExAcquirePushLockExclusiveEx(v5 + 200, 0LL);
            --*(_DWORD *)(v5 + 460);
            *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
            *(_QWORD *)(a2 + 16) = 0LL;
            **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
            *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v26 = (volatile signed __int64 *)(v5 + 136);
            ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
            AlpcpRemoveMessagePort(v5, a2);
          }
          if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26);
          KeAbPostRelease((ULONG_PTR)v26);
          --*(_WORD *)(a2 - 30);
        }
      }
      goto LABEL_87;
    }
    v24 = v33;
    goto LABEL_67;
  }
  if ( !v5 || (_DWORD)v7 != 3 || (v20 = 1, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v20 = 0;
  v19 = 259;
  if ( (a3 & 1) == 0 || v20 )
    goto LABEL_59;
LABEL_90:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v9 )
    ObfDereferenceObject((PVOID)v9);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v19;
}
