/*
 * XREFs of ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x180005A00
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004FF4 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x180005A74 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowScene::IsEmptyProjection(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( *((_QWORD *)this + 9) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      v2 = *((_QWORD *)this + 12);
      if ( v2 )
      {
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowScene::CalculateOpacity(this, 0.0)) & _xmm) >= 0.0000011920929 )
        {
          return 0;
        }
      }
    }
  }
  return result;
}
