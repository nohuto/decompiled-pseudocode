/*
 * XREFs of sub_180130FB0 @ 0x180130FB0
 * Callers:
 *     sub_180131020 @ 0x180131020 (sub_180131020.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 */

__int64 __fastcall sub_180130FB0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( sub_180027D40(a2, &qword_18015B830) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_180027D40(v2, &dword_18015BE10) )
    {
      *v7 = v9;
    }
    else if ( sub_180027D40(v6, &qword_18015C550) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
