__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(
        CExpressionValueStack *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  __int64 v6; // rax
  CExpressionValue *v7; // rax
  char *v8; // rbx
  int v9; // xmm0_4
  int v10; // eax
  int v11; // xmm0_4
  int v12; // xmm1_4
  __int64 v13; // rax
  _DWORD *v14; // rbx
  CExpressionValue *v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rax
  CExpressionValue *v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // xmm0_8
  int v22; // eax
  char v23; // r9
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  int *v29; // rbx
  CExpressionValue *v30; // rax
  char *v31; // r14
  __int64 v32; // rax
  CExpressionValue *v33; // rax
  int *v34; // r12
  __int64 v35; // rax
  CExpressionValue *v36; // rax
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm2_4
  unsigned int v40; // ebx
  __int64 v42; // rax
  _DWORD *v43; // rbx
  CExpressionValue *v44; // rax
  __int64 v45; // rax
  CExpressionValue *v46; // rax
  _DWORD *v47; // r13
  __int64 v48; // rax
  CExpressionValue *v49; // rax
  _DWORD *v50; // r12
  __int64 v51; // rax
  CExpressionValue *v52; // rax
  __int64 v53; // xmm0_8
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  unsigned int v58; // [rsp+28h] [rbp-49h]
  __int64 v59; // [rsp+38h] [rbp-39h] BYREF
  int v60; // [rsp+40h] [rbp-31h]
  __int64 v61; // [rsp+48h] [rbp-29h] BYREF
  int v62; // [rsp+50h] [rbp-21h]
  __int128 v63; // [rsp+58h] [rbp-19h] BYREF
  __int128 v64; // [rsp+68h] [rbp-9h]
  __int128 v65; // [rsp+78h] [rbp+7h]
  __int128 v66; // [rsp+88h] [rbp+17h]
  int v67; // [rsp+E0h] [rbp+6Fh]

  v67 = a2;
  v4 = *((_DWORD *)this + 4);
  if ( v4 >= (unsigned int)a2 )
  {
    switch ( (_DWORD)a2 )
    {
      case 1:
        v6 = v4 - 1;
        if ( (unsigned int)v6 < *((_DWORD *)this + 12) )
        {
          v8 = (char *)(*((_QWORD *)this + 3) + 80 * v6);
        }
        else
        {
          v7 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          v8 = (char *)&CExpressionValueStack::s_emptyValue;
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
        }
        if ( *((_DWORD *)v8 + 18) == 18 )
        {
          v9 = *(_DWORD *)v8;
          *(_DWORD *)v8 = *(_DWORD *)v8;
          *((_DWORD *)v8 + 18) = 265;
          *(_QWORD *)(v8 + 4) = 0LL;
          *(_QWORD *)(v8 + 12) = 0LL;
          *((_DWORD *)v8 + 5) = v9;
          *((_QWORD *)v8 + 3) = 0LL;
          *((_QWORD *)v8 + 4) = 0LL;
          *((_DWORD *)v8 + 10) = v9;
          *(_QWORD *)(v8 + 44) = 0LL;
          *(_QWORD *)(v8 + 52) = 0LL;
          *((_DWORD *)v8 + 15) = 1065353216;
          v8[76] = 1;
LABEL_62:
          v40 = 0;
          *((_DWORD *)this + 4) += 1 - v67;
          return v40;
        }
        if ( *((_DWORD *)v8 + 18) != 52 )
        {
LABEL_40:
          v58 = 6324;
          goto LABEL_41;
        }
        v10 = *((_DWORD *)v8 + 2);
        v59 = *(_QWORD *)v8;
        v11 = v59;
        v12 = HIDWORD(v59);
        v60 = v10;
        *((_DWORD *)v8 + 18) = 265;
        *(_DWORD *)v8 = v11;
        *(_QWORD *)(v8 + 4) = 0LL;
        *(_QWORD *)(v8 + 12) = 0LL;
        *((_DWORD *)v8 + 5) = v12;
        *((_QWORD *)v8 + 3) = 0LL;
        *((_QWORD *)v8 + 4) = 0LL;
        *((_DWORD *)v8 + 10) = v10;
        *(_QWORD *)(v8 + 44) = 0LL;
        *(_QWORD *)(v8 + 52) = 0LL;
        *((_DWORD *)v8 + 15) = 1065353216;
        v8[76] = 1;
        goto LABEL_38;
      case 2:
        v13 = v4 - 2;
        v14 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v13 < *((_DWORD *)this + 12) )
        {
          v16 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v13);
        }
        else
        {
          v15 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v16 = &CExpressionValueStack::s_emptyValue;
        }
        v17 = (unsigned int)(*((_DWORD *)this + 4) - 1);
        if ( (unsigned int)v17 < *((_DWORD *)this + 12) )
        {
          v14 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v17);
        }
        else
        {
          v18 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
        }
        if ( v16[18] != 18 || v14[18] != 52 )
        {
          if ( v16[18] != 52 || v14[18] != 52 )
            goto LABEL_40;
          v20 = v14[2];
          v59 = *(_QWORD *)v14;
          v21 = *(_QWORD *)v16;
          LOBYTE(a4) = 1;
          v60 = v20;
          v22 = v16[2];
          v61 = v21;
          v62 = v22;
          D2DMatrixScaling(&v63, &v61, &v59, a4);
          v24 = v63;
          v25 = v64;
          v16[18] = 265;
          *(_OWORD *)v16 = v24;
          *((_BYTE *)v16 + 76) = 1;
          v26 = v65;
          *((_OWORD *)v16 + 1) = v25;
          v27 = v66;
          *((_OWORD *)v16 + 2) = v26;
          *((_OWORD *)v16 + 3) = v27;
          goto LABEL_39;
        }
        v19 = v14[2];
        v59 = *(_QWORD *)v14;
        v60 = v19;
        D2DMatrixScaling(&v63, a2, &v59);
        break;
      case 3:
        v28 = v4 - 3;
        v29 = (int *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v28 < *((_DWORD *)this + 12) )
        {
          v31 = (char *)(*((_QWORD *)this + 3) + 80 * v28);
        }
        else
        {
          v30 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v30);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v31 = (char *)&CExpressionValueStack::s_emptyValue;
        }
        v32 = (unsigned int)(*((_DWORD *)this + 4) - 2);
        if ( (unsigned int)v32 < *((_DWORD *)this + 12) )
        {
          v34 = (int *)(*((_QWORD *)this + 3) + 80 * v32);
        }
        else
        {
          v33 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v33);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v34 = (int *)&CExpressionValueStack::s_emptyValue;
        }
        v35 = (unsigned int)(*((_DWORD *)this + 4) - 1);
        if ( (unsigned int)v35 < *((_DWORD *)this + 12) )
        {
          v29 = (int *)(*((_QWORD *)this + 3) + 80 * v35);
        }
        else
        {
          v36 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v36);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
        }
        if ( *((_DWORD *)v31 + 18) != 18 || v34[18] != 18 || v29[18] != 18 )
          goto LABEL_40;
        v37 = *(_DWORD *)v31;
        v38 = *v34;
        v39 = *v29;
        *((_DWORD *)v31 + 18) = 265;
        *(_DWORD *)v31 = v37;
        *(_QWORD *)(v31 + 4) = 0LL;
        *(_QWORD *)(v31 + 12) = 0LL;
        *((_DWORD *)v31 + 5) = v38;
        *((_QWORD *)v31 + 3) = 0LL;
        *((_QWORD *)v31 + 4) = 0LL;
        *((_DWORD *)v31 + 10) = v39;
        *(_QWORD *)(v31 + 44) = 0LL;
        *(_QWORD *)(v31 + 52) = 0LL;
        *((_DWORD *)v31 + 15) = 1065353216;
        v31[76] = 1;
LABEL_38:
        v23 = 1;
LABEL_39:
        if ( v23 )
          goto LABEL_62;
        goto LABEL_40;
      case 4:
        v42 = v4 - 4;
        v43 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v42 < *((_DWORD *)this + 12) )
        {
          v16 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v42);
        }
        else
        {
          v44 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v44);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v16 = &CExpressionValueStack::s_emptyValue;
        }
        v45 = (unsigned int)(*((_DWORD *)this + 4) - 3);
        if ( (unsigned int)v45 < *((_DWORD *)this + 12) )
        {
          v47 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v45);
        }
        else
        {
          v46 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v46);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v47 = &CExpressionValueStack::s_emptyValue;
        }
        v48 = (unsigned int)(*((_DWORD *)this + 4) - 2);
        if ( (unsigned int)v48 < *((_DWORD *)this + 12) )
        {
          v50 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v48);
        }
        else
        {
          v49 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v49);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
          v50 = &CExpressionValueStack::s_emptyValue;
        }
        v51 = (unsigned int)(*((_DWORD *)this + 4) - 1);
        if ( (unsigned int)v51 < *((_DWORD *)this + 12) )
        {
          v43 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v51);
        }
        else
        {
          v52 = CExpressionValue::CExpressionValue((CExpressionValue *)&v63);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v52);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v63);
        }
        if ( v16[18] != 18 || v47[18] != 18 || v50[18] != 18 || v43[18] != 52 )
          goto LABEL_40;
        v53 = *(_QWORD *)v43;
        v62 = v43[2];
        v61 = v53;
        D2DMatrixScaling(&v63);
        break;
      default:
        goto LABEL_40;
    }
    v54 = v63;
    v55 = v64;
    v16[18] = 265;
    *(_OWORD *)v16 = v54;
    v56 = v65;
    *((_OWORD *)v16 + 1) = v55;
    v57 = v66;
    *((_OWORD *)v16 + 2) = v56;
    *((_BYTE *)v16 + 76) = 1;
    *((_OWORD *)v16 + 3) = v57;
    goto LABEL_62;
  }
  v58 = 6197;
LABEL_41:
  v40 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v58,
    0LL);
  return v40;
}
