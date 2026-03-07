void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, const struct tagTHREADINFO *a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *i; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx

  v3 = (_QWORD **)(*((_QWORD *)a1 + 57) + 168LL);
  v5 = 0LL;
  v6 = SGDGetUserSessionState(a1);
  if ( *(_QWORD *)(v6 + 16880) != v6 + 16880 )
  {
    v16 = *(_QWORD *)(SGDGetUserSessionState(v7) + 16888);
    v17 = *(_QWORD *)(v16 + 16);
    if ( !v17 || *(_QWORD *)(v17 + 456) == *((_QWORD *)a1 + 57) )
      v5 = (_QWORD *)((v16 + 24) & -(__int64)((*(_BYTE *)(SGDGetUserSessionState(v17) + 16896) & 0x3F) != 0));
    else
      UnpackAffectedThreadList(v17);
  }
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    v9 = i - 93;
    v10 = *(i - 39);
    if ( (v10 == *((_QWORD *)a1 + 54)
       || v10 == gpqForeground
       || v10 == gpqForegroundPrev
       || a2 && v10 == *((_QWORD *)a2 + 54))
      && (v9[61] & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 93)) )
    {
      v12 = *(unsigned int *)(SGDGetUserSessionState(v11) + 16896);
      if ( (v12 & 0x3F) == 0 )
      {
        v5 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v5 )
        {
          UnpackAffectedThreadList(v12);
          return;
        }
      }
      v5[2] = v9;
      v13 = SGDGetUserSessionState(v12) + 16880;
      v14 = *(_QWORD **)(v13 + 8);
      if ( *v14 != v13 )
        __fastfail(3u);
      *v5 = v13;
      v5[1] = v14;
      *v14 = v5;
      *(_QWORD *)(v13 + 8) = v5;
      v5 += 3;
      v15 = SGDGetUserSessionState(v14);
      ++*(_DWORD *)(v15 + 16896);
    }
  }
}
