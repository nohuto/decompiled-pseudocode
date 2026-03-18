/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1C01E68AC
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C01CD990 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C01CDD00 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RequestInputSinkInfoFromPoint(__int128 *a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int128 v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v16[7]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  while ( gbMIT )
  {
    if ( gbCompositionInputSinkQueryBlockedOnDIT != 1 )
    {
      v3 = gfMITWaitingForLLHook == 0;
      v4 = *a1;
      gbCompositionInputSinkQueryBlockedOnDIT = 1;
      gInputSinkInfoRetrieval[0] = v4;
      gInputSinkInfoRetrieval[1] = a1[1];
      gInputSinkInfoRetrieval[2] = a1[2];
      gInputSinkInfoRetrieval[3] = a1[3];
      gInputSinkInfoRetrieval[4] = a1[4];
      gInputSinkInfoRetrieval[5] = a1[5];
      gInputSinkInfoRetrieval[6] = a1[6];
      if ( v3 )
      {
        WakeMIT(2LL);
      }
      else
      {
        gfAppWaitingForLLHookSignal = 1;
        KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DpcListEntry.Next, 1, 0);
      }
      UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
      KeWaitForSingleObject((PVOID)WPP_MAIN_CB.Dpc.ProcessorHistory, UserRequest, 1, 1u, 0LL);
      EnterCrit(1LL, 0LL);
      gfAppWaitingForLLHookSignal = 0;
      v2 = gInputSinkInfoRetrieval[1];
      if ( v2 )
      {
        *a1 = gInputSinkInfoRetrieval[0];
        a1[1] = gInputSinkInfoRetrieval[1];
        a1[2] = gInputSinkInfoRetrieval[2];
        a1[3] = gInputSinkInfoRetrieval[3];
        a1[4] = gInputSinkInfoRetrieval[4];
        a1[5] = gInputSinkInfoRetrieval[5];
        v9 = gInputSinkInfoRetrieval[6];
      }
      else
      {
        memset_0(v16, 0, sizeof(v16));
        v10 = v16[1];
        *a1 = v16[0];
        v11 = v16[2];
        a1[1] = v10;
        v12 = v16[3];
        a1[2] = v11;
        v13 = v16[4];
        a1[3] = v12;
        v14 = v16[5];
        a1[4] = v13;
        v9 = v16[6];
        a1[5] = v14;
      }
      a1[6] = v9;
      gbCompositionInputSinkQueryBlockedOnDIT = 0;
      if ( gcDITLuidHitTestWaiters )
      {
        KeReleaseSemaphore(gpsemDITLuidHitTestWaiters, 0, gcDITLuidHitTestWaiters, 0);
        gcDITLuidHitTestWaiters = 0;
      }
      return v2;
    }
    ++gcDITLuidHitTestWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITLuidHitTestWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
  }
  return v2;
}
