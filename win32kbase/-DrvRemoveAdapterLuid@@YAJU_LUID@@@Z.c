__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  int v1; // r12d
  __int64 v2; // rbp
  _QWORD *v3; // r14
  _DWORD *v4; // rsi
  __int64 v5; // r9
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  struct _LUID v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v1 = 0;
  v2 = 0LL;
  v3 = *(_QWORD **)(((__int64 (__fastcall *)(_QWORD))SGDGetSessionState)(a1) + 24);
  v4 = (_DWORD *)(v3[241] + 1573024LL);
  if ( *(_DWORD *)(v3[241] + 1573028LL) )
  {
    v5 = v3[163];
    while ( !(unsigned __int8)operator==(&v12, v5 + 8 * v2) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v6 )
        goto LABEL_5;
    }
    if ( !--*(_BYTE *)(v2 + v3[164]) )
    {
      v1 = 1;
      if ( v4[1] - (_DWORD)v2 != 1 )
      {
        v10 = v4[1] - v2 - 1;
        v11 = (unsigned int)(v2 + 1);
        memmove((void *)(v3[163] + 8 * v2), (const void *)(v3[163] + 8 * v11), 8LL * v10);
        memmove((void *)(v3[164] + v2), (const void *)(v3[164] + v11), v10);
      }
    }
  }
LABEL_5:
  v7 = v4[1];
  if ( (_DWORD)v2 == v7 )
    return 3221225524LL;
  if ( v1 )
  {
    ++*v4;
    v9 = v7 - 1;
    v4[1] = v9;
    *(_QWORD *)(v3[163] + 8LL * v9) = 0LL;
    *(_BYTE *)((unsigned int)v4[1] + v3[164]) = 0;
  }
  return 0LL;
}
