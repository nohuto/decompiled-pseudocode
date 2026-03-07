__int64 __fastcall HvpExpandMap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v8; // edi
  __int64 v9; // r12
  unsigned int v10; // edi
  unsigned int v11; // ebp
  void *v13; // rax
  void *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // r13
  _QWORD *v18; // rax
  _QWORD *v19; // r15

  v4 = 0;
  v5 = a2;
  if ( a3 )
  {
    v8 = (a3 >> 12) - 1;
  }
  else
  {
    v13 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(12288LL, 0LL, 925977923LL);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    memset(v13, 0, 0x3000uLL);
    v15 = (_QWORD *)(632 * v5 + a1 + 296);
    *(_QWORD *)(632 * v5 + a1 + 288) = v15;
    *v15 = v14;
    v8 = 0;
  }
  v9 = v5;
  v10 = v8 >> 9;
  v11 = ((a4 >> 12) - 1) >> 9;
  if ( v11 <= v10 )
    return v4;
  if ( !v10 )
  {
    v16 = 632 * v5;
    v17 = (_QWORD *)(632 * v9 + a1 + 296);
    if ( *(_QWORD **)(632 * v9 + a1 + 288) == v17 )
    {
      v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(0x2000LL, 0LL, 942755139LL);
      v19 = v18;
      if ( v18 )
      {
        memset(v18, 0, 0x2000uLL);
        *v19 = *v17;
        *(_QWORD *)(v16 + a1 + 288) = v19;
        goto LABEL_11;
      }
      return (unsigned int)-1073741801;
    }
  }
LABEL_11:
  if ( !(unsigned __int8)HvpAllocateMap(a1, *(_QWORD *)(632 * v9 + a1 + 288), v10 + 1, v11) )
  {
    v4 = -1073741801;
    HvpFreeMap(a1, *(_QWORD *)(632 * v9 + a1 + 288), v10 + 1, v11);
  }
  return v4;
}
