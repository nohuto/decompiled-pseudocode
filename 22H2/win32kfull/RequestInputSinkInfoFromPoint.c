/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1C0004CF4
 * Callers:
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C0004BF0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C01F6D70 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     WakeDIT @ 0x1C010BA54 (WakeDIT.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RequestInputSinkInfoFromPoint(__int128 *a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v12[7]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  while ( gbDIT )
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
        WakeDIT(2LL);
      }
      else
      {
        *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = 1;
        KeSetEvent((PRKEVENT)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, 1, 0);
      }
      UserSessionSwitchLeaveCrit();
      KeWaitForSingleObject(gpkeDITCompositionInputSinkQueryResponseEvent, UserRequest, 1, 1u, 0LL);
      EnterCrit(0LL, 1LL);
      *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = 0;
      v2 = gInputSinkInfoRetrieval[1];
      if ( v2 )
      {
        *a1 = gInputSinkInfoRetrieval[0];
        a1[1] = gInputSinkInfoRetrieval[1];
        a1[2] = gInputSinkInfoRetrieval[2];
        a1[3] = gInputSinkInfoRetrieval[3];
        a1[4] = gInputSinkInfoRetrieval[4];
        a1[5] = gInputSinkInfoRetrieval[5];
        v10 = gInputSinkInfoRetrieval[6];
      }
      else
      {
        memset(v12, 0, sizeof(v12));
        v5 = v12[1];
        *a1 = v12[0];
        v6 = v12[2];
        a1[1] = v5;
        v7 = v12[3];
        a1[2] = v6;
        v8 = v12[4];
        a1[3] = v7;
        v9 = v12[5];
        a1[4] = v8;
        v10 = v12[6];
        a1[5] = v9;
      }
      a1[6] = v10;
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
    EnterCrit(0LL, 1LL);
  }
  return v2;
}
