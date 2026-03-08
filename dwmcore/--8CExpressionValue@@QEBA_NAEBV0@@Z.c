/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800555A0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800BCC10 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18012DEDA (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1802793B4 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValue::operator==(_DWORD *Buf1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  char v5; // cl
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = Buf1[18];
  LOBYTE(a3) = 0;
  if ( v3 != a2[18] )
    return (unsigned __int8)a3;
  v5 = *((_BYTE *)Buf1 + 76);
  if ( v5 != *((_BYTE *)a2 + 76) )
    return (unsigned __int8)a3;
  if ( !v5 )
    goto LABEL_6;
  if ( v3 == 35 )
  {
    if ( *(_QWORD *)Buf1 != *(_QWORD *)a2 )
      return (unsigned __int8)a3;
LABEL_6:
    LOBYTE(a3) = 1;
    return (unsigned __int8)a3;
  }
  if ( v3 == 17 )
    return *(_BYTE *)Buf1 == *(_BYTE *)a2;
  switch ( v3 )
  {
    case 11:
      v11 = *((_QWORD *)Buf1 + 8);
      if ( v11 && *((_QWORD *)a2 + 8) )
        LOBYTE(a3) = CPathData::operator==(*((_QWORD *)Buf1 + 8), *((_QWORD *)a2 + 8), a3);
      else
        LOBYTE(a3) = v11 == *((_QWORD *)a2 + 8);
      return (unsigned __int8)a3;
    case 18:
    case 42:
      if ( *(float *)Buf1 == *(float *)a2 )
        goto LABEL_6;
      result = 0LL;
      break;
    case 52:
      v8 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v8 = (unsigned int)Buf1[2] - (unsigned __int64)(unsigned int)a2[2];
      if ( !v8 )
        goto LABEL_6;
      result = 0LL;
      break;
    case 69:
      v10 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v10 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
      LOBYTE(a3) = v10 == 0;
      return (unsigned __int8)a3;
    case 70:
      v7 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v7 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
      if ( !v7 )
        goto LABEL_6;
      result = 0LL;
      break;
    case 71:
      LOBYTE(a3) = (unsigned int)D2DQuaternion::operator==(Buf1, a2, a3) != 0;
      return (unsigned __int8)a3;
    case 104:
      v9 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
      {
        v9 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
        if ( !v9 )
          v9 = *((_QWORD *)Buf1 + 2) - *((_QWORD *)a2 + 2);
      }
      if ( v9 )
        return (unsigned __int8)a3;
      result = 1LL;
      break;
    case 265:
      if ( !memcmp_0(Buf1, a2, 0x40uLL) )
        goto LABEL_6;
      result = 0LL;
      break;
    default:
      return (unsigned __int8)a3;
  }
  return result;
}
