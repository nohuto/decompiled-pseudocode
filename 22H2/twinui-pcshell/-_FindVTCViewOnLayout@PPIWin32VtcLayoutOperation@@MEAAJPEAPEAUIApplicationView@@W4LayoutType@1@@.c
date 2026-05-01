/*
 * XREFs of ?_FindVTCViewOnLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800D9390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D7570 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_FindVTCViewOnLayout(_QWORD *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v11)(); // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v13)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a1[8];
  if ( a3 == 1 )
  {
    v16 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(a1 + 7, &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      return v7;
    }
    v5 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  v15 = 0LL;
  *(_QWORD *)&v10 = a1;
  *((_QWORD *)&v10 + 1) = &v15;
  v11 = off_180506B68;
  v12 = v10;
  v13 = &v11;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall ***)()))(*a1 + 176LL))(a1, v5, &v11);
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( v15 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1) )
    {
      if ( a2 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
        *a2 = v15;
      }
      v7 = 0;
    }
    else
    {
      v7 = -2147023728;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v7;
}
