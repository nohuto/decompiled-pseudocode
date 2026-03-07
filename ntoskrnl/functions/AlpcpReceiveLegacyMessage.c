__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  char PreviousMode; // r12
  __int64 v8; // r13
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  unsigned int v13; // r12d
  ULONG_PTR v14; // rbx
  __int64 v15; // rdx
  void **v17; // rbx
  volatile signed __int64 *v18; // rsi
  char v19; // [rsp+30h] [rbp-68h]
  ULONG_PTR v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  void *v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+58h] [rbp-40h]
  __int64 *v25; // [rsp+A0h] [rbp+8h]
  __int64 *v26; // [rsp+B0h] [rbp+18h]

  LODWORD(v26) = a3;
  v25 = a1;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v19 = PreviousMode;
  v21 = 0LL;
  v8 = *a1;
  v23 = *a1;
  if ( PreviousMode )
  {
    LODWORD(v9) = a3;
    v10 = 0x7FFFFFFF0000LL;
    if ( a3 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v11 = a3;
      v21 = *(_QWORD *)v11;
      v9 = &v21;
      v26 = &v21;
    }
    if ( a2 )
    {
      AlpcpProbeForWriteMessageHeader(a2, 0LL);
      LODWORD(a1) = (_DWORD)v25;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a4;
      *(_QWORD *)v10 = *(_QWORD *)v10;
      LODWORD(v9) = (_DWORD)v26;
    }
  }
  else
  {
    PreviousMode = (CurrentThread->MiscFlags & 0x400) != 0;
    v19 = PreviousMode;
    LODWORD(v9) = a3;
  }
  v12 = 0LL;
  v22 = 0LL;
  if ( (*(_BYTE *)(v8 + 416) & 6) == 6 )
  {
    v17 = *(void ***)(v8 + 16);
    v18 = (volatile signed __int64 *)(v17 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
    v12 = *v17;
    v22 = v12;
    if ( v12 && ObReferenceObjectSafe((__int64)v12) )
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v17 - 2);
      KeAbPostRelease((ULONG_PTR)(v17 - 2));
      v8 = (__int64)v12;
      v23 = (__int64)v12;
      LODWORD(a1) = (_DWORD)v25;
      *v25 = (__int64)v12;
      LODWORD(v9) = (_DWORD)v26;
      goto LABEL_13;
    }
    if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17 - 2);
    KeAbPostRelease((ULONG_PTR)(v17 - 2));
    return 3221225527LL;
  }
  else
  {
    while ( 1 )
    {
LABEL_13:
      LOBYTE(CurrentThread) = PreviousMode;
      v13 = AlpcpReceiveMessagePort((_DWORD)a1, (_DWORD)CurrentThread, (_DWORD)v9, (unsigned int)&v20, 0);
      if ( v13 )
      {
        v20 = 0LL;
        goto LABEL_26;
      }
      v14 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        if ( *(_QWORD *)(v20 + 64) == v8 )
        {
          *(_QWORD *)(v20 + 64) = 0LL;
          *(_QWORD *)(v14 + 56) = 0LL;
        }
        AlpcpCancelMessage(v8, v14, 0x10000);
        v14 = 0LL;
        v20 = 0LL;
      }
      if ( v14 )
        break;
      PreviousMode = v19;
      LODWORD(a1) = (_DWORD)v25;
    }
    *(_QWORD *)(v14 + 200) = v24;
    if ( a2 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v14 + 240);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 256);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 272);
      if ( (*(_DWORD *)(v8 + 256) & 0x1000) != 0 )
        *(_WORD *)(a2 + 4) = *(_WORD *)(v14 + 244) & 0xC00F;
      v15 = a2 + 40;
      if ( *(_QWORD *)(v14 + 176) )
        AlpcpGetDataFromUserVaSafe(v14, v15);
      else
        AlpcpReadMessageData(v14, v15);
    }
    if ( a4 )
      *a4 = *(_QWORD *)(v14 + 120);
    if ( a2 )
    {
      AlpcpUnlockMessage(v14);
    }
    else
    {
      *(_QWORD *)(v14 + 200) = 0LL;
      AlpcpCancelMessage(v8, v14, 0x10000);
    }
LABEL_26:
    if ( v12 )
      ObfDereferenceObject(v12);
    return v13;
  }
}
