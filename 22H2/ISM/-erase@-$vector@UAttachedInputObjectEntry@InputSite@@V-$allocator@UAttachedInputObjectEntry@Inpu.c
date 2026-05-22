/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800F3BC0
 * Callers:
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A230 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A330 (-OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BCA0 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BDC0 (-OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BEE0 (-OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C000 (-OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C120 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C240 (-OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C360 (-OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C480 (-OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C5A0 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C6B0 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C7C0 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C8D0 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C9E0 (-OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CAF0 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CC00 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CD10 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180013A20 (-OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x180001F44 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
    a3 + 2,
    *(_QWORD **)(a1 + 8),
    a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
