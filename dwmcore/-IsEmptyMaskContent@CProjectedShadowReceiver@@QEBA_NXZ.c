/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180005464
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800052C8 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800054BC (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowReceiver::IsEmptyMaskContent(CProjectedShadowReceiver *this)
{
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 8)
        || (EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this),
            v3 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 288LL))(
               EffectiveMaskBrush,
               0LL,
               &v3))
        || v3 != 0;
  return result;
}
