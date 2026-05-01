/*
 * XREFs of HampIpcChannelWnfCallback @ 0x180008060
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008390 (HampIpcChannelObjectComparePayloadForTree.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelWnfCallback(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v5; // r14
  _QWORD *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v10 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(a1 + 56))(a1, v6 - 3, 0LL);
    RtlAcquireSRWLockExclusive(a1 + 8);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( !a2 )
    return result;
  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 24);
  if ( (v8 & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 24;
    else
      v9 = 0LL;
  }
  v12 = v8 & 1;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = HampIpcChannelObjectComparePayloadForTree(a2, v9);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          goto LABEL_7;
        v14 = *(_QWORD *)(v9 + 8);
        if ( v12 && v14 )
        {
LABEL_26:
          v9 ^= v14;
          goto LABEL_19;
        }
      }
      else
      {
        v14 = *(_QWORD *)v9;
        if ( v12 && v14 )
          goto LABEL_26;
      }
      v9 = v14;
LABEL_19:
      if ( !v9 )
      {
        v9 = 0LL;
        goto LABEL_7;
      }
    }
  }
  v9 = 0LL;
LABEL_7:
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 56))(a1, v9, a2);
  return result;
}
