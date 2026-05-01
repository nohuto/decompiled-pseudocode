/*
 * XREFs of RmpClientUnregisterActivityHostCallbacks @ 0x180004B90
 * Callers:
 *     RmUnregisterActivityHostCallbacks @ 0x180003AA0 (RmUnregisterActivityHostCallbacks.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008390 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHostCallbacks(__int64 a1, __int64 a2)
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
  _QWORD v14[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+68h] [rbp-30h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158B0, 3u, 0LL, *(_QWORD *)(a1 + 16), a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v14[0] = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v14[1] = a2;
    RtlAcquireSRWLockExclusive(a1 + 32);
    *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
    v5 = *(_QWORD *)(a1 + 56);
    v6 = *(_QWORD *)(a1 + 48);
    if ( (v5 & 1) != 0 )
    {
      if ( v6 )
        v6 ^= a1 + 48;
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
          {
LABEL_11:
            if ( v6 )
            {
              RtlRbRemoveNode(a1 + 48, v6);
              v10 = (_QWORD *)(v6 + 24);
              v11 = *(_QWORD **)(a1 + 72);
              if ( *v11 != a1 + 64 )
                __fastfail(3u);
              *v10 = a1 + 64;
              v10[1] = v11;
              *v11 = v10;
              *(_QWORD *)(a1 + 72) = v10;
              v12 = *(_QWORD *)(a1 + 24);
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
          v9 = *(_QWORD *)(v6 + 8);
          if ( v7 && v9 )
          {
LABEL_23:
            v6 ^= v9;
            goto LABEL_10;
          }
        }
        else
        {
          v9 = *(_QWORD *)v6;
          if ( v7 && v9 )
            goto LABEL_23;
        }
        v6 = v9;
LABEL_10:
        if ( !v6 )
          goto LABEL_11;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
    RtlReleaseSRWLockExclusive(a1 + 32);
    return 0LL;
  }
  return result;
}
