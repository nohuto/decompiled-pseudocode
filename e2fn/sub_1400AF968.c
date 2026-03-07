__int64 __fastcall sub_1400AF968(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _QWORD *Pool2; // r9
  __int64 result; // rax
  __int64 v8; // rdx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1819571039LL);
  result = 0LL;
  if ( Pool2 )
  {
    v8 = *a3;
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = v8;
    if ( a1[4] )
    {
      Pool2[1] = a2;
      *Pool2 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = Pool2;
      *a2 = (__int64)Pool2;
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
  return result;
}
