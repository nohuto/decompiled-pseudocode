/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180005500
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180004CBC (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800054D8 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180005778 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180005870 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800059F0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180005A70 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005BBC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006078 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000762C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

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
