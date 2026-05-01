/*
 * XREFs of RmpClientReleaseResourceSet @ 0x180004990
 * Callers:
 *     RmReleaseResourceSetEx @ 0x180003A90 (RmReleaseResourceSetEx.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008390 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientReleaseResourceSet(__int64 a1, __int64 a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  _QWORD v16[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+68h] [rbp-30h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158B0, 6u, 0LL, *(_QWORD *)(a1 + 16), a2, a3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v16[0] = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v16[1] = a2;
    RtlAcquireSRWLockExclusive(a1 + 32);
    *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
    v6 = *(_QWORD *)(a1 + 56);
    v7 = *(_QWORD *)(a1 + 48);
    if ( (v6 & 1) != 0 )
    {
      if ( v7 )
        v7 ^= a1 + 48;
      else
        v7 = 0LL;
    }
    v8 = v6 & 1;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = HampIpcChannelObjectComparePayloadForTree(v16, v7);
        if ( v9 >= 0 )
        {
          if ( v9 <= 0 )
          {
LABEL_11:
            if ( v7 )
            {
              RtlRbRemoveNode(a1 + 48, v7);
              v11 = (_QWORD *)(v7 + 24);
              v12 = *(_QWORD **)(a1 + 72);
              if ( *v12 != a1 + 64 )
                __fastfail(3u);
              *v11 = a1 + 64;
              v11[1] = v12;
              *v12 = v11;
              *(_QWORD *)(a1 + 72) = v11;
              v13 = *(_QWORD *)(a1 + 24);
              RtlAcquireSRWLockExclusive(v13 + 32);
              v14 = *(_DWORD *)(v13 + 64) | 2;
              *(_DWORD *)(v13 + 64) = v14;
              if ( (v14 & 1) == 0 )
              {
                *(_DWORD *)(v13 + 64) = v14 | 1;
                TpPostWork(*(_QWORD *)(v13 + 56));
              }
              RtlReleaseSRWLockExclusive(v13 + 32);
            }
            break;
          }
          v10 = *(_QWORD *)(v7 + 8);
          if ( v8 && v10 )
          {
LABEL_23:
            v7 ^= v10;
            goto LABEL_10;
          }
        }
        else
        {
          v10 = *(_QWORD *)v7;
          if ( v8 && v10 )
            goto LABEL_23;
        }
        v7 = v10;
LABEL_10:
        if ( !v7 )
          goto LABEL_11;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
    RtlReleaseSRWLockExclusive(a1 + 32);
    return 0LL;
  }
  return result;
}
