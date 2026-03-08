/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x1C024A320 (--1CGenericPropertyList@DirectComposition@@QEAA@XZ.c)
 */

char ***__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char ***this, char a2)
{
  DirectComposition::CGenericPropertyList::~CGenericPropertyList(this + 7);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
