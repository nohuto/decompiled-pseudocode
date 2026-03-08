/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E54AC
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E4A54 (--1CInteraction@@MEAA@XZ.c)
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x1801A0370 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E5530 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 648));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 568);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 480);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 408);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 320);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this);
}
