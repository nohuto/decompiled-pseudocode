/*
 * XREFs of ??1?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAA@XZ @ 0x1C00A2F44
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A216C (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C00A2F68 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00A2F9C (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::~CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>(
        __int64 a1)
{
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset(a1);
  return CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(a1);
}
