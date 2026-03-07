char __fastcall CBaseExpression::IsExpressionValueValid(CBaseExpression *this, struct CExpressionValue *a2)
{
  int v2; // eax
  float v4; // xmm0_4
  __int128 v6; // [rsp+20h] [rbp-18h]
  float v7[6]; // [rsp+20h] [rbp-18h]
  float v8[6]; // [rsp+20h] [rbp-18h]
  float v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  v2 = *((_DWORD *)a2 + 18);
  if ( v2 == 18 )
  {
    v4 = *(float *)a2;
    return _finite(v4) != 0;
  }
  if ( v2 == 17 )
    return 1;
  if ( v2 != 35 )
  {
    switch ( v2 )
    {
      case 11:
        return 1;
      case 42:
        return _finite(*(float *)a2) != 0;
      case 52:
        *(_QWORD *)v7 = *(_QWORD *)a2;
        v9 = *((float *)a2 + 2);
        if ( !_finite(COERCE_FLOAT(*(_QWORD *)a2)) || !_finite(v7[1]) )
          return 0;
        v4 = v9;
        return _finite(v4) != 0;
      case 69:
      case 71:
        *(_OWORD *)v8 = *(_OWORD *)a2;
        return _finite(COERCE_FLOAT(*(_OWORD *)a2)) && _finite(v8[1]) && _finite(v8[2]) && _finite(v8[3]);
      case 70:
        v6 = *(_OWORD *)a2;
        if ( !_finite(COERCE_FLOAT(*(_OWORD *)a2)) || !_finite(*((float *)&v6 + 1)) || !_finite(*((float *)&v6 + 2)) )
          return 0;
        v4 = *((float *)&v6 + 3);
        return _finite(v4) != 0;
      case 104:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4)) )
        {
          return 0;
        }
        v4 = *((float *)a2 + 4);
        return _finite(v4) != 0;
      case 265:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4))
          || !_finite(*((float *)a2 + 5))
          || !_finite(*((float *)a2 + 6))
          || !_finite(*((float *)a2 + 7))
          || !_finite(*((float *)a2 + 8))
          || !_finite(*((float *)a2 + 9))
          || !_finite(*((float *)a2 + 10))
          || !_finite(*((float *)a2 + 11))
          || !_finite(*((float *)a2 + 12))
          || !_finite(*((float *)a2 + 13))
          || !_finite(*((float *)a2 + 14)) )
        {
          return 0;
        }
        v4 = *((float *)a2 + 15);
        return _finite(v4) != 0;
      default:
        return 0;
    }
  }
  v10 = *(_QWORD *)a2;
  if ( _finite(COERCE_FLOAT(*(_QWORD *)a2)) )
  {
    v4 = *((float *)&v10 + 1);
    return _finite(v4) != 0;
  }
  return 0;
}
