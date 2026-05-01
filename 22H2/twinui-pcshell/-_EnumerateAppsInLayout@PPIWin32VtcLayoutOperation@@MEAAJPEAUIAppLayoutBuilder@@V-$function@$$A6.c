/*
 * XREFs of ?_EnumerateAppsInLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIAppLayoutBuilder@@V?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@@Z @ 0x1800D8FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-49h] BYREF
  _OWORD v14[4]; // [rsp+30h] [rbp-39h] BYREF
  _OWORD v15[4]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v13[1] = a3;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 128LL))(a2, v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v13[0] + 24LL))(v13[0], 1LL, v15) < 0 )
        break;
      v14[0] = v15[0];
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v10 = *(_QWORD *)(a3 + 56);
      if ( !v10 )
      {
        std::_Xbad_function_call();
        return PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout_::_1_::dtor_0();
      }
    }
    while ( (*(unsigned __int8 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v10 + 16LL))(v10, v14) );
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v12 = *(_QWORD *)(a3 + 56);
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v8 = *(_QWORD *)(a3 + 56);
    if ( v8 )
    {
      LOBYTE(v7) = v8 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return v6;
  }
}
