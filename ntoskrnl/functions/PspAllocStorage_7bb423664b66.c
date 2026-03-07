__int64 __fastcall PspAllocStorage(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(72LL, 576LL, 1951626064LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v4 = 32LL;
  do
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2 += 2;
    --v4;
  }
  while ( v4 );
  v3[64] = 0LL;
  result = 0LL;
  *a1 = v3;
  return result;
}
