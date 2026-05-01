/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18045ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18004CB98 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004DAE8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18004DC10 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F3F6C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1802134A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x18045B534 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x18045F20C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  CDesktopPositioner *v6; // rcx
  int FullPositionSnapshot; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  HMONITOR v10; // rax
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int MonitorFromPoint; // eax
  __int64 v16; // rdx
  int v17; // esi
  int v18; // ebx
  int v19; // eax
  int fixed; // eax
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rdx
  struct tagPOINT v24; // rdi
  int v25; // eax
  int nNumerator; // [rsp+20h] [rbp-69h] BYREF
  struct tagPOINT v28; // [rsp+28h] [rbp-61h] BYREF
  struct tagPOINT v29; // [rsp+30h] [rbp-59h] BYREF
  void *v30; // [rsp+38h] [rbp-51h] BYREF
  struct IImmersiveMonitor *v31; // [rsp+40h] [rbp-49h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v32; // [rsp+48h] [rbp-41h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v35; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v37[4]; // [rsp+90h] [rbp+7h] BYREF
  int v38; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v28 = a3;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v6, a2, &v32);
  v8 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v32 + 56LL))(
                             v32,
                             &v35);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 1128LL;
      goto LABEL_7;
    }
    v10 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v10, &nNumerator);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 1134LL;
      goto LABEL_7;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v35);
    v12 = ScaleFactorForRect;
    rc = v35;
    if ( ScaleFactorForRect != nNumerator )
    {
      v13 = MulDiv(v35.right - v35.left, nNumerator, ScaleFactorForRect);
      v14 = MulDiv(v35.bottom - v35.top, nNumerator, v12);
      rc.right = v13 + rc.left;
      rc.bottom = rc.top + v14;
    }
    OffsetRect(&rc, a3.x - v35.left, v28.y - v35.top);
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint((CDesktopPositioner *)((char *)this - 112), &v28, &v31);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v16 = 1162LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      goto LABEL_39;
    }
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *, _BYTE *))(**((_QWORD **)this + 19)
                                                                                              + 64LL))(
                         *((_QWORD *)this + 19),
                         v31,
                         v37);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v16 = 1165LL;
      goto LABEL_16;
    }
    v17 = v38 / -2;
    v18 = nNumerator * *((_DWORD *)this + 70) / -100;
    MonitorFromPoint = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 112), &rc, &v36);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v16 = 1178LL;
      goto LABEL_16;
    }
    if ( v17 + rc.top < v36.top )
      v17 = v36.top - rc.top;
    if ( v18 + rc.left < v36.left )
      v18 = v36.left - rc.left;
    OffsetRect(&rc, v18, v17);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v30,
            &rc);
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AD,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v19);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      goto LABEL_38;
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    fixed = CDesktopPositioner::_FixPosition((__int64)this - 112, 4u, (__int64)v30, &v29);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B1,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      goto LABEL_37;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v33);
    v21 = v33[0];
    if ( v33[0] )
    {
      v24 = v29;
      if ( *(_QWORD *)(v33[0] + 72) != v29 )
      {
        v28 = v29;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
        v28 = *(struct tagPOINT *)(v21 + 72);
        *(struct tagPOINT *)(v21 + 72) = v24;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      }
      *(_WORD *)(v21 + 112) = 257;
      v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v21);
      v8 = v25;
      if ( v25 >= 0 )
      {
        v25 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v8 = v25;
        if ( v25 >= 0 )
        {
LABEL_35:
          Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v33);
          goto LABEL_36;
        }
        v23 = 1214LL;
      }
      else
      {
        v23 = 1211LL;
      }
      v22 = (unsigned int)v25;
    }
    else
    {
      v8 = -2147024882;
      v22 = 2147942414LL;
      v23 = 1205LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v22);
    goto LABEL_35;
  }
  v9 = 1125LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  return v8;
}
