/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180028754
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A20C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x1800281A4 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800285BC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180028630 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180028714 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180028A54 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180028B14 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180051458 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18009574C (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180095C6C (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x180095EA4 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 */

__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int v4; // eax
  CTopLevelWindow *v5; // rsi
  int v6; // edi
  bool v7; // r9
  HWND v8; // rdx
  int updated; // ebx
  CTopLevelWindow3D *v10; // r14
  CTopLevelWindow3D *v11; // rax
  CTopLevelWindow3D *v12; // rdi
  int v13; // eax
  bool v14; // dl
  struct CWindowData *v15; // rax
  char *v16; // rax
  char v17; // cl
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CWindowData *v21; // [rsp+68h] [rbp+38h] BYREF
  CTopLevelWindow *v22; // [rsp+70h] [rbp+40h] BYREF

  v21 = a2;
  if ( *((_QWORD *)a2 + 48) )
    return 0LL;
  v22 = 0LL;
  v4 = CTopLevelWindow::Create((struct CCanvasVisual ***)&v22);
  v5 = v22;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Fu);
  }
  else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
  {
    v8 = (HWND)*((_QWORD *)a2 + 5);
    if ( v8 )
    {
      if ( (*((_BYTE *)a2 + 612) & 0x40) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(v5, v8, a2, v7);
    }
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BC,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *((_QWORD *)v5 + 91) = v21;
  *((_QWORD *)v21 + 48) = v5;
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v5);
  if ( updated < 0 )
  {
    v19 = 1727LL;
    goto LABEL_27;
  }
  v10 = 0LL;
  v11 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               488LL);
  if ( v11 )
    v12 = CTopLevelWindow3D::CTopLevelWindow3D(v11);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    updated = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x40u);
LABEL_30:
    v10 = 0LL;
    goto LABEL_15;
  }
  v13 = CTopLevelWindow3D::Initialize(v12);
  updated = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x40u);
  }
  else
  {
    v10 = v12;
    v12 = 0LL;
    updated = 0;
  }
  if ( updated < 0 )
    goto LABEL_30;
LABEL_15:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( updated < 0 )
  {
    v19 = 1730LL;
  }
  else
  {
    v15 = v21;
    *((_QWORD *)v10 + 41) = v21;
    *(_OWORD *)((char *)v10 + 308) = *((_OWORD *)v15 + 3);
    *((_QWORD *)v21 + 49) = v10;
    v16 = (char *)v21;
    if ( (*((_BYTE *)v21 + 611) & 4) != 0 )
    {
      updated = CVisual::SetIsMagnifier(v5, v14);
      if ( updated < 0 )
      {
        v19 = 1736LL;
        goto LABEL_27;
      }
      *((_BYTE *)v21 + 611) &= ~4u;
      v16 = (char *)v21;
    }
    if ( v16[611] < 0 )
    {
      CTopLevelWindow::SetVisualProtectContent(v5, 1);
      v16 = (char *)v21;
    }
    if ( (v16[612] & 4) == 0 )
    {
LABEL_22:
      v17 = v16[613];
      if ( (v17 & 0x10) != 0 )
      {
        v16[613] = v17 & 0xEF;
        updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 65)
                                                                            + 112LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
                    *(_QWORD *)(*((_QWORD *)v21 + 75) + 40LL),
                    *((_QWORD *)v21 + 5),
                    0LL);
        if ( updated < 0 )
        {
          v19 = 1763LL;
          goto LABEL_27;
        }
      }
      return 0LL;
    }
    updated = CVisual::SetIsCursor(v5, 1);
    if ( updated >= 0 )
    {
      v22 = (CTopLevelWindow *)&v21;
      CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v22);
      v16 = (char *)v21;
      goto LABEL_22;
    }
    v19 = 1747LL;
  }
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
