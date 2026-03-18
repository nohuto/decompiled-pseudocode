/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DBAB4
 * Callers:
 *     NtSetShellCursorState @ 0x1C0156AA0 (NtSetShellCursorState.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00BF800 (ApiSetEditionInternalSetCursorPos.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C01DBB68 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C01E83D0 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  CCursorClip *v3; // rdi
  CPushLock *v6; // rbx
  char *v7; // rdx
  int v8; // edi

  v3 = gpCursorClip;
  v6 = (CCursorClip *)((char *)gpCursorClip + 32);
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v7 = (char *)*((_QWORD *)v3 + 33);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
  *((_QWORD *)v3 + 33) = a2;
  *((_DWORD *)v3 + 68) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v8 = *((_DWORD *)v3 + 68);
  CPushLock::ReleaseLock(v6);
  SendShellClipChanged(a2);
  if ( v8 )
    ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  return 0LL;
}
