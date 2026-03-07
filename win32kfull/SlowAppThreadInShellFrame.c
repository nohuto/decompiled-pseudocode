struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  struct tagTHREADINFO *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // [rsp+70h] [rbp+18h]
  int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v4 = *((_QWORD *)a1 + 54);
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(_QWORD *)(v4 + 120);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(__int64 **)(v11 + 424)) )
        return 0LL;
      a3 = v26;
      a4 = v27;
    }
  }
  if ( a4 )
  {
    v12 = *((_QWORD *)a1 + 84);
    v13 = gdwMDAQThreshold / 0xAu;
    if ( v12 && (*(_DWORD *)(v12 + 200) & 0x80000) != 0 )
      v13 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v13 = gdwMDAQTimeoutDefenseInDepth;
  }
  v14 = *(struct tagTHREADINFO **)(v4 + 72);
  if ( v14 )
  {
    if ( v14 != a1 && v14 == a2 )
    {
      v15 = *(_QWORD *)(v4 + 80);
      if ( v15 )
      {
        if ( a3 == v15 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v14 + 53)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v13 )
            return v14;
          v16 = *((_QWORD *)v14 + 101);
          if ( v16 )
          {
            if ( (int)v9 - *(_DWORD *)(v16 + 48) >= v13 )
              return v14;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + 448LL) + 20LL) >= v13 )
            return v14;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_32;
  v14 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v14 )
    goto LABEL_32;
  if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v14 + 53)) )
    return 0LL;
  if ( v14 != a1 || (v14 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v18 = v27;
    if ( (v27 || (*(_DWORD *)(*((_QWORD *)a1 + 56) + 8LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v13 || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v14 + 206)) > 0x100) )
    {
      return v14;
    }
  }
  else
  {
LABEL_32:
    v18 = v27;
  }
  v14 = *(struct tagTHREADINFO **)(v4 + 72);
  if ( !v14 || v14 == a1 )
    goto LABEL_44;
  if ( (unsigned int)IsDebuggerAttached(*((__int64 **)v14 + 53)) )
    return 0LL;
  v19 = *(_QWORD *)(v4 + 80);
  if ( v19 )
  {
    v20 = *((_QWORD *)v14 + 101);
    if ( v19 == v20 && (int)v9 - *(_DWORD *)(v20 + 48) >= v13 )
      return v14;
    v21 = *(_QWORD *)(v4 + 24);
    if ( v19 == v21 && (int)v9 - *(_DWORD *)(v21 + 48) >= v13 )
      return v14;
  }
  if ( v18
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v14 + 56) + 20LL) >= v13
     || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v14 + 206)) > 0x100) )
  {
    return v14;
  }
LABEL_44:
  v22 = (_DWORD *)*((_QWORD *)a1 + 84);
  if ( !v22 || (v22[50] & 0x80000) == 0 )
    return 0LL;
  v23 = v22[71];
  if ( v23 < 3 || v22[70] / v23 <= v13 )
  {
    v25 = v22[69];
    if ( !v25 || (int)v9 - v25 < 4 * v13 )
      return 0LL;
  }
  v24 = *((_QWORD *)a1 + 180);
  if ( v24 )
    return *(struct tagTHREADINFO **)(v24 + 16);
  return (struct tagTHREADINFO *)v6;
}
