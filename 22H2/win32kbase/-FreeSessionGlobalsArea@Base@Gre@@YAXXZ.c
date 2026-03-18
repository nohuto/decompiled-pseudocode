/*
 * XREFs of ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x1C00A9604
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Gre::Base::FreeSessionGlobalsArea(Gre::Base *this)
{
  __int64 v1; // rbx
  char *v2; // rdx

  v1 = SGDGetSessionState(this);
  v2 = *(char **)(v1 + 24);
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
