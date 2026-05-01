/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180485FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x18048630C (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1804868A0 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490598 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0B80 (-ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // eax
  HFONT GlyphFont; // rsi
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  int v10; // eax
  unsigned int v11; // ebx
  enum DEVICE_SCALE_FACTOR v12; // r8d
  unsigned __int16 v13; // ax
  HRESULT v14; // eax
  void *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  HWND v18; // rcx
  struct IApplicationView *v19; // [rsp+40h] [rbp-19h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-11h] BYREF
  int v21[2]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-1h] BYREF
  int X[4]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp+17h] BYREF
  enum DEVICE_SCALE_FACTOR v25; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v24);
  v4 = v25;
  if ( v25 != *((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 14) = v25;
    *((_QWORD *)this + 6) = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont(v4);
    v6 = (void *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v6 )
      DeleteObject(v6);
    *((_QWORD *)this + 6) = GlyphFont;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 2LL) == 1 )
  {
    v7 = JointDivider::EnsureWindow((JointDivider *)((char *)this - 24));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *(_QWORD *)v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    v10 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL))(
            a2,
            0LL,
            2LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v10);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      return v11;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v21 + 56LL))(*(_QWORD *)v21, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v13 = ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
              (ImmersiveApplicationLayout *)(unsigned int)(X[2] - X[0]),
              *((_DWORD *)this + 14),
              v12);
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), (v13 << 16) | 3u);
    }
    if ( !IsPPIEdition() )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              (const GUID *const)&SID_ShellTargetingTracker,
              &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
              &ppvOut);
      v11 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v14);
LABEL_20:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_21;
      }
      v19 = 0LL;
      v15 = ppvOut;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v16 = (*(__int64 (__fastcall **)(void *, _BYTE *, struct IApplicationView **))(*(_QWORD *)v15 + 40LL))(
              v15,
              v22,
              &v19);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 119LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        goto LABEL_20;
      }
      v16 = JointDivider::ShellTargetChanged(this, v19);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 120LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  }
  else
  {
    v18 = (HWND)*((_QWORD *)this + 3);
    if ( v18 )
      ShowWindow(v18, 0);
  }
  return 0LL;
}
