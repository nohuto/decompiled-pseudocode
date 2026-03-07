__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v7; // r10
  struct _LUID v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v2 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD))SGDGetSessionState)(a1) + 24);
  v3 = *(_QWORD *)(v2 + 1928);
  v4 = *(_DWORD *)(v3 + 1573028);
  if ( v4 >= *(_DWORD *)(v2 + 1300) )
    return 3221225612LL;
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v2 + 1304);
    while ( !(unsigned __int8)operator==(&v9, v6 + 8 * v5) )
    {
      v5 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_7;
    }
    ++*(_BYTE *)(*(_QWORD *)(v2 + 1312) + v7);
  }
  else
  {
LABEL_7:
    *(struct _LUID *)(*(_QWORD *)(v2 + 1304) + 8 * v5) = a1;
    ++*(_BYTE *)(*(_QWORD *)(v2 + 1312) + v5);
    ++*(_DWORD *)(v3 + 1573028);
    ++*(_DWORD *)(v3 + 1573024);
  }
  return 0LL;
}
