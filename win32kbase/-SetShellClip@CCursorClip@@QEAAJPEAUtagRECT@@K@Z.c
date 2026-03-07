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
