/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C00921E0
 * Callers:
 *     CleanupInputDelegation @ 0x1C0092110 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0092158 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1C0098E04 (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C0099F84 (ClearDelegationCapture.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C00B0FA4 (_anonymous_namespace_--ScrubDelegateThread.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  --*(_DWORD *)(v3 + 1272);
  --*(_DWORD *)(v1 + 1272);
  if ( (int)IsClearDelegationCaptureSupported() >= 0
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 136LL) == a1 )
  {
    ClearDelegationCapture();
  }
  if ( *(_DWORD *)(v1 + 1272) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
