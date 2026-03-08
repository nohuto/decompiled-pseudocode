/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C020B0A4
 * Callers:
 *     NtSetShellCursorState @ 0x1C016D020 (NtSetShellCursorState.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00CBBC4 (ApiSetEditionInternalSetCursorPos.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C020B158 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C0218490 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  __int64 v3; // rdi
  CPushLock *v6; // rbx
  char *v7; // rdx
  int v8; // edi

  v3 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v6 = (CPushLock *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 32LL);
  CPushLock::AcquireLockExclusive((CPushLock *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 32LL));
  v7 = *(char **)(v3 + 264);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  *(_QWORD *)(v3 + 264) = a2;
  *(_DWORD *)(v3 + 272) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v8 = *(_DWORD *)(v3 + 272);
  CPushLock::ReleaseLock(v6);
  SendShellClipChanged(a2);
  if ( v8 )
    ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  return 0LL;
}
