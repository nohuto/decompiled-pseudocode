/*
 * XREFs of GetLocalCommand @ 0x1C000B8A8
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00030F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007A10 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x1C001AA90 (NVMeReConfigAsyncEventCompletion.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return *(_QWORD *)(GetSrbExtension(a2) + 4232);
  if ( a2 == a1 + 848 )
    return a1 + 840;
  v4 = 0;
  while ( a2 != 112LL * v4 + a1 + 960 )
  {
    if ( ++v4 >= 6 )
      return v2;
  }
  return 112LL * v4 + a1 + 952;
}
