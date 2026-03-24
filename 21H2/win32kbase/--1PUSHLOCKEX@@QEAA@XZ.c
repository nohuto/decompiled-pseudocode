/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0045F3C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0037AB0 (GreSetDCOwnerEx.c)
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 *     GreSfmGetNotificationTokens @ 0x1C0047660 (GreSfmGetNotificationTokens.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0047E20 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0048E00 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     EngAllocUserMemEx @ 0x1C00ADA68 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00BB8B0 (EngFreeUserMem.c)
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
