/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004E20 (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180004C78 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180005178 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1800051A0 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800052C8 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180005500 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x180005910 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x180005984 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800059F0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005BBC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006078 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x1800075EC (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008928 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x18012F55C (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18012F5AA (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x1801BF4DC (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18024542C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180247970 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x180247D48 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x180248594 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 *     ??0?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProjectedShadow@@@Z @ 0x180248660 (--0-$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProjectedShadow@@@.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802B4D70 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 */

__int64 __fastcall CProjectedShadowScene::PrepareShadows(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  const struct CVisualTree *v3; // r13
  struct CVisual *v7; // rax
  CVisual *v8; // rax
  struct CTreeData *TreeData; // rax
  struct CComposition *v10; // rdx
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // r15
  CProjectedShadowScene *v12; // rcx
  int updated; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 result; // rax
  struct CComposition *v17; // rcx
  struct CComposition *v18; // rbx
  struct CCompositionLight *v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // ecx
  float z; // xmm6_4
  float v23; // xmm7_4
  const struct CVisualTree *v24; // rdx
  CProjectedShadowScene *v25; // rcx
  float v26; // xmm0_4
  unsigned __int64 *v27; // rax
  CProjectedShadow *v28; // r14
  CProjectedShadow *v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  struct CCompositionLight *v37; // r12
  const struct CVisualTree *v38; // rdx
  const struct CVisualTree *v39; // rdx
  struct CMILMatrix *v40; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v41; // [rsp+28h] [rbp-E0h]
  unsigned int v42; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v43; // [rsp+38h] [rbp-D0h]
  __int64 v44[3]; // [rsp+40h] [rbp-C8h] BYREF
  struct CCompositionLight *v45; // [rsp+58h] [rbp-B0h]
  struct CComposition *v46; // [rsp+60h] [rbp-A8h]
  __int128 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h]
  __int128 v49; // [rsp+88h] [rbp-80h]
  __int128 v50; // [rsp+98h] [rbp-70h]
  int v51; // [rsp+A8h] [rbp-60h]
  __int128 v52; // [rsp+ACh] [rbp-5Ch] BYREF
  __int128 v53; // [rsp+BCh] [rbp-4Ch]
  __int128 v54; // [rsp+CCh] [rbp-3Ch]
  __int128 v55; // [rsp+DCh] [rbp-2Ch]
  int v56; // [rsp+ECh] [rbp-1Ch]
  _OWORD v57[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v58; // [rsp+138h] [rbp+30h]
  _OWORD v59[4]; // [rsp+148h] [rbp+40h] BYREF
  int v60; // [rsp+188h] [rbp+80h]
  _OWORD v61[4]; // [rsp+198h] [rbp+90h] BYREF
  int v62; // [rsp+1D8h] [rbp+D0h]
  _OWORD v63[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v64; // [rsp+228h] [rbp+120h]
  struct D2D_VECTOR_4F v65; // [rsp+238h] [rbp+130h] BYREF
  char v66[16]; // [rsp+248h] [rbp+140h] BYREF
  char v67[64]; // [rsp+258h] [rbp+150h] BYREF
  int v68; // [rsp+2E0h] [rbp+1D8h]
  struct CProjectedShadowCaster *v70; // [rsp+2F0h] [rbp+1E8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 1007);
  v43 = (struct CCompositionLight *)*((_QWORD *)a3 + 8);
  if ( CProjectedShadowScene::IsEmptyProjection((CProjectedShadowScene *)this)
    || (v7 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[12] + 200LL))(this[12]),
        !CProjectedShadowScene::IsValidVisual(v3, v7)) )
  {
    CProjectedShadowScene::ClearShadows((CProjectedShadowScene *)this, 1);
    return 0LL;
  }
  if ( this[13] )
  {
    v8 = (CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[12] + 200LL))(this[12]);
    TreeData = CVisual::FindTreeData(v8, v3);
    v10 = this[13];
    if ( (unsigned __int64)v10 <= *((_QWORD *)TreeData + 31) )
      v10 = (struct CComposition *)*((_QWORD *)TreeData + 31);
  }
  else
  {
    v10 = (struct CComposition *)*((_QWORD *)this[2] + 62);
  }
  this[13] = v10;
  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry((CProjectedShadowScene *)this, a3);
  updated = CProjectedShadowScene::UpdateReceiverEntry(v12, a2, ReceiverEntry);
  v15 = updated;
  if ( updated < 0 )
  {
    v42 = 819;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, v42, 0LL);
  }
  else
  {
    result = 0LL;
    if ( !*((_BYTE *)ReceiverEntry + 100) )
      return result;
    v17 = this[8];
    v46 = v17;
    v18 = *(struct CComposition **)v17;
    while ( v18 != v17 )
    {
      v68 = result + 1;
      if ( (int)result + 1 > 5 )
        break;
      v70 = (struct CProjectedShadowCaster *)*((_QWORD *)v18 + 2);
      v19 = (struct CCompositionLight *)*((_QWORD *)v70 + 8);
      v45 = v19;
      if ( v19 == v43 )
        goto LABEL_14;
      v15 = CProjectedShadowScene::UpdateCasterEntry(
              (CProjectedShadowScene *)this,
              v3,
              (struct CComposition *)((char *)v18 + 16));
      if ( (v15 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v15, 0x34Fu, 0LL);
        return v15;
      }
      if ( !*((_BYTE *)v18 + 168) )
        goto LABEL_14;
      v62 = 0;
      updated = CVisual::CalcSrcToDestVisualTransform(v3, v20, v19, v43, v61);
      v15 = updated;
      if ( updated < 0 )
      {
        v42 = 856;
        goto LABEL_45;
      }
      *(_OWORD *)&v44[1] = _xmm;
      z = CMILMatrix::Transform4DVector((CMILMatrix *)v61, &v65, (const struct D2D_VECTOR_4F *)&v44[1])->z;
      v23 = CProjectedShadowScene::CalculateOpacity((CProjectedShadowScene *)this, z);
      v26 = CProjectedShadowScene::CalculateBlurRadius((CProjectedShadowScene *)this, z);
      if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.0000011920929
        && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
             v25,
             v24,
             (struct CComposition *)((char *)v18 + 16),
             ReceiverEntry,
             v26) )
      {
        v27 = (unsigned __int64 *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                                    (char *)ReceiverEntry + 8,
                                    v66,
                                    &v70);
        v28 = *(CProjectedShadow **)(*v27 + 40);
        if ( !v28 )
        {
          v29 = (CProjectedShadow *)CProjectedShadow::operator new(*v27);
          if ( v29 )
            v29 = CProjectedShadow::CProjectedShadow(v29, this[2]);
          wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>(
            v44,
            v29);
          v28 = (CProjectedShadow *)v44[0];
          v30 = CProjectedShadow::Initialize((CProjectedShadow *)v44[0], (struct CProjectedShadowScene *)this, v70, a3);
          v15 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x36Au, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v44);
            return v15;
          }
          v32 = std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                  (char *)ReceiverEntry + 8,
                  v67,
                  &v70);
          v33 = *(_QWORD *)v32;
          v34 = *(_QWORD *)(*(_QWORD *)v32 + 40LL);
          v44[1] = v34;
          *(_QWORD *)(v33 + 40) = v28;
          if ( v28 )
          {
            (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v28 + 8LL))(v28);
            v34 = v44[1];
          }
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v44);
        }
        CProjectedShadow::SetShadowOpacity(v28, v23);
        CProjectedShadow::SetBlurRadius(v28, v26);
        v36 = *((_QWORD *)v28 + 13);
        if ( v36 < (unsigned __int64)this[13] || v36 < *((_QWORD *)ReceiverEntry + 3) || v36 < *((_QWORD *)v18 + 3) )
        {
          v37 = v45;
          v64 = 0;
          updated = CVisual::CalcSrcToDestVisualTransform(v3, v35, v43, v45, v63);
          v15 = updated;
          if ( updated < 0 )
          {
            v42 = 892;
            goto LABEL_45;
          }
          v38 = this[12];
          v60 = 0;
          updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v38, v43, (struct CVisual *)v59, v40);
          v15 = updated;
          if ( updated < 0 )
          {
            v42 = 895;
            goto LABEL_45;
          }
          v47 = v61[0];
          v51 = v62;
          v48 = v61[1];
          v49 = v61[2];
          v50 = v61[3];
          CMILMatrix::Multiply((CMILMatrix *)&v47, (const struct CMILMatrix *)v59);
          v39 = this[12];
          v58 = 0;
          v59[0] = v47;
          v60 = v51;
          v59[1] = v48;
          v59[2] = v49;
          v59[3] = v50;
          updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v39, v37, (struct CVisual *)v57, v41);
          v15 = updated;
          if ( updated < 0 )
          {
            v42 = 899;
            goto LABEL_45;
          }
          v52 = v63[0];
          v56 = v64;
          v53 = v63[1];
          v54 = v63[2];
          v55 = v63[3];
          CMILMatrix::Multiply((CMILMatrix *)&v52, (const struct CMILMatrix *)v57);
          v57[0] = v52;
          v58 = v56;
          v57[1] = v53;
          v57[2] = v54;
          v57[3] = v55;
          CProjectedShadow::SetTransforms(
            v28,
            (const struct CMILMatrix *)v61,
            (const struct CMILMatrix *)v59,
            (const struct CMILMatrix *)v57);
        }
      }
      else
      {
LABEL_14:
        std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
          (char *)ReceiverEntry + 8,
          &v70);
      }
      v18 = *(struct CComposition **)v18;
      LODWORD(result) = v68;
      v17 = v46;
    }
  }
  return v15;
}
