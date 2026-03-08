/*
 * XREFs of ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x18022F7C4
 * Callers:
 *     _lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator() @ 0x18022D4D4 (_lambda_532e28217b0c2aa3dc63221d13b9d2f4_--operator().c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180233C0C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180235210 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CWeakResourceReference *__fastcall CInteractionTracker::GetWeakRefToSelf(struct CWeakResourceReference **a1)
{
  struct CWeakResourceReference **v1; // rbx
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 9;
  if ( !a1[9] )
  {
    *v1 = 0LL;
    v2 = CWeakReference<CResource>::Create((struct CResource *)a1, a1 + 9);
    if ( v2 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
  }
  return *v1;
}
