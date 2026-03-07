_QWORD *__fastcall sub_1400AF780(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *Pool2; // rax
  __int64 v7; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 32) )
  {
    while ( v4 != a2 )
    {
      if ( a1[4] )
        v5 = a1;
      else
        v5 = (_QWORD *)a1[1];
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
      if ( Pool2 )
      {
        v7 = *(_QWORD *)(v4 + 16);
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = v7;
        if ( a1[4] )
        {
          Pool2[1] = v5;
          *Pool2 = *v5;
          *(_QWORD *)(*v5 + 8LL) = Pool2;
          *v5 = Pool2;
        }
        else
        {
          Pool2[1] = a1;
          *Pool2 = a1;
          a1[1] = Pool2;
          *a1 = Pool2;
        }
        ++a1[4];
      }
      v4 = *(_QWORD *)(v4 + 8);
    }
  }
  return a1;
}
