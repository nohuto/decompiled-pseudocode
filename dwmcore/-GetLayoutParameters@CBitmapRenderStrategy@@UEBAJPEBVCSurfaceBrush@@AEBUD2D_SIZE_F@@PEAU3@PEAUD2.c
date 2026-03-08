/*
 * XREFs of ?GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180073620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D8418 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetLayoutParameters(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  void (__fastcall ***v6)(_QWORD, GUID *, __int128 *); // rcx
  unsigned int v7; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  FLOAT v13; // xmm0_4
  FLOAT v14; // xmm1_4
  FLOAT v15; // xmm2_4
  FLOAT v16; // xmm0_4
  FLOAT v17; // xmm3_4
  FLOAT v18; // xmm1_4
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD **); // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // bl
  unsigned int v25; // ecx
  float v26; // xmm1_4
  float v27; // xmm0_4
  FLOAT v28; // xmm2_4
  FLOAT v29; // xmm3_4
  FLOAT v30; // xmm4_4
  FLOAT v31; // xmm5_4
  float v32; // xmm8_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // xmm1_8
  __int64 v37; // rcx
  _QWORD *v38; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v39[8]; // [rsp+48h] [rbp-89h] BYREF
  int v40; // [rsp+88h] [rbp-49h]
  __int128 v41; // [rsp+98h] [rbp-39h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-9h]

  v6 = (void (__fastcall ***)(_QWORD, GUID *, __int128 *))*((_QWORD *)a2 + 13);
  v7 = 0;
  v38 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  (**v6)(v6, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v41);
  v10 = *(_QWORD *)v41;
  *(_QWORD *)&v42 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *))(v10 + 64))(v41, &v42) < 0 )
  {
    if ( (_QWORD)v42 )
    {
      v11 = *(int *)(*(_QWORD *)(v42 + 8) + 4LL) + v42 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( (_QWORD)v41 )
    {
      v12 = *(int *)(*(_QWORD *)(v41 + 8) + 4LL) + v41 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_6;
  }
  v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v42 + 8) + 4LL) + v42 + 8);
  v21 = (**v20)(v20, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v38);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v41);
  if ( v21 >= 0 )
  {
    v40 = 0;
    v41 = 0LL;
    v22 = v38[1];
    v42 = 0LL;
    v23 = (__int64)v38 + *(int *)(v22 + 16) + 8;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int128 *))(*(_QWORD *)v23 + 8LL))(v23, v39, &v41);
    v43 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int128 *))(*v38 + 168LL))(v38, &v43) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v39, *(float *)&v43, *((float *)&v43 + 1), 0.0);
      v24 = 1;
    }
    else if ( !v24 )
    {
      v31 = *(float *)&v41;
      v30 = *((float *)&v41 + 1);
      v33 = *(float *)&v41;
      v29 = *((float *)&v41 + 2);
      v32 = *((float *)&v41 + 1);
      v28 = *((float *)&v41 + 3);
      v27 = *((float *)&v41 + 2);
      v26 = *((float *)&v41 + 3);
      goto LABEL_14;
    }
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v39, (struct MilRectF *)&v41);
    v26 = *((float *)&v42 + 3);
    v27 = *((float *)&v42 + 2);
    v28 = *((float *)&v41 + 3);
    v29 = *((float *)&v41 + 2);
    v30 = *((float *)&v41 + 1);
    v31 = *(float *)&v41;
    v32 = *((float *)&v42 + 1);
    v33 = *(float *)&v42;
LABEL_14:
    v34 = v27 - v33;
    if ( v34 == 0.0 || (v35 = v26 - v32, v35 == 0.0) )
    {
      v7 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(
        v25,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2003304441,
        0x3B2u,
        0LL);
    }
    else
    {
      a4->width = v34;
      a4->height = v35;
      a5->left = v31;
      a5->top = v30;
      a5->right = v29;
      a5->bottom = v28;
      if ( v24 )
      {
        *(_QWORD *)&v43 = v39[0];
        *((_QWORD *)&v43 + 1) = v39[2];
        v44 = v39[6];
      }
      else
      {
        v44 = 0LL;
        v43 = *(_OWORD *)&_xmm;
      }
      v36 = v44;
      *(_OWORD *)&a6->m11 = v43;
      *(_QWORD *)&a6->m[2][0] = v36;
    }
    goto LABEL_7;
  }
LABEL_6:
  v13 = *((float *)a2 + 41) - *((float *)a2 + 39);
  a4->width = *((float *)a2 + 40) - *((float *)a2 + 38);
  a4->height = v13;
  v14 = *((float *)a2 + 39);
  v15 = *((float *)a2 + 40);
  v16 = *((float *)a2 + 41);
  a5->left = *((FLOAT *)a2 + 38);
  a5->top = v14;
  a5->right = v15;
  a5->bottom = v16;
  LODWORD(v17) = *((_DWORD *)a2 + 38) ^ _xmm;
  LODWORD(v18) = *((_DWORD *)a2 + 39) ^ _xmm;
  *(_QWORD *)&a6->m11 = 1065353216LL;
  a6->m21 = 0.0;
  a6->m22 = 1.0;
  a6->dx = v17;
  a6->dy = v18;
LABEL_7:
  if ( v38 )
  {
    v37 = (__int64)v38 + *(int *)(v38[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return v7;
}
