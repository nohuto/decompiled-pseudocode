/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214310
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x1C0213FC8 (--1CGenericPropertyList@DirectComposition@@QEAA@XZ.c)
 */

char ***__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char ***this, char a2)
{
  DirectComposition::CGenericPropertyList::~CGenericPropertyList(this + 8);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
