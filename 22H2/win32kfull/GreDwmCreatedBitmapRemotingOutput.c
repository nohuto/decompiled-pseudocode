/*
 * XREFs of GreDwmCreatedBitmapRemotingOutput @ 0x1C01357DC
 * Callers:
 *     NtGdiDwmCreatedBitmapRemotingOutput @ 0x1C01357C0 (NtGdiDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvModeChangeCompleteNotify @ 0x1C013588C (DrvModeChangeCompleteNotify.c)
 */

void __fastcall GreDwmCreatedBitmapRemotingOutput(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v4, *((HSEMAPHORE *)v1 + 10));
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v1 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v1 + 9));
  if ( (unsigned int)UserIsCurrentProcessDwm() && (unsigned int)UserIsRemoteConnection(v3, v2) )
    DrvModeChangeCompleteNotify();
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 9));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v4);
}
