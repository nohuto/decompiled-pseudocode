/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180010BC0
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001E6B8 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     WPP_SF_SS @ 0x18000FB0C (WPP_SF_SS.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180010800 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180010E60 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800110E4 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001A9A8 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 */

void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  unsigned int i; // ebp
  BOOL v11; // edi
  int v12; // esi
  int v13; // edi
  const wchar_t *v14; // rax
  __int64 v15; // r10
  struct _TP_TIMER *v16; // rcx
  _FILETIME pftDueTime; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a5; i; i >>= 3 )
  {
    v11 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v12 = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(a1 + 216) = a3;
        LOBYTE(v11) = v12 == 0;
        v13 = (a3 == 0) ^ v11;
        if ( v12 == a3 )
          goto LABEL_28;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v14 = (const wchar_t *)SoundLevelToString(a3);
          WPP_SF_SS(
            *(_QWORD *)(v15 + 16),
            0xDu,
            &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
            *(const wchar_t **)(a1 + 24),
            v14);
        }
        if ( v12 == a3 )
        {
LABEL_28:
          if ( a6 )
            CApplication::RecalculateVolume(a1, 3u);
        }
        else
        {
          if ( v13 )
            CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(a1 + 212), 3LL);
          CApplication::RecalculateVolume(a1, 3u);
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
          *(_DWORD *)(a1 + 272) = 1;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids);
          }
          v16 = *(struct _TP_TIMER **)(a1 + 264);
          pftDueTime.dwHighDateTime = -1;
          pftDueTime.dwLowDateTime = -4400000;
          SetThreadpoolTimer(v16, &pftDueTime, 0, 0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
        }
        break;
      case 2u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        *(_DWORD *)(a1 + 324) = a2;
        if ( a2 < *(_DWORD *)(a1 + 328) )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        if ( !v11 )
          CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
        break;
      case 3u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        *(_DWORD *)(a1 + 380) = a4;
        if ( a4 == 1 )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        if ( !v11 )
          CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
        break;
      case 4u:
        Sleep(0xAu);
        break;
    }
  }
}
