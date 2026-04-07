/*
 * XREFs of ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180028214
 * Callers:
 *     ?IgnoreAlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800122C0 (-IgnoreAlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180027F14 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800281A8 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180028A94 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax

  v1 = *((_QWORD *)this + 103);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 91);
    if ( v4 )
    {
      v5 = 3LL;
      if ( *(_QWORD *)(v4 + 368) || *(char *)(v4 + 609) >= 0 || (*(_DWORD *)(v4 + 104) & 0x200000) != 0 )
        v5 = 1LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 103), v5);
      v2 = v6;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 24LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 24LL));
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x16ADu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x16ACu);
      }
    }
  }
  return v2;
}
