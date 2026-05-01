/*
 * XREFs of _lambda_e0ff0c218d6e4b12793471debe4cf99e_::operator() @ 0x1802FDF34
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99e___::Invoke @ 0x1802FE880 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e0ff0c218d6e4b12793471debe4cf99e_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = v4(a2, &GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 104LL) + 24LL))(*(_QWORD *)(*(_QWORD *)a1 + 104LL));
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 72LL))(
           v10,
           *(_QWORD *)(*(_QWORD *)a1 + 264LL),
           *(_QWORD *)(*(_QWORD *)a1 + 244LL));
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 649LL;
  }
  else
  {
    v7 = 642LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
