/*
 * XREFs of ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18045C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18004F5C8 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1802134A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x18045C1A8 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::PresentationChangedForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IPresentationRequestedArgs *v11; // [rsp+50h] [rbp-49h] BYREF
  int v12; // [rsp+58h] [rbp-41h] BYREF
  int v13; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+60h] [rbp-39h] BYREF
  struct IImmersiveMonitor *v15; // [rsp+68h] [rbp-31h] BYREF
  __int64 v16; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+78h] [rbp-21h] BYREF
  struct tagRECT v18; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v19; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v20; // [rsp+A0h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  lpVtbl = a3->lpVtbl;
  v11 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IPresentationRequestedArgs **))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v11) < 0 )
    goto LABEL_13;
  v14 = 0;
  v20 = 0LL;
  v13 = 0;
  v12 = 0;
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 72LL))(v11, &v12);
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 88LL))(v11, &v13);
  (*(__int64 (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 80LL))(v11, &v17);
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v7 = v6(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v16 + 24LL))(v16, &v21);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 739LL;
      goto LABEL_6;
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v18 = v21;
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                (CDesktopPositioner *)((char *)this - 136),
                v11,
                &v18,
                &v20,
                (enum TRY_POSITION_VIEW_FLAGS *)&v14,
                &v15) >= 0 )
    {
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v18);
      if ( !*(_QWORD *)&v18.left )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EB,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18.left);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        goto LABEL_10;
      }
      v19 = v20;
      CDesktopPositioner::PositionViewWithOptions(
        (__int64)this - 136,
        a2,
        (unsigned int *)&v19,
        v14,
        *(__int64 **)&v18.left,
        8u,
        (__int64)v15);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18.left);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v9 = 736LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return v8;
}
