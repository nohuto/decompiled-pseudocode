struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  int v1; // ebp
  _WORD *v2; // rsi
  void (__fastcall *v4)(_WORD *, __int64, __int64); // r14
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rdx
  struct _KTHREAD *result; // rax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_WORD **)(a1 + 40);
  v4 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v9 = 0LL;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(a1 + 68) )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v1 = 1;
    v9 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v9;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    PsImpersonateContainerOfThread();
    v6 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1344LL);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v4(v2, v7, a1);
  }
  else if ( *v2 == 3 )
  {
    ((void (__fastcall *)(_WORD *, __int64))v4)(v2, v7);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, __int64))v4)(0LL, v7);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1345LL);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v1 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v6 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v4, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
