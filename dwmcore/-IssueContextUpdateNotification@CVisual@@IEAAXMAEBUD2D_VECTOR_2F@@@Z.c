/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1800DF960 (-GetNotifiedEffectiveLayoutSize@CVisual@@QEBA-AUVector2@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldOffset@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1800DF9B8 (-GetNotifiedWorldOffset@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1800DFA18 (-GetNotifiedWorldUpVector@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1800DFA78 (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1800DFAD0 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800DFBC8 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1800DFC8C (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800DFCCC (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1800DFD18 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800DFD58 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(FLOAT *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  unsigned int v3; // edi
  char v4; // r14
  const struct CMILMatrix *v5; // r12
  FLOAT v9; // xmm1_4
  FLOAT v10; // xmm0_4
  unsigned int v11; // xmm2_4
  unsigned __int64 v12; // rcx
  FLOAT v13; // xmm1_4
  struct D2D_POINT_2F v14; // xmm10_8
  float v15; // xmm9_4
  float v16; // xmm0_4
  float y; // xmm6_4
  float x; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  struct D2D_POINT_2F v22; // xmm8_8
  __int64 v23; // rax
  __int64 v24; // rcx
  struct D2D_POINT_2F v25; // [rsp+58h] [rbp-69h] BYREF
  int v26; // [rsp+60h] [rbp-61h]
  _QWORD v27[2]; // [rsp+68h] [rbp-59h] BYREF
  struct D2D_POINT_2F v28; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-41h]
  unsigned __int64 v30; // [rsp+88h] [rbp-39h]
  unsigned int v31; // [rsp+90h] [rbp-31h]

  v3 = 0;
  v4 = 0;
  v5 = (const struct CMILMatrix *)(this + 156);
  CVisual::GetNotifiedWorldOffset(this, &v28);
  v9 = this[168];
  v10 = this[169];
  v11 = *((_DWORD *)this + 170);
  v30 = __PAIR64__(LODWORD(v10), LODWORD(v9));
  v31 = v11;
  v12 = *(_QWORD *)&v28 - __PAIR64__(LODWORD(v10), LODWORD(v9));
  if ( v28 == __PAIR64__(LODWORD(v10), LODWORD(v9)) )
    v12 = v29 - (unsigned __int64)v11;
  if ( v12 )
  {
    v28.x = v9;
    v28.y = v10;
    v29 = v11;
    CVisual::SetNotifiedWorldOffset(this, &v28);
    v4 = 1;
  }
  CVisual::GetNotifiedEffectiveLayoutSize(this, &v28);
  v13 = this[36];
  v25.x = this[35];
  v25.y = v13;
  v14 = v25;
  if ( v28 != v25 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))CVisual::SetNotifiedEffectiveLayoutSize)(this, v25);
    v4 = 1;
  }
  v15 = CVisual::CalculateWorldRenderingScale((CVisual *)this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale((CVisual *)this) != v15 )
  {
    CVisual::SetNotifiedWorldRenderingScale((CVisual *)this, v15);
    v4 = 1;
  }
  v16 = this[157] * 0.0;
  v25.x = (float)((float)((float)(this[160] * 0.0) + (float)(*(float *)v5 * 0.0)) + this[168]) + a3->x;
  v25.y = (float)((float)((float)(this[161] * 0.0) + v16) + this[169]) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(&v25, v5, &v28)
    && (y = v28.y, x = v28.x, v19 = sqrtf_0((float)(y * y) + (float)(x * x)), v19 > 0.00000011920929) )
  {
    v29 = 0;
    v20 = x / v19;
    v21 = y / v19;
    v28.x = v20;
    v28.y = v21;
  }
  else
  {
    v21 = 0.0;
    v28 = 0LL;
    v20 = 0.0;
  }
  CVisual::GetNotifiedWorldUpVector(this, &v25);
  v22 = v28;
  if ( v25.x == v20 && v25.y == v21 )
  {
    if ( !v4 )
      return;
  }
  else
  {
    v29 = 0;
    CVisual::SetNotifiedWorldUpVector(this, &v28);
  }
  v23 = *((_QWORD *)this + 6);
  if ( v23 )
    v3 = *(_DWORD *)(v23 + 76);
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
  v27[0] = v3;
  v27[1] = *((unsigned int *)this + 16);
  v26 = 0;
  v31 = v11;
  v25 = v22;
  v28 = v14;
  CoreUICallSend(v24, v27, 2LL, 16LL, 9, &unk_180339497, v15);
}
