__int64 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // r9
  char v21; // r10

  v2 = *(_QWORD *)a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v5 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v2;
  v6 = 0;
  v8 = (_QWORD *)HMPkheFromPhe(v5);
  LOWORD(v2) = WORD1(v2) & 0x7FFF;
  if ( (WORD1(v2) & 0x7FFF) != *(_WORD *)(v5 + 26)
    && (_WORD)v2 != 0x7FFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process(v7)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v5 + 24) != 1 )
    return 0LL;
  v9 = (_QWORD *)*v8;
  if ( !*v8 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v9[2];
  if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 1LL;
  v10 = v9[3];
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 24);
  }
  v13 = v9[5];
  v14 = v9[13];
  v15 = *(unsigned __int8 *)(v13 + 19);
  if ( (v15 & 0x80u) != 0LL )
    return 0LL;
  v16 = *((_QWORD *)a1 + 1);
  if ( v16 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v14 != v11 )
      return 0LL;
    goto LABEL_17;
  }
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      LOBYTE(v15) = 1;
      v19 = (_QWORD *)HMValidateHandleNoSecure(v16, v15);
      if ( v19 && (v20 = v19[5], v21 = *(_BYTE *)(v20 + 19), v21 >= 0) )
      {
        if ( v9 == v19 || v9[13] != v19[13] )
          return 0LL;
        if ( !a2 )
          return 1LL;
        if ( v14 != v11 )
          goto LABEL_18;
        if ( ((*(_BYTE *)(v9[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v9[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
        {
          v17 = v19[11];
LABEL_28:
          if ( v17
            && ((*(_BYTE *)(*(_QWORD *)(v17 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v17 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          {
            return 0LL;
          }
LABEL_18:
          LOBYTE(v6) = a2 == (struct tagWND *)v9[13];
          return v6;
        }
        if ( ((v21 & 4 ^ (*(unsigned __int8 *)(v20 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          goto LABEL_18;
      }
      else
      {
        UserSetLastError(6);
      }
      return 0LL;
    }
LABEL_17:
    if ( a2 )
      goto LABEL_18;
    return 1LL;
  }
  if ( a2 )
  {
    if ( v14 != v11 || ((v15 & 4 ^ (*(unsigned __int8 *)(v13 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      goto LABEL_18;
    v17 = *((_QWORD *)a2 + 14);
    goto LABEL_28;
  }
  return 1LL;
}
