/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x1800282D4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180027F14 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800BE02C (--$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemo.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2, struct CWindowData *a3)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v13; // rsi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // [rsp+30h] [rbp-28h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  hObject = 0LL;
  v20 = 0LL;
  if ( a2
    && (v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v9 = *(_QWORD *)(v8 + 16),
        v10 = *(unsigned int *)(v8 + 24),
        LOBYTE(v8) = 1,
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, HWND, __int64))(*(_QWORD *)v9 + 472LL))(v9, v10, a2, v8),
        v3 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x18Bu);
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 2 )
  {
    v13 = (_QWORD *)((char *)this + 824);
    v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                          + 24LL)
                                                            + 216LL))(
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
            &GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b,
            (char *)this + 824);
    v3 = v14;
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 48LL))(*v13, *((_QWORD *)a3 + 5));
      v3 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 24LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 24LL));
        v3 = v16;
        if ( v16 >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 5)
                                                                                  + 24LL)
                                                                    + 224LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
                  *v13,
                  &hObject);
          v3 = v17;
          if ( v17 >= 0 )
          {
            v18 = CCompositor::CreateProxyFromSharedHandle<CRemoteAppRenderTargetProxy>(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                    hObject,
                    &v20);
            v3 = v18;
            if ( v18 >= 0 )
            {
              v4 = v20;
              v19 = (*(__int64 (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v20 + 8LL))(
                      v20,
                      *((_QWORD *)this + 2));
              v3 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x1A0u);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x19Fu);
              v4 = v20;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x19Du);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x198u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x197u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x195u);
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v3;
}
