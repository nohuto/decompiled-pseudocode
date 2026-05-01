/*
 * XREFs of ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180481FC4
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1804829A0 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x180482290 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180490D14 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180491D4C (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::InitDropFeedback(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  char v6; // di
  const struct _GUID *v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  IUnknown **p_punk; // [rsp+20h] [rbp-59h]
  IUnknown *punk; // [rsp+30h] [rbp-49h] BYREF
  void *v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-39h] BYREF
  char v17; // [rsp+50h] [rbp-29h]
  _BYTE v18[16]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v19; // [rsp+70h] [rbp-9h]
  _BYTE v20[40]; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v21; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), (char *)this + 100);
  *((_DWORD *)this + 37) = 10 * *((_DWORD *)this + 29) / 100;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), (char *)this + 100, 0LL);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_20;
  }
  v16[1] = (__int64)&punk;
  v6 = 1;
  v17 = 1;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v8 = CDropFeedbackList_CreateInstance(v7, &v15);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v16[0] = 0LL;
  v9 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL))(v9, v16);
  v5 = v10;
  if ( v10 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v16[0] + 24LL))(v16[0], 1LL, v18) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD, __int64, _BYTE *, IUnknown **))(*(_QWORD *)v15 + 64LL))(
        v15,
        (unsigned int)v19,
        v19,
        v20,
        p_punk);
    v21 = 0LL;
    AppResizeView::MakeDragGutterRect(this, *(_DWORD *)a2, &v21);
    v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, IUnknown **))(*(_QWORD *)v15 + 72LL))(
            v15,
            100LL,
            2LL,
            &v21,
            p_punk);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v15, 0LL);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v10 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
        v5 = v10;
        if ( v10 >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 7, (__int64 *)&punk);
          v6 = 0;
          v17 = 0;
          v5 = 0;
          goto LABEL_17;
        }
        v11 = 381LL;
      }
      else
      {
        v11 = 380LL;
      }
    }
    else
    {
      v11 = 377LL;
    }
  }
  else
  {
    v11 = 364LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v10);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( v6 )
  {
    v17 = 0;
    IUnknown_SetSite(punk, 0LL);
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v5;
}
