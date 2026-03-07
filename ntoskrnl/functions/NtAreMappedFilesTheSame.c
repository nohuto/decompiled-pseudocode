__int64 __fastcall NtAreMappedFilesTheSame(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  signed __int64 *v10; // r14
  __int64 *v11; // r12
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // edi
  int v17; // ebx
  __int64 v19; // rbx
  int v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx(a1, 2, &v20);
  v6 = v5;
  if ( !v5 )
    return 3221225793LL;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx(a2, 2, &v20);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    return 3221225793LL;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    return 0LL;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v6) || (unsigned int)MiVadIsMetadataBitmap(v8) )
  {
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    return 3221225496LL;
  }
  else
  {
    if ( a1 <= a2 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v8);
      MiLockVadShared((__int64)CurrentThread, v6);
      v10 = (signed __int64 *)(v8 + 40);
      v19 = KeAbPreAcquire(v8 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 40), 0, v19, v8 + 40);
      if ( v19 )
        *(_BYTE *)(v19 + 18) = 1;
    }
    else
    {
      v9 = KeAbPreAcquire(v6 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 40), 0, v9, v6 + 40);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v10 = (signed __int64 *)(v8 + 40);
    }
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v16 = -1073741503;
      v17 = -1073741503;
    }
    else if ( !_bittest((const signed __int32 *)(v6 + 48), 0x15u)
           && !_bittest((const signed __int32 *)(v8 + 48), 0x15u)
           && (v11 = *(__int64 **)(v6 + 72)) != 0LL
           && (v12 = *(__int64 **)(v8 + 72)) != 0LL
           && (v13 = *v11) != 0
           && (v14 = *v12) != 0
           && *(_QWORD *)(v13 + 64)
           && *(_QWORD *)(v14 + 64) )
    {
      v15 = MiReferenceControlAreaFile(v14);
      v16 = -1073741612;
      v17 = -1073741612;
      if ( v13 == *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) )
      {
        v16 = 0;
        v17 = 0;
      }
      MiDereferenceControlAreaFile(v14, v15);
    }
    else
    {
      v17 = -1073741800;
      v16 = -1073741800;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v10);
      v16 = v17;
    }
    KeAbPostRelease((ULONG_PTR)v10);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    return v16;
  }
}
