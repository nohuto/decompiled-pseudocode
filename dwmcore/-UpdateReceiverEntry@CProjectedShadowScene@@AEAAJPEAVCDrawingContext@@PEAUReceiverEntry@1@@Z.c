/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800052C8
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180005178 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180005244 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180005464 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800054BC (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800059F0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005BBC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180005D9C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // r14
  const struct CVisualTree *v6; // r15
  unsigned int v8; // esi
  struct CVisual *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  struct CBrush *EffectiveMaskBrush; // rax
  struct CBrush *v13; // rcx
  __int64 v14; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 **ReceiverEntry; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 1007);
  v8 = 0;
  v9 = (struct CVisual *)*((_QWORD *)*a3 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 200LL))(*((_QWORD *)this + 12));
  *((_BYTE *)a3 + 100) = 1;
  v11 = v10;
  v19 = 0LL;
  if ( CProjectedShadowReceiver::IsEmptyMaskContent(v3) )
    goto LABEL_13;
  if ( !CProjectedShadowScene::IsValidVisual(v6, v9) )
    goto LABEL_13;
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(v3);
  v13 = (struct CBrush *)((char *)EffectiveMaskBrush + *(int *)(*((_QWORD *)EffectiveMaskBrush + 8) + 8LL) + 64);
  if ( (**(int (__fastcall ***)(struct CBrush *, char *, __int128 *))v13)(v13, (char *)v9 + 140, &v19) < 0
    || (float)(*((float *)&v19 + 2) - *(float *)&v19) < 0.5
    || (float)(*((float *)&v19 + 3) - *((float *)&v19 + 1)) < 0.5 )
  {
    goto LABEL_13;
  }
  if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 13)
    && (unsigned __int64)a3[3] >= *((_QWORD *)CVisual::FindTreeData(v9, v6) + 31) )
  {
    return v8;
  }
  v16 = CVisual::CalcSrcToDestVisualTransform(v6, v14, v9, v11, a3 + 4);
  v8 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x302u, 0LL);
    return v8;
  }
  a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 2) + 496LL);
  if ( CProjectedShadowScene::IsShadowInFrontOfReceiver(
         this,
         a2,
         (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
  {
    return v8;
  }
LABEL_13:
  *((_BYTE *)a3 + 100) = 0;
  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, v3);
  ReceiverEntry[3] = 0LL;
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
  return 0LL;
}
