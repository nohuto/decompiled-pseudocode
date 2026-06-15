/*
 * XREFs of sub_180063F00 @ 0x180063F00
 * Callers:
 *     sub_1800340B0 @ 0x1800340B0 (sub_1800340B0.c)
 *     sub_18003418C @ 0x18003418C (sub_18003418C.c)
 *     sub_180063E28 @ 0x180063E28 (sub_180063E28.c)
 *     sub_180063FC0 @ 0x180063FC0 (sub_180063FC0.c)
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 *     sub_1800B8BD4 @ 0x1800B8BD4 (sub_1800B8BD4.c)
 *     sub_180135010 @ 0x180135010 (sub_180135010.c)
 * Callees:
 *     sub_180063F94 @ 0x180063F94 (sub_180063F94.c)
 */

__int64 __fastcall sub_180063F00(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  unsigned int v4; // edi

  if ( !*(_BYTE *)a1 )
    return 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v3 = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *v3 = 0LL;
    sub_180063F94(a1 + 32, sub_1800B7400, a1);
    if ( *v3 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
