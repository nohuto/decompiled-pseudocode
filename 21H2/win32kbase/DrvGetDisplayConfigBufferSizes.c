/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C001EF30
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001D4B0 (NtUserGetDisplayConfigBufferSizes.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009A5A0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C011E5C0 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144340 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001C7B0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F138 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax
  bool v10; // di
  _DWORD *v11; // rcx

  v3 = a1;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)DrvIsWddmDriverPresent(v6, v5) )
  {
    if ( (v3 & 7) == 4 )
    {
      v10 = (unsigned __int8)((__int64 (*)(void))qword_1C0251A90)() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v11 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v11 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v11 == 3 )
          v10 = 1;
      }
      if ( v10 )
        LODWORD(v3) = v3 & 0xEFFFFFF8 | 0x10000002;
    }
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C0251940)((unsigned int)v3, a2);
  }
  else
  {
    v7 = -1073741637;
  }
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdEvent(v8);
  return (unsigned int)v7;
}
