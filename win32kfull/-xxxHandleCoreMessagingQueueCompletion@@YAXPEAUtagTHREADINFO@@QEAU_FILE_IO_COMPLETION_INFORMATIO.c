ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // r14
  struct tagQMSG *v9; // rax
  ULONG64 v10; // rbx
  _QWORD *v11; // rcx
  ULONG64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  if ( a3 && !v8 )
  {
    v9 = _PostTransformableMessageExtended(*(struct tagWND **)(a1 + 1504), 0x60u, 1uLL, 0LL, 0LL, 1);
    v7 = (__int64 *)MmSystemRangeStart;
    if ( v9 < MmSystemRangeStart )
    {
      if ( (_DWORD)v9 )
        goto LABEL_7;
    }
    else if ( v9 )
    {
      goto LABEL_7;
    }
    ThreadLock(*(_QWORD *)(a1 + 1504), &v16);
    xxxSendMessage(*(_QWORD *)(a1 + 1504), 96LL, 2LL, 0LL);
    ThreadUnlock1(v14, v13, v15);
  }
LABEL_7:
  v10 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v7) )
    v5 = 3LL;
  if ( (v5 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (_QWORD *)v10;
  result = MmUserProbeAddress;
  if ( v10 >= MmUserProbeAddress )
    v11 = (_QWORD *)MmUserProbeAddress;
  *v11 = v8;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v10;
  return result;
}
