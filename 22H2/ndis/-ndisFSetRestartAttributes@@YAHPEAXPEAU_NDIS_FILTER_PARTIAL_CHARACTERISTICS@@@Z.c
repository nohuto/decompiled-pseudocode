/*
 * XREFs of ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x1C00248D4
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0024530 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C00255E8 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memcmp @ 0x1C0040730 (memcmp.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FC86C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FE4CC (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FEB80 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01241F0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *a2)
{
  unsigned int v4; // edi
  int v6; // edx
  char v7[160]; // [rsp+40h] [rbp-D8h] BYREF

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x21u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  if ( a2 )
  {
    if ( a1->Header.Revision == 1 )
    {
      if ( a2->Header.Size < 0x30u )
      {
        v4 = -1073676283;
      }
      else if ( a2->SendNetBufferListsHandler || !a2->CancelSendNetBufferListsHandler )
      {
        v4 = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(a1, a2, 1);
        if ( !v4 )
        {
          if ( memcmp(&a1->Characteristics, a2, 0x30uLL) )
          {
            Ndis::BindEngine::BeginPolicyUpdates(&a1->Miniport->BindEngine);
            if ( Ndis::BindState::SetPause(
                   &a1->Miniport->Bindings.Miniport,
                   DatapathPaused,
                   (enum NDIS_PAUSE_REASON)(v4 + 32)) )
            {
              memset(v7, 0, sizeof(v7));
              if ( (unsigned __int8)byte_1C00E547B >= 4u )
              {
                ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v7);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v6,
                    28,
                    34,
                    (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                    *(__int64 *)&v7[8],
                    v7[0]);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
          }
          *(_OWORD *)&a1->Characteristics.Header.Type = *(_OWORD *)&a2->Header.Type;
          *(_OWORD *)&a1->Characteristics.SendNetBufferListsCompleteHandler = *(_OWORD *)&a2->SendNetBufferListsCompleteHandler;
          *(_OWORD *)&a1->Characteristics.ReceiveNetBufferListsHandler = *(_OWORD *)&a2->ReceiveNetBufferListsHandler;
        }
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x23u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  return v4;
}
