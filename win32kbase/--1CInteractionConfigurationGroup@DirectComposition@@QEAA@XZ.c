/*
 * XREFs of ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C00A2C90
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A216C (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C00A2CC4 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup(
        DirectComposition::CInteractionConfigurationGroup *this)
{
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>((char *)this + 64);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>((char *)this + 40);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>((char *)this + 16);
}
