_QWORD *__fastcall VmpAllocateMemoryRanges(unsigned __int64 a1)
{
  __int64 v1; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rax

  v1 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 72LL, 1918266710LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x48uLL);
    v4[2] = -1LL;
    v5 = v4 + 5;
    v4[6] = v4 + 5;
    v6 = 0LL;
    v4[5] = v4 + 5;
    if ( a1 )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)ExAllocatePool2(64LL, 72LL, 1917283670LL);
        v8 = v7;
        if ( !v7 )
          break;
        memset(v7, 0, 0x48uLL);
        v8[5] = -1LL;
        v8[2] = v4;
        v9 = (_QWORD *)v4[6];
        if ( (_QWORD *)*v9 != v5 )
          __fastfail(3u);
        *v8 = v5;
        ++v6;
        v8[1] = v9;
        *v9 = v8;
        v4[6] = v8;
        if ( v6 >= a1 )
          return v4;
      }
      VmpFreeMemoryRanges(v4);
    }
    else
    {
      return v4;
    }
  }
  return (_QWORD *)v1;
}
