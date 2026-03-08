/*
 * XREFs of ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C920
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024C3C8 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::`scalar deleting destructor'(
        DirectComposition::CSceneNodeMarshaler *this,
        char a2)
{
  DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
