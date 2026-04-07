/*
 * XREFs of ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18001618C
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001338C (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015E60 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016538 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::UnmetTabRequirementsMaybeUpdated(CWindowData *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
}
