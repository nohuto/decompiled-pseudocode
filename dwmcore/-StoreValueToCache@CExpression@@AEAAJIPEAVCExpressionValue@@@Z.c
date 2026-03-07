__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // ebx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v16 = -2147024362;
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1F4u, 0LL);
    goto LABEL_47;
  }
  if ( a2 + 8 > *((_DWORD *)this + 92) )
  {
    v16 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x1F9u, 0LL);
    v6 = -2147483637;
LABEL_47:
    v23 = 1327;
    goto LABEL_48;
  }
  v4 = *((_QWORD *)this + 45) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 18);
  v5 = *((_DWORD *)a3 + 18);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v16 = -2147024362;
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1F4u, 0LL);
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 92) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v16 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x1F9u, 0LL);
      v6 = -2147483637;
    }
    v23 = 1358;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v23, 0LL);
    return v6;
  }
  if ( v5 != 104 )
  {
    switch ( v5 )
    {
      case 11:
        MicrosoftTelemetryAssertTriggeredNoArgs();
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024809, 0x59Au, 0LL);
        return v6;
      case 17:
        result = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_BYTE *)(v4 + 8) = *(_BYTE *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, result, 0x547u, 0LL);
        return v6;
      case 35:
        result = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, result, 0x555u, 0LL);
        return v6;
      case 42:
        v20 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v6 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x586u, 0LL);
        else
          *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      case 52:
        LODWORD(result) = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
          *(_DWORD *)(v4 + 16) = *((_DWORD *)a3 + 2);
          return (unsigned int)result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, result, 0x55Cu, 0LL);
        return v6;
      case 69:
        v13 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v13;
        if ( v13 >= 0 )
          goto LABEL_22;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x563u, 0LL);
        return v6;
      case 70:
        v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v11;
        if ( v11 >= 0 )
          goto LABEL_22;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x56Au, 0LL);
        return v6;
      case 71:
        v18 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v18;
        if ( v18 >= 0 )
        {
LABEL_22:
          result = v6;
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x571u, 0LL);
        return v6;
      case 265:
        result = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          *(_OWORD *)(v4 + 24) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v4 + 40) = *((_OWORD *)a3 + 2);
          *(_OWORD *)(v4 + 56) = *((_OWORD *)a3 + 3);
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, result, 0x57Fu, 0LL);
        break;
      default:
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x5A0u, 0LL);
        return v6;
    }
    return v6;
  }
  if ( a2 + 32 < a2 )
  {
    v16 = -2147024362;
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1F4u, 0LL);
    goto LABEL_42;
  }
  if ( a2 + 32 > *((_DWORD *)this + 92) )
  {
    v16 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x1F9u, 0LL);
    v6 = -2147483637;
LABEL_42:
    v23 = 1400;
    goto LABEL_48;
  }
  result = 0LL;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
  *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
  return result;
}
