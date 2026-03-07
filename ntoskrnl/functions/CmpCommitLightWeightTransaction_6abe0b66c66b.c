__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  signed __int32 v3; // eax
  int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v18[0] = 0LL;
  CmpInitializeDelayDerefContext(v18);
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v4 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 16);
    if ( v5 )
    {
      v2 = 1;
      CmpLockRegistryExclusive();
    }
    v4 = CmpPrepareLightWeightTransaction(v5, v18);
    if ( v4 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare((__int64)v5, v6, (__int64)v18);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v17, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v4 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v5, v18);
        if ( v2 )
        {
          CmpCleanupLightWeightPrepare((__int64)v5, v7, (__int64)v18);
          CmpDrainDelayDerefContext((_QWORD **)v18);
          CmpUnlockRegistry(v9, v8, v10, v11);
          v2 = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            CmpCleanupLightWeightTransaction(v5, 4);
        }
        v4 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        CmpAbortLightWeightTransaction(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v17, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v18);
      CmpUnlockRegistry(v13, v12, v14, v15);
    }
  }
  return (unsigned int)v4;
}
