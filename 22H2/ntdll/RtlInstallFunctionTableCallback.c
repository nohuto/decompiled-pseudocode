/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800698D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlAvlInsertNodeEx @ 0x180069DE0 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x18009E020 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  int v32; // r8d
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  int v37; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v12, v13, v14);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v15 == -1 )
      goto LABEL_46;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( v10 + 136 >= 0xFF000 )
      goto LABEL_40;
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 136);
  v18 = Heap;
  if ( !Heap )
  {
LABEL_40:
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v34, v35, v36);
      v37 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_46;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v37 - 1;
      if ( v37 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v18 + 40) = BaseAddress + v6;
  *(_QWORD *)(v18 + 64) = Context;
  *(_QWORD *)(v18 + 32) = BaseAddress;
  *(_QWORD *)(v18 + 48) = BaseAddress;
  *(_QWORD *)(v18 + 56) = Callback;
  *(_DWORD *)(v18 + 80) = 2;
  *(_QWORD *)(v18 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v18 + 72) = v18 + 136;
    RtlStringCbCopyW((_WORD *)(v18 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v19, v20, v21);
  v22 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v23) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_24;
  while ( *(_QWORD *)(v18 + 32) < *(v22 - 7) )
  {
    v24 = (_QWORD *)*v22;
    if ( !*v22 )
      goto LABEL_24;
LABEL_31:
    v22 = v24;
  }
  v24 = (_QWORD *)v22[1];
  if ( v24 )
    goto LABEL_31;
  LOBYTE(v23) = 1;
LABEL_24:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v22, v23, v18 + 88);
  v25 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v26) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_28;
  while ( 2 )
  {
    if ( *(_QWORD *)(v18 + 40) < *(v25 - 10) )
    {
      v27 = (_QWORD *)*v25;
      if ( !*v25 )
        goto LABEL_28;
      goto LABEL_33;
    }
    v27 = (_QWORD *)v25[1];
    if ( v27 )
    {
LABEL_33:
      v25 = v27;
      continue;
    }
    break;
  }
  LOBYTE(v26) = 1;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v25, v26, v18 + 112);
  v28 = (__int64 *)qword_1801812C8;
  if ( *(__int64 **)qword_1801812C8 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v18 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v18 + 8) = v28;
  *v28 = v18;
  qword_1801812C8 = v18;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v29, v30, v31);
    v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v32 - 1;
      if ( v32 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_46:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
