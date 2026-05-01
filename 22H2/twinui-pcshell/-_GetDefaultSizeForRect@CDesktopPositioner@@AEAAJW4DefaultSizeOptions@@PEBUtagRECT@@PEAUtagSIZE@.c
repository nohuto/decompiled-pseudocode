/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x18004D74C
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18004D6A0 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004DAE8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18004DBD4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18004E478 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_GetDefaultSizeForRect(
        CDesktopPositioner *a1,
        int a2,
        const struct tagRECT *a3,
        _QWORD *a4)
{
  int v7; // eax
  int v8; // esi
  int MonitorFromRect; // eax
  int v10; // ebx
  int WorkAreaFromRect; // eax
  __int64 v12; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-59h]
  int v17; // [rsp+44h] [rbp-35h]
  struct IImmersiveMonitor *v18; // [rsp+48h] [rbp-31h] BYREF
  struct IApplicationViewTitlebarConfiguration *v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  struct tagRECT v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  __m128i si128; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v22 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v23 = 900;
    v24 = 640;
  }
  else
  {
    v23 = 800;
    v24 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = 0LL;
  v7 = CDesktopPositioner::_CreateTitlebarConfiguration(a1, 0LL, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x520,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7,
      v16);
    goto LABEL_16;
  }
  v18 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, &v18);
  v8 = MonitorFromRect;
  if ( MonitorFromRect < 0 )
  {
    v14 = 1315LL;
  }
  else
  {
    v10 = 0;
    v17 = 0;
    v21 = 0LL;
    WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(a1, a3, &v21);
    v8 = WorkAreaFromRect;
    if ( WorkAreaFromRect < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x509,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)WorkAreaFromRect,
        v16);
    }
    else
    {
      v17 = v21.bottom - v21.top;
      v10 = v21.right - v21.left;
      v8 = 0;
    }
    if ( v8 < 0 )
    {
      v15 = (unsigned int)v8;
      v14 = 1318LL;
      goto LABEL_24;
    }
    v12 = 3LL;
    while ( 1 )
    {
      v16 = 1;
      MonitorFromRect = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, struct IImmersiveMonitor *, _QWORD))(**((_QWORD **)a1 + 33) + 48LL))(
                          *((_QWORD **)a1 + 33),
                          *(&v22 + v12),
                          v18,
                          0LL);
      v8 = MonitorFromRect;
      if ( MonitorFromRect < 0 )
        break;
      if ( (v10 < (int)v20 || v17 < SHIDWORD(v20)) && --v12 >= 0 )
        continue;
      *a4 = v20;
      v8 = 0;
      goto LABEL_15;
    }
    v14 = 1324LL;
  }
  v15 = (unsigned int)MonitorFromRect;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v15,
    v16);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return (unsigned int)v8;
}
