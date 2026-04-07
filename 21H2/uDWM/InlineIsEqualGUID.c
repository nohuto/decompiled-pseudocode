/*
 * XREFs of InlineIsEqualGUID @ 0x180043A28
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@Effects@Graphics@Windows@@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004391C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@.c)
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043990 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1FE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2050 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800C2050.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InlineIsEqualGUID(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
