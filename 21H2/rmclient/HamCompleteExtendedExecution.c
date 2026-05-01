/*
 * XREFs of HamCompleteExtendedExecution @ 0x180004150
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008390 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCompleteExtendedExecution(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-68h] BYREF
  int v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+54h] [rbp-54h]
  __int64 v17; // [rsp+5Ch] [rbp-4Ch]
  __int64 v18; // [rsp+64h] [rbp-44h]
  __int64 v19; // [rsp+6Ch] [rbp-3Ch]
  __int64 v20; // [rsp+74h] [rbp-34h]
  int v21; // [rsp+7Ch] [rbp-2Ch]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015880, 5u, 0LL, *(_QWORD *)a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v14[0] = a2;
    v14[1] = 0LL;
    v15 = 3;
    RtlAcquireSRWLockExclusive(a1 + 24);
    *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v5 & 1) != 0 )
    {
      if ( v6 )
        v6 ^= a1 + 40;
      else
        v6 = 0LL;
    }
    v7 = v5 & 1;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = HampIpcChannelObjectComparePayloadForTree(v14, v6);
        if ( v8 >= 0 )
        {
          if ( v8 <= 0 )
            goto LABEL_15;
          v9 = *(_QWORD *)(v6 + 8);
          if ( !v7 || !v9 )
          {
LABEL_13:
            v6 = v9;
            goto LABEL_14;
          }
        }
        else
        {
          v9 = *(_QWORD *)v6;
          if ( !v7 || !v9 )
            goto LABEL_13;
        }
        v6 ^= v9;
LABEL_14:
        if ( !v6 )
        {
LABEL_15:
          if ( v6 )
          {
            RtlRbRemoveNode(a1 + 40, v6);
            v10 = (_QWORD *)(v6 + 24);
            v11 = *(_QWORD **)(a1 + 64);
            if ( *v11 != a1 + 56 )
              __fastfail(3u);
            *v10 = a1 + 56;
            v10[1] = v11;
            *v11 = v10;
            *(_QWORD *)(a1 + 64) = v10;
            v12 = *(_QWORD *)(a1 + 16);
            RtlAcquireSRWLockExclusive(v12 + 32);
            v13 = *(_DWORD *)(v12 + 64) | 2;
            *(_DWORD *)(v12 + 64) = v13;
            if ( (v13 & 1) == 0 )
            {
              *(_DWORD *)(v12 + 64) = v13 | 1;
              TpPostWork(*(_QWORD *)(v12 + 56));
            }
            RtlReleaseSRWLockExclusive(v12 + 32);
          }
          break;
        }
      }
    }
    *(_DWORD *)(a1 + 32) = 0;
    RtlReleaseSRWLockExclusive(a1 + 24);
    return 0LL;
  }
  return result;
}
