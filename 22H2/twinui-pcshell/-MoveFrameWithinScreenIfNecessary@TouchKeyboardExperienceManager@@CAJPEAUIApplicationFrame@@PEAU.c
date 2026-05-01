/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1803BBC08
 * Callers:
 *     _lambda_51d6f8f9b06e99048dd25aff80a12ac0_::operator() @ 0x1800CF2C8 (_lambda_51d6f8f9b06e99048dd25aff80a12ac0_--operator().c)
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB1C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F3F6C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  const char *v8; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v13; // rax
  __m128i *p_rcMonitor; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm0_8
  int v17; // r9d
  LONG v18; // edx
  unsigned __int64 v19; // rcx
  LONG v20; // r8d
  char v21; // al
  int v22; // r10d
  int v23; // r9d
  LONG v24; // eax
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rdx
  void *v30; // [rsp+28h] [rbp-19h] BYREF
  HWND hWnd; // [rsp+30h] [rbp-11h] BYREF
  RECT v32; // [rsp+38h] [rbp-9h] BYREF
  RECT rc; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+58h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( !a1 )
  {
    v5 = 2006LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 2007LL;
    goto LABEL_3;
  }
  hWnd = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  if ( (v6 & 0x80000000) != 0 )
  {
    v5 = 2010LL;
    goto LABEL_4;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x7DC,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v8);
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v13 = MonitorFromRect(&rc, 2u);
  if ( !v13 )
  {
    v6 = -2147418113;
    v5 = 2022LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 2025LL;
    goto LABEL_4;
  }
  p_rcMonitor = (__m128i *)&mi.rcMonitor;
  if ( a3 )
    p_rcMonitor = (__m128i *)&mi.rcWork;
  v15 = *p_rcMonitor;
  v16 = _mm_srli_si128(*p_rcMonitor, 8).m128i_u64[0];
  v17 = v16;
  if ( p_rcMonitor->m128i_i32[0] < (int)v16 )
    v17 = (int)*p_rcMonitor;
  v18 = v16;
  if ( v15.m128i_i32[0] > (int)v16 )
    v18 = (LONG)*p_rcMonitor;
  v19 = HIDWORD(v15.m128i_i64[0]);
  v20 = HIDWORD(p_rcMonitor->m128i_i64[0]);
  if ( v15.m128i_i32[1] >= SHIDWORD(v16) )
    v20 = HIDWORD(v16);
  if ( v15.m128i_i32[1] <= SHIDWORD(v16) )
    LODWORD(v19) = HIDWORD(v16);
  v21 = 0;
  v32 = rc;
  v22 = _mm_cvtsi128_si32((__m128i)rc);
  if ( v22 >= v17 )
  {
    if ( v18 >= rc.right )
      goto LABEL_40;
    v25 = v18 - rc.right;
    v24 = v25 + v22;
    v32.right += v25;
  }
  else
  {
    if ( v18 < rc.right )
      goto LABEL_40;
    v23 = v17 - v22;
    v24 = v23 + v22;
    v32.right += v23;
  }
  v32.left = v24;
  v21 = 1;
LABEL_40:
  if ( rc.top >= v20 )
  {
    if ( (int)v19 >= rc.bottom )
      goto LABEL_47;
    v27 = v19 - rc.bottom;
    v32.top += v27;
    v32.bottom += v27;
    goto LABEL_46;
  }
  if ( (int)v19 >= rc.bottom && a3 )
  {
    v26 = v20 - rc.top;
    v32.top += v26;
    v32.bottom += v26;
LABEL_46:
    v21 = 1;
  }
LABEL_47:
  if ( v21 )
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v28 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v30,
            &v32);
    v6 = v28;
    if ( v28 < 0 )
    {
      v29 = 2083LL;
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      return v6;
    }
    v28 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a1 + 32LL))(a1, v30);
    v6 = v28;
    if ( v28 < 0 )
    {
      v29 = 2084LL;
      goto LABEL_52;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  }
  return 0LL;
}
