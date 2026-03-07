__int64 __fastcall CExpressionValueStack::Swizzle(__int64 this, struct ExpressionNode *a2)
{
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  CExpressionValue *v7; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // esi
  unsigned int i; // r9d
  __int64 v15; // r8
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  int v25; // xmm4_4
  int v26; // xmm5_4
  __int128 v27; // xmm0
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm2_4
  unsigned int v32; // [rsp+28h] [rbp-89h]
  __int128 v33; // [rsp+48h] [rbp-69h] BYREF
  __int128 v34; // [rsp+58h] [rbp-59h]
  __int128 v35; // [rsp+68h] [rbp-49h]
  __int128 v36; // [rsp+78h] [rbp-39h]
  float v37[20]; // [rsp+88h] [rbp-29h] BYREF

  v2 = *(_DWORD *)(this + 16);
  if ( !v2 )
  {
    v32 = 7822;
    goto LABEL_39;
  }
  if ( *(_DWORD *)a2 == 101 )
  {
    v4 = 4LL;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 == 102 )
  {
    v4 = 8LL;
LABEL_7:
    v5 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v5 < *(_DWORD *)(this + 48) )
    {
      v7 = (CExpressionValue *)(*(_QWORD *)(this + 24) + 80 * v5);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v37);
      v7 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v37);
    }
    memset_0(v37, 0, 0x40uLL);
    memset_0(&v33, 0, 0x40uLL);
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)v7 + 18));
    v9 = *((unsigned __int8 *)a2 + v4 + 4);
    v10 = ExpressionTypeChannelCount;
    v12 = CExpressionValue::CopyIntoFloatArray(v7, v11, v37);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        this,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v12,
        0x1EBCu,
        0LL);
      return v13;
    }
    for ( i = 0; i < v9; *((_DWORD *)&v33 + this) = v12 )
    {
      if ( *(_DWORD *)((char *)a2 + v4) == 1 )
      {
        LOBYTE(v12) = *((_BYTE *)a2 + v4 + 4) - i;
        this = (unsigned int)(2 * v12 - 2);
        v15 = (*((unsigned __int8 *)a2 + v4 + 8) >> (2 * v12 - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)((char *)a2 + v4) != 2 )
        {
          v32 = 7894;
          goto LABEL_39;
        }
        this = 4 * (*((unsigned __int8 *)a2 + v4 + 4) - i) - 4;
        v15 = (*(_QWORD *)((char *)a2 + v4 + 8) >> (4 * (*((_BYTE *)a2 + v4 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v15 >= v10 )
      {
        v32 = 7905;
        goto LABEL_39;
      }
      if ( i >= 0x10 )
      {
        v32 = 7916;
        goto LABEL_39;
      }
      v12 = LODWORD(v37[v15]);
      this = i++;
    }
    v16 = v9 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 2;
            if ( v20 )
            {
              if ( v20 != 10 )
              {
                v32 = 7962;
                goto LABEL_39;
              }
              v21 = v34;
              *(_OWORD *)v7 = v33;
              *((_DWORD *)v7 + 18) = 265;
              v22 = v35;
              *((_OWORD *)v7 + 1) = v21;
              v23 = v36;
              *((_OWORD *)v7 + 2) = v22;
              *((_OWORD *)v7 + 3) = v23;
            }
            else
            {
              v24 = v33;
              v25 = v34;
              v26 = DWORD1(v34);
              *((_DWORD *)v7 + 18) = 104;
              *(_OWORD *)v7 = v24;
              *((_DWORD *)v7 + 4) = v25;
              *((_DWORD *)v7 + 5) = v26;
            }
          }
          else
          {
            v27 = v33;
            *((_DWORD *)v7 + 18) = 69;
            *(_OWORD *)v7 = v27;
          }
        }
        else
        {
          v28 = v33;
          v29 = DWORD1(v33);
          v30 = DWORD2(v33);
          *((_DWORD *)v7 + 18) = 52;
          *(_DWORD *)v7 = v28;
          *((_DWORD *)v7 + 1) = v29;
          *((_DWORD *)v7 + 2) = v30;
        }
        goto LABEL_36;
      }
      *((_DWORD *)v7 + 1) = DWORD1(v33);
      *((_DWORD *)v7 + 18) = 35;
    }
    else
    {
      *((_DWORD *)v7 + 18) = 18;
    }
    *(_DWORD *)v7 = v33;
LABEL_36:
    *((_BYTE *)v7 + 76) = 1;
    return v13;
  }
  v32 = 7847;
LABEL_39:
  v13 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v32,
    0LL);
  return v13;
}
