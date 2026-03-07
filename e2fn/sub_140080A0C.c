__int64 __fastcall sub_140080A0C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax
  __int64 Pool2; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rax

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v4 = 12 * a2;
  if ( !is_mul_ok(a2, 0xCuLL) )
    v4 = -1LL;
  Pool2 = ExAllocatePool2(64LL, v4, 1802921315LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = (_DWORD *)(Pool2 + 8);
  do
  {
    *(v7 - 1) = 0;
    *v7 = 0;
    *(v7 - 2) = -1073741823;
    v7 += 3;
    --v2;
  }
  while ( v2 );
  return v6;
}
