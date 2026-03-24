/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801FC2D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memcmp_0 @ 0x1800F3FFF (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(__int64 this)
{
  unsigned int v1; // edx
  __int64 v2; // r14
  unsigned int v3; // r15d
  unsigned int v4; // ecx
  __int64 v5; // rax
  const __m128i *v6; // rdi
  CExpressionValue *v7; // rax
  __m128i *v8; // rbx
  __int64 v9; // rdx
  CExpressionValue *v10; // rax
  char v11; // si
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  bool v20; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned int v24; // [rsp+28h] [rbp-39h]
  __m128i v25; // [rsp+38h] [rbp-29h]
  __m128i v26; // [rsp+48h] [rbp-19h]
  _BYTE v27[80]; // [rsp+58h] [rbp-9h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *(_DWORD *)(this + 48);
    v5 = v1 - 2;
    v6 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (__m128i *)(*(_QWORD *)(v2 + 24) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v1 = *(_DWORD *)(v2 + 16);
      v8 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      v4 = *(_DWORD *)(v2 + 48);
    }
    v9 = v1 - 1;
    if ( (unsigned int)v9 < v4 )
    {
      v6 = (const __m128i *)(*(_QWORD *)(v2 + 24) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    this = v8[4].m128i_u32[2];
    v11 = 0;
    v3 = 0;
    if ( (_DWORD)this != v6[4].m128i_i32[2] )
    {
      v24 = 1534;
      goto LABEL_3;
    }
    v12 = this - 17;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v20 = *(float *)v8->m128i_i32 == *(float *)v6->m128i_i32;
        goto LABEL_29;
      }
      v14 = v13 - 17;
      if ( v14 )
      {
        v15 = v14 - 17;
        if ( v15 )
        {
          v16 = v15 - 17;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
            {
              v25 = _mm_loadu_si128(v8);
              v26 = _mm_loadu_si128(v6);
              if ( *(float *)v25.m128i_i32 != *(float *)v26.m128i_i32
                || *(float *)&v25.m128i_i32[1] != *(float *)&v26.m128i_i32[1]
                || *(float *)&v25.m128i_i32[2] != *(float *)&v26.m128i_i32[2] )
              {
                goto LABEL_45;
              }
              v20 = *(float *)&v25.m128i_i32[3] == *(float *)&v26.m128i_i32[3];
              goto LABEL_29;
            }
            v18 = v17 - 1;
            if ( v18 )
            {
              this = (unsigned int)(v18 - 33);
              if ( (_DWORD)this )
              {
                if ( (_DWORD)this != 161 )
                {
                  v24 = 1596;
                  goto LABEL_3;
                }
                v19 = memcmp_0(v8, v6, 0x40uLL) == 0;
                goto LABEL_44;
              }
              if ( *(float *)v8->m128i_i32 != *(float *)v6->m128i_i32
                || *(float *)&v8->m128i_i32[1] != *(float *)&v6->m128i_i32[1]
                || *(float *)&v8->m128i_i32[2] != *(float *)&v6->m128i_i32[2]
                || *(float *)&v8->m128i_i32[3] != *(float *)&v6->m128i_i32[3]
                || *(float *)v8[1].m128i_i32 != *(float *)v6[1].m128i_i32 )
              {
                goto LABEL_45;
              }
              v20 = *(float *)&v8[1].m128i_i32[1] == *(float *)&v6[1].m128i_i32[1];
LABEL_29:
              if ( v20 )
                v11 = 1;
              goto LABEL_45;
            }
          }
          v21 = v8->m128i_i64[0] - v6->m128i_i64[0];
          if ( v8->m128i_i64[0] == v6->m128i_i64[0] )
            v21 = v8->m128i_i64[1] - v6->m128i_i64[1];
          v19 = v21 == 0;
        }
        else
        {
          v22 = v8->m128i_i64[0] - v6->m128i_i64[0];
          if ( v8->m128i_i64[0] == v6->m128i_i64[0] )
            v22 = v8->m128i_u32[2] - (unsigned __int64)v6->m128i_u32[2];
          v19 = v22 == 0;
        }
      }
      else
      {
        v19 = v8->m128i_i64[0] == v6->m128i_i64[0];
      }
    }
    else
    {
      v19 = v8->m128i_i8[0] == v6->m128i_i8[0];
    }
LABEL_44:
    v11 = v19;
LABEL_45:
    v8[4].m128i_i32[2] = 17;
    v8[4].m128i_i8[12] = 1;
    v8->m128i_i8[0] = v11;
    --*(_DWORD *)(v2 + 16);
    return v3;
  }
  v24 = 1506;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v24,
    0LL);
  return v3;
}
