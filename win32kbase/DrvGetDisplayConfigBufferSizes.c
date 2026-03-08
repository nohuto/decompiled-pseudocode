/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C0022450
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000F37C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C0013468 (RIMGetQDCActivePathsData.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C00217F0 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C015D934 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E59C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C0020FE0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C0022640 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 DxgkWin32kInterface; // rax
  bool v10; // di
  _DWORD *v11; // rax

  v3 = a1;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    if ( (v3 & 7) == 4 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
      v10 = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v11 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v11 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v11 == 3 )
          goto LABEL_11;
      }
      if ( v10 )
LABEL_11:
        v3 = v3 & 0xEFFFFFF8 | 0x10000002;
    }
    v6 = DxDdGetDxgkWin32kInterface(v5, v4);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v6 + 208))(v3, a2);
  }
  else
  {
    v7 = -1073741637;
  }
  WdLogSingleEntry1(4LL, v7);
  return (unsigned int)v7;
}
