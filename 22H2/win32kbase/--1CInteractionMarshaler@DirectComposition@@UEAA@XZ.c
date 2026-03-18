/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009379C
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C00923F0 (--_G-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@.c)
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0093600 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C00942C0 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 *     ??1?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAA@XZ @ 0x1C0094578 (--1-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEA.c)
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00B6BB8 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::~CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>((char *)this + 296);
  CDynamicArray<unsigned int,2003858261>::Reset((char *)this + 280);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 160));
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 56));
}
