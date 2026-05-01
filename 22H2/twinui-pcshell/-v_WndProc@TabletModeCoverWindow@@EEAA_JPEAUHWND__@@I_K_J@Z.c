/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180485C10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x18048521C (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1804853D0 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1804856BC (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180485868 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x18048AC10 (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LRESULT __fastcall TabletModeCoverWindow::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v5; // rsi
  IRawElementProviderSimple **v11; // r14
  const struct _GUID *v12; // r9
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 > 0x202 )
  {
    if ( a3 == 582 )
      goto LABEL_8;
    if ( a3 != 583 )
    {
      if ( a3 == 1025 )
      {
        TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)(this - 12));
        return v5;
      }
      if ( a3 == 32769 && (a4 & 1) != 0 )
        TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)(this - 12));
      return DefWindowProcW(a2, a3, a4, lParam);
    }
LABEL_27:
    TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)(this - 12));
    return v5;
  }
  if ( a3 == 514 )
    goto LABEL_27;
  if ( a3 != 16 )
  {
    switch ( a3 )
    {
      case 0x15u:
        TabletModeCoverWindow::SystemColorsChanged((TabletModeCoverWindow *)(this - 12));
        break;
      case 0x21u:
        return 3LL;
      case 0x3Du:
        if ( lParam == -25 )
        {
          v11 = (IRawElementProviderSimple **)(this + 11);
          if ( this[11] )
            return UiaReturnRawElementProvider(this[1], a4, -25LL, *v11);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
          Instance = CoverWindowAcc_CreateInstance(this[1], L"TabletModeCoverWindow", 0LL, v12, (void **)v11);
          if ( Instance < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xCF,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)Instance);
          if ( *v11 )
            return UiaReturnRawElementProvider(this[1], a4, -25LL, *v11);
        }
        break;
      case 0x201u:
LABEL_8:
        *((_BYTE *)this + 124) = 1;
        return v5;
    }
    return DefWindowProcW(a2, a3, a4, lParam);
  }
  return v5;
}
