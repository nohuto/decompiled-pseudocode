__int64 __fastcall ExpAllocateHandleTableEntry(__int64 a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r14d
  unsigned int v6; // ecx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  char HandleTableEntrySlow; // di
  int i; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 44);
  if ( (v2 & 4) == 0 )
  {
    if ( (v2 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v6 = ExpFreeListCount;
    for ( i = ExpFreeListCount; ; v6 = i )
    {
      v7 = *(_DWORD *)a1;
      v8 = 0;
      v9 = Number;
      do
      {
        v10 = a1 + ((v9 + 1LL) << 6);
        if ( *(_QWORD *)(v10 + 8) )
        {
          ExAcquirePushLockExclusiveEx(a1 + ((v9 + 1LL) << 6), 0LL);
          v11 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            *(_QWORD *)(v10 + 8) = v12;
            if ( !v12 )
              *(_QWORD *)(v10 + 16) = 0LL;
            v13 = ++*(_DWORD *)(v10 + 24);
            if ( v13 > *(_DWORD *)(v10 + 28) )
              *(_DWORD *)(v10 + 28) = v13;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + ((v9 + 1LL) << 6)));
          KeAbPostRelease(a1 + ((v9 + 1LL) << 6));
          if ( v11 )
          {
            result = v11;
            *a2 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)(v11 - (v11 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            return result;
          }
          v6 = i;
        }
        v15 = v9 + 1;
        v16 = 0;
        ++v8;
        if ( v15 != v6 )
          v16 = v15;
        v9 = v16;
      }
      while ( v8 < v6 );
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
      if ( v7 == *(_DWORD *)a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)a1, a1 + ((Number + 1LL) << 6));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
      KeAbPostRelease(a1 + 56);
      if ( !HandleTableEntrySlow )
        break;
    }
  }
  return 0LL;
}
