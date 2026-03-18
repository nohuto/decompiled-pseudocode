/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C0070630
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C006FF40 (NtUserGetDisplayConfigBufferSizes.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00BCD1C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C014A3A4 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C0070CE0 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  bool v8; // di
  _DWORD *v9; // rax

  v3 = a1;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)DrvIsWddmDriverPresent(v5, v4) )
  {
    if ( (v3 & 7) == 4 )
    {
      v8 = (unsigned __int8)((__int64 (*)(void))qword_1C0296878)() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v9 == 3 )
          goto LABEL_11;
      }
      if ( v8 )
LABEL_11:
        v3 = v3 & 0xEFFFFFF8 | 0x10000002;
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C0296730)(v3, a2);
  }
  else
  {
    v6 = -1073741637;
  }
  WdLogSingleEntry1(4LL, v6);
  return (unsigned int)v6;
}
