/*
 * XREFs of ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1800D89B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D76E0 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800D9390 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D9890 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::ShouldHandleOperation(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  PPIWin32VtcLayoutOperation *v8; // rdi
  int AppOnLayoutByActivationTime; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-29h]
  __int64 (__fastcall **v15)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v16; // [rsp+58h] [rbp-1h]
  _DWORD *v17; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall ***v18)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct IApplicationView *v20; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+7Fh] BYREF

  *a4 = 0;
  v21 = 0LL;
  v8 = (PPIWin32VtcLayoutOperation *)(a1 - 176);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 176) + 168LL))(a1 - 176)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21),
        (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 *, __int64))(*(_QWORD *)v8 + 160LL))(v8, &v21, 1LL) >= 0) )
  {
    *a4 = 1;
    goto LABEL_15;
  }
  if ( a3 )
  {
    v20 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>((_QWORD *)(a1 - 120), (__int64 *)&v20);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v14 = v8;
      *((_QWORD *)&v14 + 1) = a2;
      v15 = off_180506C88;
      v16 = v14;
      v17 = a4;
      v18 = &v15;
      v11 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *, __int64 (__fastcall ***)()))(*(_QWORD *)v8 + 176LL))(
              v8,
              v20,
              &v15);
      v10 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_15;
      }
      v12 = 268LL;
    }
    else
    {
      v12 = 259LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_16;
  }
  if ( (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, __int64))(*(_QWORD *)v8 + 88LL))(
         v8,
         1LL,
         1LL) != 2 )
  {
LABEL_15:
    v10 = 0;
    goto LABEL_16;
  }
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(v8, 1LL, &v20, 1LL);
  v10 = AppOnLayoutByActivationTime;
  if ( AppOnLayoutByActivationTime >= 0 )
  {
    *a4 = PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(v8, v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)AppOnLayoutByActivationTime);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v10;
}
