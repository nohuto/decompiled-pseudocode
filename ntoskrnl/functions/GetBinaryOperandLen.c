__int64 __fastcall GetBinaryOperandLen(_WORD *a1, _DWORD *a2)
{
  bool v3; // zf
  __int64 v4; // r8
  __int64 result; // rax
  __int16 v6; // cx

  v3 = *a1 == 32;
  *a2 = 0;
  if ( !v3 )
  {
    LODWORD(v4) = 0;
    do
    {
      result = (unsigned int)v4;
      v6 = a1[(unsigned int)v4];
      if ( v6 == 41 )
        break;
      if ( v6 == 125 )
        break;
      if ( v6 == asc_14004677C[0] )
        break;
      if ( v6 == asc_1400466D4[0] )
        break;
      if ( v6 == 44 )
        break;
      if ( !v6 )
        break;
      v4 = (unsigned int)(v4 + 1);
      *a2 = v4;
    }
    while ( a1[v4] != 32 );
  }
  return result;
}
