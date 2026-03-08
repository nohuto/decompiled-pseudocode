/*
 * XREFs of ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004E20
 * Callers:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180004D30 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCProjectedShadowCaster@@@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x180004ED4 (--$_Find_lower_bound@PEAVCProjectedShadowCaster@@@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCa.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180005178 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  _QWORD *v10; // r10
  struct CProjectedShadowScene::ReceiverEntry *v11; // r15
  _QWORD *i; // rbx
  unsigned __int64 v13; // r11
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x397u, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v10 = (_QWORD *)*((_QWORD *)this + 8);
    v11 = ReceiverEntry;
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v20 = i[2];
      std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CProjectedShadowCaster *>(
        (char *)v11 + 8,
        v18,
        &v20);
      if ( !*(_BYTE *)(v19 + 25) && v13 >= *(_QWORD *)(v19 + 32) && v19 != *((_QWORD *)v11 + 1) )
      {
        v15 = *(_QWORD *)(v19 + 40) + 64LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 64LL) + 8LL);
        v16 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v15 + 16LL))(
                v15,
                a2,
                *(_QWORD *)(v13 + 64) + 140LL,
                0LL);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3ACu, 0LL);
          return v8;
        }
        v10 = (_QWORD *)*((_QWORD *)this + 8);
      }
    }
  }
  return v8;
}
