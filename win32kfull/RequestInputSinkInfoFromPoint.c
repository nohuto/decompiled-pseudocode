// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RequestInputSinkInfoFromPoint(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  bool v6; // zf
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v16[7]; // [rsp+30h] [rbp-78h] BYREF

  v5 = 0;
  while ( gbMIT )
  {
    if ( gbCompositionInputSinkQueryBlockedOnDIT != 1 )
    {
      v6 = gfMITWaitingForLLHook == 0;
      v7 = *a1;
      gbCompositionInputSinkQueryBlockedOnDIT = 1;
      gInputSinkInfoRetrieval[0] = v7;
      gInputSinkInfoRetrieval[1] = a1[1];
      gInputSinkInfoRetrieval[2] = a1[2];
      gInputSinkInfoRetrieval[3] = a1[3];
      gInputSinkInfoRetrieval[4] = a1[4];
      gInputSinkInfoRetrieval[5] = a1[5];
      gInputSinkInfoRetrieval[6] = a1[6];
      if ( v6 )
      {
        WakeMIT(2LL, a2, a3, a4);
      }
      else
      {
        gfAppWaitingForLLHookSignal = 1;
        KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DpcListEntry.Next, 1, 0);
      }
      UserSessionSwitchLeaveCrit(v8);
      KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong, UserRequest, 1, 1u, 0LL);
      EnterCrit(1LL, 0LL);
      gfAppWaitingForLLHookSignal = 0;
      v5 = gInputSinkInfoRetrieval[1];
      if ( v5 )
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
      return v5;
    }
    ++gcDITLuidHitTestWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITLuidHitTestWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
  }
  return v5;
}
