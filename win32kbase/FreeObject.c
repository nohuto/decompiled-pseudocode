/*
 * XREFs of FreeObject @ 0x1C00597F0
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 *     HmgFree @ 0x1C0059850 (HmgFree.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00DE138 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C0197F40 (EngDeleteDriverObj.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00A3274 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall FreeObject(void *a1, unsigned int a2)
{
  __int64 v2; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  v2 = a2;
  v4 = *(NSInstrumentation::CLeakTrackingAllocator **)(SGDGetSessionState(a1) + 24);
  if ( *((__int16 *)a1 + 7) >= 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  else
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v4, *((void **)v4 + v2 + 244), a1);
}
