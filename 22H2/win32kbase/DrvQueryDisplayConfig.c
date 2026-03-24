/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C0020490
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C001E630 (NtUserQueryDisplayConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1C006EBA0 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009B360 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C011E890 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144690 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001DC20 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C00205A8 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // di
  _DWORD *v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r8

  v5 = a1;
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent(v10, v9) )
  {
    v11 = 0;
    if ( (v5 & 7) == 4 )
    {
      v11 = (unsigned __int8)((__int64 (*)(void))qword_1C0250AB0)() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v16 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v16 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v16 == 3 )
          v11 = 1;
      }
      if ( v11 )
        LODWORD(v5) = v5 & 0xEFFFFFF8 | 0x10000002;
    }
    v12 = 0LL;
    if ( !v11 )
      v12 = a4;
    v13 = qword_1C0250968((unsigned int)v5 & 0xFFFFFFEF, v5 & 0x10, a2, a3, v12);
    if ( v13 >= 0 && v11 && a4 )
    {
      v17 = *a2;
      if ( *a2 > 1 )
      {
        v18 = 1;
        do
        {
          v19 = 200LL * v18;
          if ( *(_DWORD *)(a3 + 116) != *(_DWORD *)(v19 + a3 + 116) )
            break;
          if ( *(_DWORD *)(a3 + 120) != *(_DWORD *)(v19 + a3 + 120) )
            break;
          ++v18;
        }
        while ( v18 < v17 );
        *a4 = v18 < v17 ? 4 : 2;
      }
      else
      {
        *a4 = 1;
      }
    }
  }
  else
  {
    v13 = -1073741637;
  }
  v14 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v14 + 24) = v13;
  WdLogEvent5_WdEvent(v14);
  return (unsigned int)v13;
}
