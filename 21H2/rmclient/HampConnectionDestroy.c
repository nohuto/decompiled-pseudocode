/*
 * XREFs of HampConnectionDestroy @ 0x1800021E8
 * Callers:
 *     HamDisconnectForFullTrust @ 0x1800021D0 (HamDisconnectForFullTrust.c)
 *     HamConnectToServerEx @ 0x180003930 (HamConnectToServerEx.c)
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x180004F90 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x1800092E0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForSessionState @ 0x1800093B0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x180009420 (HamConnectForDebugging.c)
 *     HamConnectForServicing @ 0x1800094A0 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x180010590 (HamConnectForFullTrust.c)
 * Callees:
 *     HamIpcChannelRundown @ 0x18000223C (HamIpcChannelRundown.c)
 *     RmpClientWnfDestroySubscription @ 0x1800022D0 (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180004810 (HampConnectionCleanup.c)
 */

BOOLEAN __fastcall HampConnectionDestroy(__int64 a1)
{
  int v1; // eax
  void *v4; // rcx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 >= 0 )
  {
    if ( v1 > 3 )
    {
      if ( v1 == 6 )
      {
        v4 = *(void **)(a1 + 16);
        if ( v4 )
          RmpClientWnfDestroySubscription(v4);
      }
    }
    else
    {
      HamIpcChannelRundown(a1 + 16);
    }
  }
  HampConnectionCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
