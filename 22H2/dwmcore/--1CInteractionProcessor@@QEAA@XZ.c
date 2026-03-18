/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E607C
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E5624 (--1CInteraction@@MEAA@XZ.c)
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x1801A3950 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097870 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E6100 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC624 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
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
