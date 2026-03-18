/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreSfmGetNotificationTokens @ 0x1C009B840 (GreSfmGetNotificationTokens.c)
 *     EngAllocUserMemEx @ 0x1C00A6438 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00A8740 (EngFreeUserMem.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00B1B80 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00B2FF0 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
