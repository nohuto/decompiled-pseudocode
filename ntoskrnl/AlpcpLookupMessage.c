__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  char PreviousMode; // r12
  __int64 *v11; // rdi
  __int64 v12; // r8
  ULONG_PTR HandlePointer; // rax
  ULONG_PTR v14; // rbx
  signed __int64 BugCheckParameter4; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rdi
  signed __int32 v21; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 < 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      if ( !v18 )
        return 3221226224LL;
      v19 = AlpcReferenceBlobByHandle((_QWORD *)(v18 + 40), a2 & 0x7FFFFFFF, AlpcReserveType);
      v20 = v19;
      if ( !v19 )
        return 3221226224LL;
      v14 = *(_QWORD *)(v19 + 24);
      AlpcpLockForCachedReferenceBlob(v14);
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 40), 1, 0) )
      {
        *(_DWORD *)(v14 + 264) &= ~0x80000000;
        do
          v21 = _InterlockedIncrement(&AlpcpNextCallbackId);
        while ( !v21 );
        *(_DWORD *)(v14 + 272) = v21;
        goto LABEL_23;
      }
      AlpcpUnlockMessage(v14);
      AlpcpDereferenceBlobEx(v20, 1);
      return 3221227272LL;
    }
    return 3221227266LL;
  }
  if ( (a2 & 0xFC000000) != 0 )
  {
    if ( !AlpcpSecondaryMessageTables )
      return 3221227266LL;
    v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
  }
  else
  {
    v8 = AlpcMessageTable;
  }
  if ( !v8 )
    return 3221227266LL;
  v9 = a2 & 0x3FFFFFF;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0x3FC) == 0 || (v11 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, (unsigned int)v9)) == 0LL )
  {
LABEL_29:
    ExHandleLogBadReference(v8, v9, PreviousMode);
    return 3221227266LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
        break;
      if ( !v12 )
        goto LABEL_29;
      ExpBlockOnLockedHandleEntry(v8, v11, v12);
    }
  }
  while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
  HandlePointer = ExGetHandlePointer(v11);
  v14 = HandlePointer;
  if ( *(_DWORD *)(HandlePointer + 264) != a2
    || a3 && *(_DWORD *)(HandlePointer + 272) != a3
    || !AlpcpReferenceBlob(HandlePointer) )
  {
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v22, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    return 3221227266LL;
  }
  ExAcquirePushLockExclusiveEx(v14 - 16, 0LL);
  *(_BYTE *)(v14 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v14, 0x26uLL, BugCheckParameter4);
  --*(_WORD *)(v14 - 30);
  _InterlockedExchangeAdd64(v11, 1uLL);
  _InterlockedOr(v22, 0);
  if ( *(_QWORD *)(v8 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
  if ( *(_DWORD *)(v14 + 264) != a2
    || a3 && *(_DWORD *)(v14 + 272) != a3
    || !*(_QWORD *)(v14 + 24) && !*(_QWORD *)(v14 + 16) )
  {
    AlpcpUnlockMessage(v14);
    return 3221227266LL;
  }
  if ( a1 )
  {
    if ( *(_QWORD *)(v14 + 184) == *(_QWORD *)(a1 + 16) || *(_QWORD *)(v14 + 192) == a1 )
    {
LABEL_23:
      *a5 = v14;
      return 0LL;
    }
  }
  else
  {
    v17 = *(_QWORD *)(v14 + 16);
    if ( v17 && *(_KPROCESS **)(v17 + 24) == KeGetCurrentThread()->ApcState.Process )
      goto LABEL_23;
  }
  AlpcpUnlockMessage(v14);
  return 3221225506LL;
}
