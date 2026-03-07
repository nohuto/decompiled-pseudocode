bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v3; // r9
  __int16 v5; // ax
  __int16 v6; // r8
  unsigned __int16 v7; // cx
  bool result; // al

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v3 || (v5 = *a1) == 0 || !*v3 )
  {
LABEL_12:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    return result;
  }
  while ( *v3 == 92 )
  {
    a1[1] -= 2;
    ++v3;
    v5 -= 2;
    *((_QWORD *)a1 + 1) = v3;
    *a1 = v5;
    if ( !v5 )
      goto LABEL_12;
  }
  *(_QWORD *)(a2 + 8) = v3;
  do
  {
    v6 = v5;
    if ( *v3 == 92 )
      break;
    a1[1] -= 2;
    v5 -= 2;
    ++v3;
    *a1 = v5;
    *((_QWORD *)a1 + 1) = v3;
    v6 = v5;
  }
  while ( v5 );
  v7 = a1[4] - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v7;
  *(_WORD *)(a2 + 2) = v7;
  *a3 = v6 == 0;
  return v7 <= 0x200u;
}
