/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x180259CF0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(__int64 this)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  unsigned int v3; // r14d
  __int64 v4; // rax
  const __m128i *v5; // rdi
  CExpressionValue *v6; // rax
  __m128i *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  char v10; // si
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  bool v18; // zf
  bool v19; // zf
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-98h]
  __m128i v24; // [rsp+30h] [rbp-88h]
  __m128i v25; // [rsp+40h] [rbp-78h]
  _BYTE v26[80]; // [rsp+50h] [rbp-68h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *(_DWORD *)(this + 48) )
    {
      v7 = (__m128i *)(*(_QWORD *)(this + 24) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*(_DWORD *)(v2 + 16) - 1);
    if ( (unsigned int)v8 < *(_DWORD *)(v2 + 48) )
    {
      v5 = (const __m128i *)(*(_QWORD *)(v2 + 24) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    }
    this = v7[4].m128i_u32[2];
    v10 = 0;
    v3 = 0;
    if ( (_DWORD)this != v5[4].m128i_i32[2] )
    {
      v23 = 1534;
      goto LABEL_3;
    }
    v11 = this - 17;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v19 = *(float *)v7->m128i_i32 == *(float *)v5->m128i_i32;
        goto LABEL_29;
      }
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 17;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( !v16 )
            {
              v24 = _mm_loadu_si128(v7);
              v25 = _mm_loadu_si128(v5);
              if ( *(float *)v24.m128i_i32 != *(float *)v25.m128i_i32
                || *(float *)&v24.m128i_i32[1] != *(float *)&v25.m128i_i32[1]
                || *(float *)&v24.m128i_i32[2] != *(float *)&v25.m128i_i32[2] )
              {
                goto LABEL_45;
              }
              v19 = *(float *)&v24.m128i_i32[3] == *(float *)&v25.m128i_i32[3];
              goto LABEL_29;
            }
            v17 = v16 - 1;
            if ( v17 )
            {
              this = (unsigned int)(v17 - 33);
              if ( (_DWORD)this )
              {
                if ( (_DWORD)this != 161 )
                {
                  v23 = 1596;
                  goto LABEL_3;
                }
                v18 = memcmp_0(v7, v5, 0x40uLL) == 0;
                goto LABEL_44;
              }
              if ( *(float *)v7->m128i_i32 != *(float *)v5->m128i_i32
                || *(float *)&v7->m128i_i32[1] != *(float *)&v5->m128i_i32[1]
                || *(float *)&v7->m128i_i32[2] != *(float *)&v5->m128i_i32[2]
                || *(float *)&v7->m128i_i32[3] != *(float *)&v5->m128i_i32[3]
                || *(float *)v7[1].m128i_i32 != *(float *)v5[1].m128i_i32 )
              {
                goto LABEL_45;
              }
              v19 = *(float *)&v7[1].m128i_i32[1] == *(float *)&v5[1].m128i_i32[1];
LABEL_29:
              if ( v19 )
                v10 = 1;
              goto LABEL_45;
            }
          }
          v20 = v7->m128i_i64[0] - v5->m128i_i64[0];
          if ( v7->m128i_i64[0] == v5->m128i_i64[0] )
            v20 = v7->m128i_i64[1] - v5->m128i_i64[1];
          v18 = v20 == 0;
        }
        else
        {
          v21 = v7->m128i_i64[0] - v5->m128i_i64[0];
          if ( v7->m128i_i64[0] == v5->m128i_i64[0] )
            v21 = v7->m128i_u32[2] - (unsigned __int64)v5->m128i_u32[2];
          v18 = v21 == 0;
        }
      }
      else
      {
        v18 = v7->m128i_i64[0] == v5->m128i_i64[0];
      }
    }
    else
    {
      v18 = v7->m128i_i8[0] == v5->m128i_i8[0];
    }
LABEL_44:
    v10 = v18;
LABEL_45:
    v7[4].m128i_i32[2] = 17;
    v7[4].m128i_i8[12] = 1;
    v7->m128i_i8[0] = v10;
    --*(_DWORD *)(v2 + 16);
    return v3;
  }
  v23 = 1506;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v23,
    0LL);
  return v3;
}
