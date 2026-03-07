__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  struct CProjectedShadowCaster *v3; // r14
  unsigned int v7; // edi
  CVisual *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  bool *v11; // r8
  float *v12; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  const struct CVisualTree *v17; // rdx
  int LightToCameraMatrix; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct CMILMatrix *v24; // [rsp+28h] [rbp-B9h]
  struct D2D_VECTOR_4F v25; // [rsp+38h] [rbp-A9h] BYREF
  struct D2D_VECTOR_4F v26; // [rsp+48h] [rbp-99h] BYREF
  __int128 v27; // [rsp+58h] [rbp-89h] BYREF
  __int128 v28; // [rsp+68h] [rbp-79h]
  __int128 v29; // [rsp+78h] [rbp-69h]
  __int128 v30; // [rsp+88h] [rbp-59h]
  int v31; // [rsp+98h] [rbp-49h]
  _OWORD v32[4]; // [rsp+A8h] [rbp-39h] BYREF
  int v33; // [rsp+E8h] [rbp+7h]
  const struct CVisualTree *v34; // [rsp+148h] [rbp+67h] BYREF
  __int64 v35; // [rsp+158h] [rbp+77h]

  v3 = *(struct CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(CVisual **)(*(_QWORD *)a3 + 64LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 200LL))(*((_QWORD *)this + 12));
  *((_BYTE *)a3 + 152) = 1;
  v35 = v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual(a2, v8)
    && (v34 = a2,
        *(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                     (char *)v3 + 80,
                     &v34,
                     v10)
                 + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v11)) & _xmm) >= 0.0000011920929
    && (v34 = a2,
        v12 = (float *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
                         (char *)v3 + 80,
                         &v34),
        (float)(v12[17] - v12[15]) >= 0.5)
    && (float)(v12[18] - v12[16]) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 13)
      || *((_QWORD *)a3 + 1) < *((_QWORD *)CVisual::FindTreeData(v8, a2) + 31) )
    {
      CVisual::GetEffectiveSize(v8, (float *)&v34, (float *)&v34 + 1);
      v33 = 0;
      v25.y = *((float *)&v34 + 1) * 0.5;
      v25.z = 0.0;
      v25.x = *(float *)&v34 * 0.5;
      LODWORD(v25.w) = (_DWORD)FLOAT_1_0;
      v15 = CVisual::CalcSrcToDestVisualTransform(a2, v14, v8, v35, v32);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2CDu, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v26, &v25);
        v17 = (const struct CVisualTree *)*((_QWORD *)this + 12);
        v25.x = v26.x / v26.w;
        v25.z = v26.z / v26.w;
        v25.y = v26.y / v26.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v17,
                                (const struct CCompositionLight *)&v25,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84),
                                v24);
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, LightToCameraMatrix, 0x2D7u, 0LL);
        }
        else
        {
          v27 = v32[0];
          v31 = v33;
          v28 = v32[1];
          v29 = v32[2];
          v30 = v32[3];
          CMILMatrix::Multiply((CMILMatrix *)&v27, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v20 = v31;
          v21 = v28;
          *((_OWORD *)a3 + 1) = v27;
          v22 = v29;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v30;
          *((_OWORD *)a3 + 3) = v22;
          *((_OWORD *)a3 + 4) = v23;
          *((_DWORD *)a3 + 20) = v20;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
        }
      }
    }
    return v7;
  }
  else
  {
    *((_BYTE *)a3 + 152) = 0;
    CProjectedShadowScene::DiscardCachesForCaster(this, v3);
    return 0LL;
  }
}
