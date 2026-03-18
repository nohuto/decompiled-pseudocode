/*
 * XREFs of ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x1C001C11C
 * Callers:
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C001C0E8 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C144 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(MULTIDEVLOCKOBJ *this)
{
  void *v2; // rdx

  MULTIDEVLOCKOBJ::vUnlock(this);
  if ( (*(_DWORD *)this & 2) != 0 )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  }
}
