/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C00706F0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C0070110 (NtUserQueryDisplayConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00BCD1C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C014A3A4 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C0070CE0 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // di
  _DWORD *v11; // rcx
  int v12; // ebx
  _DWORD *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r8

  v5 = a1;
  WdLogSingleEntry1(4LL, a1);
  if ( !(unsigned int)DrvIsWddmDriverPresent(v9, v8) )
  {
    v12 = -1073741637;
    goto LABEL_7;
  }
  v10 = 0;
  if ( (v5 & 7) == 4 )
  {
    v10 = (unsigned __int8)((__int64 (*)(void))qword_1C0296878)() != 0;
    if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      goto LABEL_9;
    v14 = DispBroker::DispBrokerClient::s_pSessionBroker;
    if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
      v14 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( *v14 == 3 )
    {
      v10 = 1;
    }
    else
    {
LABEL_9:
      if ( !v10 )
        goto LABEL_3;
    }
    v5 = v5 & 0xEFFFFFF8 | 0x10000002;
  }
LABEL_3:
  v11 = 0LL;
  if ( !v10 )
    v11 = a4;
  v12 = qword_1C0296738(v5 & 0xFFFFFFEF, v5 & 0x10, a2, a3, v11);
  if ( v12 >= 0 && v10 && a4 )
  {
    v15 = *a2;
    if ( *a2 > 1 )
    {
      v16 = 1;
      do
      {
        v17 = 216LL * v16;
        if ( *(_DWORD *)(a3 + 116) != *(_DWORD *)(v17 + a3 + 116) )
          break;
        if ( *(_DWORD *)(a3 + 120) != *(_DWORD *)(v17 + a3 + 120) )
          break;
        ++v16;
      }
      while ( v16 < v15 );
      *a4 = v16 < v15 ? 4 : 2;
    }
    else
    {
      *a4 = 1;
    }
  }
LABEL_7:
  WdLogSingleEntry1(4LL, v12);
  return (unsigned int)v12;
}
