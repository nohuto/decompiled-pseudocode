/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A216C
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A1110 (--_G-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@.c)
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A1FD0 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C00A2C90 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 *     ??1?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAA@XZ @ 0x1C00A2F44 (--1-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEA.c)
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00C6698 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
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
