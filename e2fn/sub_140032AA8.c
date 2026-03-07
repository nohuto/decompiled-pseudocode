_QWORD *__fastcall sub_140032AA8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rax
  unsigned __int64 *Pool2; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v4 = 16 * a2;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(64LL, v6, 1802921315LL);
  if ( !Pool2 )
    return 0LL;
  v8 = Pool2 + 1;
  *Pool2 = v2;
  v9 = Pool2 + 1;
  do
  {
    *v9 = off_1400D69E8;
    *((_DWORD *)v9 + 2) = 0;
    *((_WORD *)v9 + 6) = 0;
    v9 += 2;
    --v2;
  }
  while ( v2 );
  return v8;
}
