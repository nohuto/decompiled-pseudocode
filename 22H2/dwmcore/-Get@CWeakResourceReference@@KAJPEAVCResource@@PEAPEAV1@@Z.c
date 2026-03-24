/*
 * XREFs of ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18006541C
 * Callers:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800653D8 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CCDB8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801D5AF0 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801D7B0C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x180203894 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x18004F1F4 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakResourceReference@@@Z @ 0x1800654BC (--4-$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakRe.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x180065504 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, struct CWeakResourceReference **a2)
{
  unsigned int v2; // ebx
  CWeakResourceReference *v5; // rax
  __int64 v6; // rcx
  struct CWeakResourceReference *v7; // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CWeakResourceReference *v10; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( (*((_BYTE *)a1 + 32) & 8) != 0 )
  {
    v11 = a1;
    std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
      (unsigned __int64)a1,
      (__int64)v9,
      (const unsigned __int8 *)&v11);
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v10, *(_QWORD *)(v9[0] + 24LL));
    v7 = v10;
  }
  else
  {
    v5 = (CWeakResourceReference *)DefaultHeap::AllocClear(0x30uLL);
    if ( v5 )
      v5 = CWeakResourceReference::CWeakResourceReference(v5, a1);
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v10, v5);
    v7 = v10;
    if ( !v10 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x20u, 0LL);
      return v2;
    }
  }
  *a2 = v7;
  return v2;
}
