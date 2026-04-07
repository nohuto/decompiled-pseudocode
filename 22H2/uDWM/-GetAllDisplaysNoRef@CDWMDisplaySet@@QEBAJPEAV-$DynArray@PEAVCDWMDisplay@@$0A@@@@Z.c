/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180037690
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003720C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085E58 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800870B8 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800872E8 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800874F4 (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800875B4 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800916B8 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BEEDC (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      v7 = *(unsigned int *)(a2 + 24);
      v11 = v6;
      v8 = v7 + 1;
      if ( (int)v7 + 1 < (unsigned int)v7 )
        break;
      if ( v8 <= *(_DWORD *)(a2 + 20) )
      {
        v2 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v6;
        *(_DWORD *)(a2 + 24) = v8;
      }
      else
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v11);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
        if ( v2 < 0 )
          goto LABEL_11;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return (unsigned int)v2;
    }
    v2 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14Au);
  }
  return (unsigned int)v2;
}
