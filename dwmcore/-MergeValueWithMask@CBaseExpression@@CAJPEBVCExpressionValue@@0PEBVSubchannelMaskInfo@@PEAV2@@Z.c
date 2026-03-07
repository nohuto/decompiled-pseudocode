__int64 __fastcall CBaseExpression::MergeValueWithMask(
        __int64 a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int v4; // r10d
  int *v8; // rdi
  int v9; // r8d
  unsigned __int64 v10; // r10
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // ebx
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 72);
  v8 = (int *)a1;
  v9 = *(_DWORD *)a3 - 1;
  if ( !v9 )
  {
    v10 = (unsigned int)(v4 - 18);
    if ( (unsigned int)v10 <= 0x33 )
    {
      a1 = 0x8000400020001LL;
      if ( _bittest64(&a1, v10) )
        goto LABEL_4;
    }
    v17 = 2052;
    goto LABEL_17;
  }
  if ( v9 != 1 )
  {
    v16 = -2147467259;
    v17 = 2071;
LABEL_18:
    v14 = v16;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v16, v17, 0LL);
    return v14;
  }
  if ( v4 != 104 && v4 != 265 )
  {
    v17 = 2061;
LABEL_17:
    v16 = -2147024809;
    goto LABEL_18;
  }
LABEL_4:
  CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)v8);
  if ( *((_BYTE *)a3 + 4) )
  {
    while ( 1 )
    {
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v8[18]);
      if ( (unsigned int)v12 >= ExpressionTypeChannelCount || (unsigned int)v12 >= 0x10 )
        break;
      *((_DWORD *)a4 + v12) = *((_DWORD *)a2 + v13);
      if ( (int)v13 + 1 >= (unsigned int)*((unsigned __int8 *)a3 + 4) )
        return 0;
    }
    v16 = -2147467259;
    v17 = 2110;
    goto LABEL_18;
  }
  return 0;
}
