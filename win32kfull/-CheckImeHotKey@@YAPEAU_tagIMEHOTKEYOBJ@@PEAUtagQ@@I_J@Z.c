struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(struct tagQ *a1, int a2, int a3)
{
  __int64 v6; // rcx
  struct _tagIMEHOTKEYOBJ *result; // rax
  int v8; // ebp
  char v9; // dl
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _tagIMEHOTKEYOBJ *v15; // rbx
  unsigned int v16; // edi
  unsigned int v17; // eax
  int v18; // r9d
  __int64 v19; // rcx

  if ( a3 < 0 )
  {
    if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 13968) != a2 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v6) + 13968) = 0;
      return 0LL;
    }
    v8 = 1;
    *(_DWORD *)(SGDGetUserSessionState(v6) + 13968) = 0;
  }
  else
  {
    v8 = 0;
  }
  v9 = *((_BYTE *)a1 + 276);
  v10 = (v9 & 4) != 0 ? 0x4004 : 0;
  v11 = ((v9 & 1) != 0 ? 0x8004 : 0) | v10 | ((v9 & 0x10) != 0 ? 0x8002 : 0) | ((v9 & 0x40) != 0 ? 0x4002 : 0) | ((*((_BYTE *)a1 + 277) & 1) != 0 ? 0x8001 : 0) | ((*((_BYTE *)a1 + 277) & 4) != 0 ? 0x4001 : 0);
  if ( (unsigned int)(a2 - 16) <= 2 )
  {
    v16 = v11 & 7;
    v17 = (v11 & 5) + ((v16 >> 1) & 5);
    v12 = v17 & 3;
    if ( (_DWORD)v12 + (v17 >> 2) == 1 && (a3 & 0x40000000) == 0 )
      *(_DWORD *)(SGDGetUserSessionState(v12) + 13972) = v16;
  }
  else
  {
    *(_DWORD *)(SGDGetUserSessionState(v10) + 13972) = 0;
  }
  v13 = SGDGetUserSessionState(v12);
  result = FindImeHotKeyByKey(*(struct _tagIMEHOTKEYOBJ **)(v13 + 12728), v11 & 0xF, (unsigned __int16)v11 & 0xC000, a2);
  v15 = result;
  if ( !result )
    return 0LL;
  v18 = *((_DWORD *)result + 4);
  if ( v8 )
  {
    v19 = 0LL;
    if ( (v18 & 0x40801) != 0x40801 )
      v19 = ((v18 & 0x20802) != 133122) & (unsigned __int8)((v18 & 0x10804) != 67588);
    if ( (_BYTE)v19 )
    {
      if ( (v18 & 0x800) == 0 )
        return 0LL;
    }
    else
    {
      v19 = *(unsigned int *)(SGDGetUserSessionState(v19) + 13972);
      if ( (_DWORD)v19 != (*((_DWORD *)v15 + 4) & 7) )
        return 0LL;
    }
    *(_DWORD *)(SGDGetUserSessionState(v19) + 13972) = 0;
    return v15;
  }
  if ( (v18 & 0x800) != 0 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v14) + 13968) = a2;
    return 0LL;
  }
  return result;
}
