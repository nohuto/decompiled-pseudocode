/*
 * XREFs of ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x1C009FBD4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
