/*
 * XREFs of TppIopExecuteCallback @ 0x180020FD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrLockLoaderLock @ 0x18007DAB0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007E920 (LdrUnlockLoaderLock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801125F4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112690 (RtlpTpETWCallbackStop.c)
 */

void __fastcall TppIopExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  __int64 v7; // rbx
  void *v8; // r15
  int v9; // edi
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  PVOID Cookie; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF

  v5 = a2;
  Cookie = 0LL;
  v7 = a2 - 200;
  v8 = *(void **)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
  }
  else
  {
    v10 = 0;
  }
  _m_prefetchw((const void *)(v7 + 280));
  v11 = *(_DWORD *)(v7 + 280);
  while ( v11 > 0 )
  {
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 280), v11 - 1, v11);
    v12 = v11 == v13;
    v11 = v13;
    if ( v12 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  if ( v10 && v9 )
  {
    if ( LdrAddRefDll(0, v8) >= 0 )
    {
      Instance[21] = v8;
      *((_DWORD *)Instance + 36) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(Instance, v7);
    v14 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v7 + 144),
        v5,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    TppStartThreadData(&v17, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    Instance[11] = *(_QWORD *)(v7 + 80);
    Instance[12] = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(v7 + 80))(
      Instance,
      *(_QWORD *)(v7 + 88),
      a3,
      a4,
      v7);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v14 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v7 + 144),
        v5,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    TppCompleteThreadData(v17);
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
}
