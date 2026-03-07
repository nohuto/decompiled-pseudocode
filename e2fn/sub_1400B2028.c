_QWORD *__fastcall sub_1400B2028(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v8; // r14
  __int64 v9; // r8

  v6 = a2;
  if ( a2 == a3 )
  {
LABEL_6:
    *a1 = a3;
  }
  else
  {
    v8 = *(_QWORD *)(a4 + 24);
    while ( 1 )
    {
      v9 = v6[5];
      if ( v8 == v9 && !(unsigned int)sub_1400B6E50(v6[4], *(_QWORD *)(a4 + 16), 2 * v9) )
        break;
      v6 = (_QWORD *)v6[1];
      if ( v6 == a3 )
        goto LABEL_6;
    }
    *a1 = v6;
  }
  return a1;
}
