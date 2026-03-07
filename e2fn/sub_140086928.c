__int64 __fastcall sub_140086928(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax
  __int64 Pool2; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  Pool2 = ExAllocatePool2(64LL, v4, 1802921315LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = Pool2 + 4;
  do
  {
    *(_QWORD *)(v7 - 4) = 0LL;
    v7 += 8LL;
    --v2;
  }
  while ( v2 );
  return v6;
}
