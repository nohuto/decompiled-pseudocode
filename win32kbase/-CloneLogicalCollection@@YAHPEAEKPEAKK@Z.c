__int64 __fastcall CloneLogicalCollection(unsigned __int8 *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  int v4; // edi
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 result; // rax

  v4 = a4;
  v6 = a2;
  if ( (unsigned int)a4 <= *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 440) )
    return 0LL;
  v14 = v4 - *(_DWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 440) + 1;
  if ( v6 - *a3 <= v14 )
    return 0LL;
  v17 = SGDGetUserSessionState(v13, v12, v15, v16);
  v18 = *a3;
  memmove(&a1[v18], &a1[*(unsigned int *)(v17 + 440)], v14);
  result = 1LL;
  *a3 = v18 + v14;
  return result;
}
