/*
 * XREFs of ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804362A4
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434190 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180435AEC (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0BE8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppTransitionManager::_TagDividerBitmap(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  int v3; // eax
  unsigned int LastError; // esi
  __int64 v5; // r9
  __int64 v6; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v7; // rdx
  int v8; // eax
  HDC CompatibleDC; // rbx
  CAppTransitionManager *v10; // rcx
  HBITMAP v11; // rdi
  const char *v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  HWND ShellWindow; // rax
  __int64 v17[2]; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+48h] [rbp-19h] BYREF
  int v19; // [rsp+4Ch] [rbp-15h]
  int v20; // [rsp+50h] [rbp-11h]
  int v21; // [rsp+54h] [rbp-Dh]
  BITMAPINFO pbmi; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v23[4]; // [rsp+88h] [rbp+27h] BYREF
  int v24; // [rsp+8Ch] [rbp+2Bh]
  int v25; // [rsp+94h] [rbp+33h]
  enum DEVICE_SCALE_FACTOR v26; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v17[1] = -2LL;
  v17[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  v3 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v17);
  LastError = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 619LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v5);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17[0] + 24LL))(v17[0], v23);
  v8 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v23, v7);
  v18 = 0;
  v19 = 0;
  v20 = v8;
  v21 = v25 - v24;
  if ( v8 <= 0 || v25 - v24 <= 0 )
    goto LABEL_19;
  CompatibleDC = CreateCompatibleDC(0LL);
  if ( !CompatibleDC )
  {
    LastError = -2147024882;
    v5 = 2147942414LL;
    v6 = 628LL;
    goto LABEL_3;
  }
  pbmi.bmiHeader.biSize = 40;
  pbmi.bmiHeader.biWidth = v20 - v18;
  pbmi.bmiHeader.biHeight = v19 - v21;
  *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
  memset(&pbmi.bmiHeader.biCompression, 0, 28);
  v11 = CreateDIBSection(CompatibleDC, &pbmi, 0, 0LL, 0LL, 0);
  if ( v11 )
  {
    v13 = CAppTransitionManager::_PaintDividerForDWM(v10, CompatibleDC, v11, &pbmi, v26);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 641LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_15;
    }
    ShellWindow = GetShellWindow();
    v13 = DwmpTransitionBitmap(ShellWindow, v11, 22LL, &v18, &v18);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 644LL;
      goto LABEL_14;
    }
    DeleteObject(v11);
    DeleteDC(CompatibleDC);
LABEL_19:
    LastError = 0;
    goto LABEL_20;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x27F,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                v12);
LABEL_15:
  if ( v11 )
    DeleteObject(v11);
  DeleteDC(CompatibleDC);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  return LastError;
}
