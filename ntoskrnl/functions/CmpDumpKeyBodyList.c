void __fastcall CmpDumpKeyBodyList(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  signed __int64 *v7; // r15
  unsigned int v8; // ecx
  _QWORD *v9; // rax
  _QWORD **v10; // rsi
  __int64 v11; // rcx
  _QWORD *i; // r14
  signed __int64 v13; // rsi
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  LOBYTE(a3) = 1;
  if ( *a1 )
  {
    v7 = a1 + 17;
    v8 = 0;
    v9 = a1 + 17;
    while ( !*v9 )
    {
      ++v8;
      ++v9;
      if ( v8 >= 4 )
        goto LABEL_7;
    }
    LOBYTE(a3) = 0;
LABEL_7:
    v10 = (_QWORD **)(a1 + 15);
    if ( *v10 != v10 || (_BYTE)a3 != 1 )
    {
      v14 = 0LL;
      CmpConstructNameWithStatus((__int64)a1, &v14, a3);
      if ( v14 )
      {
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
        {
          CmpDumpOneKeyBody(v11, i - 4, v14, v4);
          ++*a2;
        }
        do
        {
          v13 = *v7;
          if ( (unsigned __int64)*v7 >= 3 && v13 == _InterlockedCompareExchange64(&a1[v3 + 17], 1LL, v13) )
          {
            CmpDumpOneKeyBody(v11, v13, v14, v4);
            ++*a2;
            _InterlockedCompareExchange64(&a1[v3 + 17], v13, 1LL);
          }
          ++v3;
          ++v7;
        }
        while ( v3 < 4 );
        CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
      }
      else if ( v4 )
      {
        *(_DWORD *)(v4 + 20) = -1073741670;
      }
    }
  }
}
