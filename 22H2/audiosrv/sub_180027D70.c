/*
 * XREFs of sub_180027D70 @ 0x180027D70
 * Callers:
 *     sub_180027B80 @ 0x180027B80 (sub_180027B80.c)
 *     sub_1800E269C @ 0x1800E269C (sub_1800E269C.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 */

__int64 __fastcall sub_180027D70(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  BOOL v4; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // ecx

  if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = sub_180027D40(a2, &dword_18015B850);
    v7 = 0;
    if ( v4 )
      *v5 = v6 + 8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
