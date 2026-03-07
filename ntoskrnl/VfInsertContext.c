__int64 __fastcall VfInsertContext(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int v4; // r8d
  volatile signed __int64 *ContextPointer; // rsi
  void *ContextTable; // rax
  volatile signed __int64 v7; // rax
  __int64 v8; // rcx

  v1 = 0;
  if ( !ViVerifierEnabled )
    return 3221225473LL;
  if ( !(unsigned __int8)ViIsContextIdValid(*a1, a1[1]) )
    return 3221225485LL;
  ContextPointer = (volatile signed __int64 *)ViGetContextPointer(*((_QWORD *)a1 + 1), v4);
  if ( !ContextPointer )
    return 3221225659LL;
  while ( !(unsigned __int8)ViLockContextPointer(ContextPointer) )
  {
    ContextTable = (void *)ViAllocateContextTable(*a1);
    if ( !ContextTable )
      return 3221225626LL;
    if ( !_InterlockedCompareExchange64(ContextPointer, (signed __int64)ContextTable, 0LL) )
      break;
    ViFreeContextTable(ContextTable);
  }
  v7 = *ContextPointer;
  v8 = a1[1];
  if ( *(_QWORD *)(*ContextPointer + 8 * v8 + 8) )
  {
    v1 = -1073741270;
  }
  else
  {
    *(_QWORD *)(v7 + 8 * v8 + 8) = a1;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 4));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
  }
  ViUnlockContextPointer(ContextPointer);
  return v1;
}
