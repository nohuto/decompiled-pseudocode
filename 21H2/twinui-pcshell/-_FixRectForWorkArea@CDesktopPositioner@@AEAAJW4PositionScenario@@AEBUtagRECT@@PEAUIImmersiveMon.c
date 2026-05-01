/*
 * XREFs of ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18045F0F8
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18004CB98 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x180459D40 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x18045C538 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18045CDE0 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x18045E72C (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004DAE8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18004E478 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_FixRectForWorkArea(
        __int64 a1,
        int a2,
        LONG *a3,
        __int64 a4,
        struct tagRECT *lprc)
{
  LONG v9; // ecx
  LONG v10; // r8d
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, unsigned __int64 *, GUID *, GUID *, int *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  CDesktopPositioner *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 result; // rax
  int v19; // eax
  LONG right; // edx
  int v21; // ecx
  int v22; // ecx
  LONG bottom; // r8d
  int v24; // r11d
  int v25; // ebx
  int v26; // r8d
  int v27; // r8d
  int v28; // edx
  RECT v29; // xmm0
  struct IApplicationViewTitlebarConfiguration *v30; // [rsp+40h] [rbp-61h] BYREF
  int v31[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h]
  _DWORD v33[2]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-31h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  SetRectEmpty(lprc);
  v9 = *a3;
  rcSrc1.left = *a3;
  v10 = a3[1];
  rcSrc1.top = v10;
  rcSrc1.right = a3[2];
  rcSrc1.bottom = a3[3];
  if ( a2 == 2 )
  {
    v30 = (struct IApplicationViewTitlebarConfiguration *)__PAIR64__(v10, v9);
    v34 = __PAIR64__(v10, v9);
    *(_QWORD *)v31 = 0LL;
    v11 = *(_QWORD *)(a1 + 240);
    v12 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *, GUID *, GUID *, int *))(*(_QWORD *)v11 + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
    v13 = v12(v11, &v34, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v31);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x767,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
      return v14;
    }
    LODWORD(v32) = rcSrc1.right - rcSrc1.left;
    HIDWORD(v32) = rcSrc1.bottom - rcSrc1.top;
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v16 = CDesktopPositioner::_CreateTitlebarConfiguration(v15, 0LL, &v30);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 1902LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      goto LABEL_9;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, _DWORD *))(**(_QWORD **)(a1 + 264) + 48LL))(
            *(_QWORD *)(a1 + 264),
            v32,
            *(_QWORD *)v31,
            0LL,
            1,
            v30,
            v33);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 1906LL;
      goto LABEL_8;
    }
    rcSrc1.right = v33[0] + rcSrc1.left;
    rcSrc1.bottom = v33[1] + rcSrc1.top;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
  }
  rcSrc2 = 0LL;
  if ( a4 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a4 + 88LL))(a4, &rcSrc2);
    v14 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77E,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v19);
      return v14;
    }
  }
  else if ( (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, &rcSrc1, &rcSrc2) < 0
         && (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &rcSrc2) < 0 )
  {
    goto LABEL_36;
  }
  rcDst = 0LL;
  UnionRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( EqualRect(&rcDst, &rcSrc2) )
  {
LABEL_36:
    v29 = rcSrc1;
    goto LABEL_37;
  }
  right = rcSrc1.right;
  if ( a2 == 6 )
  {
    v21 = rcSrc2.right - rcSrc2.left;
    if ( rcSrc1.right - rcSrc1.left > rcSrc2.right - rcSrc2.left )
    {
      right = v21 + rcSrc1.left;
      rcSrc1.right = v21 + rcSrc1.left;
    }
    v22 = rcSrc2.bottom - rcSrc2.top;
    bottom = rcSrc1.bottom;
    if ( rcSrc1.bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    {
      bottom = v22 + rcSrc1.top;
      rcSrc1.bottom = v22 + rcSrc1.top;
    }
  }
  else
  {
    bottom = rcSrc1.bottom;
  }
  if ( right - rcSrc1.left > rcSrc2.right - rcSrc2.left || bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    return 2147942487LL;
  v24 = rcSrc2.right - right;
  v25 = rcSrc2.bottom - bottom;
  rc = rcSrc1;
  v26 = 0;
  if ( rcSrc2.top - rcSrc1.top >= 0 )
    v26 = rcSrc2.top - rcSrc1.top;
  if ( v25 >= 0 )
    v25 = 0;
  v27 = v25 + v26;
  v28 = 0;
  if ( rcSrc2.left - rcSrc1.left >= 0 )
    v28 = rcSrc2.left - rcSrc1.left;
  if ( v24 >= 0 )
    v24 = 0;
  OffsetRect(&rc, v24 + v28, v27);
  v29 = rc;
LABEL_37:
  result = 0LL;
  *lprc = v29;
  return result;
}
