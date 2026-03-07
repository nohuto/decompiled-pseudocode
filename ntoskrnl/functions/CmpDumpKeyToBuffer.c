__int64 __fastcall CmpDumpKeyToBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  int IsKeyBodyEligibleForDump; // edi
  __int64 v10; // rsi
  unsigned int v11; // eax
  signed __int64 *v13; // rsi
  __int64 v14; // rdi
  signed __int64 *v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rdx
  signed __int64 v18; // rtt
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD v21[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+44h] [rbp-34h]

  v21[1] = 0;
  v24 = 0;
  CmpLockRegistry();
  v7 = *(_QWORD *)(a1 + 8);
  v8 = KeAbPreAcquire(v7 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v7 + 48), 0, v8, v7 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 56));
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v7);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v7 + 66) )
    {
      IsKeyBodyEligibleForDump = -1073741637;
    }
    else
    {
      CmSiRWLockAcquireExclusive((unsigned __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
      v10 = *(_QWORD *)(v7 + 32);
      v11 = *(_DWORD *)(v10 + 280) + 4096;
      if ( *a4 >= v11 )
      {
        v13 = (signed __int64 *)(v10 + 1784);
        v14 = KeAbPreAcquire((__int64)v13, 0LL);
        if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v13, 0, v14, (__int64)v13);
        if ( v14 )
          *(_BYTE *)(v14 + 18) = 1;
        IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v7 + 32), 3);
        v15 = (signed __int64 *)(*(_QWORD *)(v7 + 32) + 1784LL);
        _m_prefetchw(v15);
        v16 = *v15;
        v17 = *v15 - 16;
        if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v17 = 0LL;
        if ( (v16 & 2) != 0 || (v18 = *v15, v18 != _InterlockedCompareExchange64(v15, v17, v16)) )
          ExfReleasePushLock(v15);
        KeAbPostRelease((ULONG_PTR)v15);
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          v20 = *(_QWORD *)(v7 + 32);
          v23 = *a4;
          v21[0] = 0;
          v22 = a3;
          IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(v20, v19, v21);
          if ( IsKeyBodyEligibleForDump >= 0 )
          {
            CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
            CmpUnlockKcb(v7);
            CmpUnlockRegistry();
            return 0;
          }
        }
      }
      else
      {
        *a4 = v11;
        IsKeyBodyEligibleForDump = -1073741789;
      }
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
    }
  }
  CmpUnlockKcb(v7);
  CmpUnlockRegistry();
  return (unsigned int)IsKeyBodyEligibleForDump;
}
