/*
 * XREFs of _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x180022B10
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___::Run @ 0x180022A70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___--.c)
 * Callees:
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18002206C (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x180022890 (-UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180024FC8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x18033E658 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall lambda_3d1fcc114f22629400696f1d7422949c_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int *v4; // rcx
  HWND v5; // rsi
  _DWORD *v6; // rcx
  unsigned int *v7; // r14
  unsigned __int64 i; // r15
  __int64 v9; // rcx
  unsigned int v10; // ebx
  const WCHAR *StringRawBuffer; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  int updated; // eax
  HWND Ancestor; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-58h] BYREF
  DWORD v18[3]; // [rsp+24h] [rbp-54h] BYREF
  LPVOID Context[2]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)a1[1];
  v3 = *((_QWORD *)*a1 + 16);
  *((_QWORD *)*a1 + 16) = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[2];
  if ( (*a1)[76] != *v4 )
  {
    v5 = (HWND)(int)*v4;
    *(_QWORD *)&Rect.left = v5;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_180650DB0;
      qword_180650DB0[0] = &IamTraceLogging::`vftable';
      atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180650DB0);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180650DB0);
    }
    v6 = (_DWORD *)*((_QWORD *)Context[0] + 1);
    if ( v6 && *v6 )
    {
      v18[0] = GetWindowThreadProcessId(v5, (LPDWORD)&fPending);
      LODWORD(Context[0]) = (*(__int64 (__fastcall **)(unsigned int *))(*((_QWORD *)*a1 + 2) + 288LL))(*a1 + 4);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        (int *)Context,
        (__int64 *)&Rect.left,
        (int *)v18,
        &fPending);
    }
    v7 = *a1;
    if ( *a1[3] == 1 )
    {
      GetWindowBand(v5, v7 + 129);
      GetWindowRect(v5, &Rect);
      *((float *)*a1 + 124) = (float)Rect.left;
      *((float *)*a1 + 125) = (float)Rect.top;
      *((float *)*a1 + 126) = (float)(Rect.right - Rect.left);
      *((float *)*a1 + 127) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v5, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)Context = Rect;
        if ( MapWindowPoints(0LL, Ancestor, (LPPOINT)Context, 2u) )
        {
          *((float *)*a1 + 124) = (float)SLODWORD(Context[0]);
          *((float *)*a1 + 125) = (float)SHIDWORD(Context[0]);
          *((float *)*a1 + 126) = (float)(LODWORD(Context[1]) - LODWORD(Context[0]));
          *((float *)*a1 + 127) = (float)(HIDWORD(Context[1]) - HIDWORD(Context[0]));
        }
      }
      *((_BYTE *)*a1 + 512) = 1;
      EnumPropsExW(v5, LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 52));
    }
    else
    {
      for ( i = 0LL; i < *((_QWORD *)v7 + 27); ++i )
      {
        v9 = *(_QWORD *)(*((_QWORD *)v7 + 26) + 8 * i);
        v10 = *(_DWORD *)(v9 + 16);
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 8), 0LL);
        SetPropW(v5, StringRawBuffer, (HANDLE)v10);
      }
    }
    if ( IsWindowVisible(v5) )
      WindowWrapperBase::SetWindowId(*a1, *a1[2], *a1[3]);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
      1u,
      v12);
    v13 = *((_QWORD *)*a1 + 17);
    if ( v13 )
    {
      updated = WindowWrapperBase::UpdateDisplayRegions((__int64)*a1, *((_QWORD *)*a1 + 16), v13);
      if ( updated < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x697,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)updated,
          fPending);
        JUMPOUT(0x180181B79LL);
      }
    }
  }
  return 0LL;
}
