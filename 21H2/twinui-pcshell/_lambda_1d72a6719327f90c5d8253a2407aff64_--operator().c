/*
 * XREFs of _lambda_1d72a6719327f90c5d8253a2407aff64_::operator() @ 0x1801FD6B8
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_1d72a6719327f90c5d8253a2407aff64_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1801FBAE0 (--$LambdaEnumWindowsProc@V_lambda_1d72a6719327f90c5d8253a2407aff64_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180201818 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1d72a6719327f90c5d8253a2407aff64_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // rdi
  int *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = *(int **)a1;
  if ( **(int **)a1 < 0 )
    return *v5 >= 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v4 >= *(_QWORD *)(v6 + 688) )
      return *v5 >= 0;
    v7 = *(_QWORD *)(v6 + 680);
    if ( IsEqualByHwnd(a2, *(struct IApplicationView **)(v7 + 8 * v4)) )
      break;
LABEL_12:
    ++v4;
    v5 = *(int **)a1;
    if ( **(int **)a1 < 0 )
      return *v5 >= 0;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 16) + 24LL))(
         **(_QWORD **)(a1 + 16),
         &v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    **(_DWORD **)a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 40LL))(
                        **(_QWORD **)(a1 + 16),
                        *(_QWORD *)(v7 + 8 * v4));
    goto LABEL_12;
  }
  v9 = 0;
  if ( !v14 )
    goto LABEL_11;
  while ( 1 )
  {
    v15 = 0LL;
    v10 = **(_QWORD **)(a1 + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
            v10,
            v9,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v15);
    if ( v11 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    if ( ++v9 >= v14 )
      goto LABEL_11;
  }
  if ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(v7 + 8 * v4), v15) )
    goto LABEL_10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return 1LL;
}
