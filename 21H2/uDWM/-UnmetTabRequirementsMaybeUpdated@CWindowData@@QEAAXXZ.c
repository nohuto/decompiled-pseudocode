/*
 * XREFs of ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x1800169CC
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180013BCC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800166A0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016D78 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
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
