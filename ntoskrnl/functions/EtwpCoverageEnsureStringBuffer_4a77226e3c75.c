__int64 __fastcall EtwpCoverageEnsureStringBuffer(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // r8
  _QWORD *Pool2; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax

  v1 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v1; i = (_QWORD *)*i )
  {
    if ( i[2] - i[3] >= 0x200uLL )
    {
      *(_QWORD *)(a1 + 40) = i;
      return 0;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x2000LL, 1450669125LL);
  v5 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    EtwpCoverageInitializeStringBuffer(Pool2, 0x2000u);
    *(_QWORD *)(a1 + 40) = v6;
    v7 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v7 != v1 )
      __fastfail(3u);
    *v6 = v1;
    v6[1] = v7;
    *v7 = v6;
    v1[1] = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
