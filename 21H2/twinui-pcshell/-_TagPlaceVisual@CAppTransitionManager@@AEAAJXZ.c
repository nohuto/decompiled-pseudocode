/*
 * XREFs of ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x180436880
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434520 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x180434E94 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagPlaceVisual(CAppTransitionManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  HWND v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-49h]
  __int64 v16; // [rsp+28h] [rbp-41h]
  char *v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-19h] BYREF
  RECT rc2; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp+7h] BYREF
  RECT rc1; // [rsp+80h] [rbp+17h] BYREF
  RECT rcSrc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 26);
  if ( !v2 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = 0;
  if ( !v19 )
    return 0LL;
  while ( 1 )
  {
    v18 = 0LL;
    v7 = *((_QWORD *)this + 26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, __int64, __int64, char *))(*(_QWORD *)v7 + 32LL))(
           v7,
           v6,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           &v18,
           v15,
           v16,
           v17) < 0 )
      goto LABEL_16;
    v8 = 218103808;
    if ( *((_DWORD *)this + 75) == 68 )
      v8 = 218365952;
    v9 = (*(__int64 (**)(void))(*(_QWORD *)v18 + 32LL))() - 7;
    if ( !v9 )
      break;
    if ( v9 == 1 )
    {
      v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
      GetWindowRect(v10, &Rect);
      OffsetRect(&Rect, -Rect.left, -Rect.top);
      (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, &rc1);
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 0LL, &rc2);
      if ( !EqualRect(&rc1, &rc2) )
      {
        MatchRectAspectRatio(&Rect, &rc2);
        v11 = MulDiv(rc2.left - rc1.left, Rect.right - Rect.left, rc2.right - rc2.left);
        OffsetRect(&Rect, v11, 0);
      }
      v17 = (char *)this + 264;
      v16 = 0LL;
      v15 = 0LL;
      v12 = DwmpTransitionWindowWithRects(v10, v8 | 1u, &Rect, &rc2);
      v4 = v12;
      if ( v12 < 0 )
      {
        v13 = 587LL;
        goto LABEL_19;
      }
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    if ( ++v6 >= v19 )
      return 0LL;
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
  (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, &rcSrc);
  CopyRect(&rcDst, &rcSrc);
  OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v12 = DwmpTransitionWindowWithRects(v14, v8 | 0x1Eu, &rcDst, &rcSrc);
  v4 = v12;
  if ( v12 >= 0 )
    goto LABEL_16;
  v13 = 606LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v4;
}
