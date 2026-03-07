__int64 __fastcall sub_140001070(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 Pool2; // rax
  __int64 result; // rax

  v3 = a1[4];
  v4 = a2 + 1;
  if ( a3 > a2 + 1 )
    v4 = a3;
  v7 = 64LL;
  v8 = 2 * v4;
  if ( v3 <= v8 )
    v3 = v8;
  if ( v3 > 0x40 )
    v7 = v3;
  a1[4] = v7;
  v9 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
    v9 = -1LL;
  Pool2 = ExAllocatePool2(64LL, v9, 1802728562LL);
  a1[2] = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 2 * a2) = 0;
    result = 0LL;
    a1[3] = a2;
  }
  else
  {
    a1[4] = 0LL;
    return 3221225495LL;
  }
  return result;
}
