/*
 * XREFs of ??$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@PEA_N@Z @ 0x180028194
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180027CD0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180057DA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??R_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@QEBAJXZ @ 0x180201D70 (--R_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@QEBAJXZ.c)
 */

__int64 __fastcall wil::init_once_nothrow<_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  fPending = 0;
  if ( !InitOnceBeginInitialize(
          &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
          0,
          &fPending,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x218, (unsigned int)"wil", v3);
  if ( !fPending )
    return 0LL;
  v5 = _lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator()();
  v6 = v5;
  if ( v5 >= 0 )
  {
    InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x21D, (unsigned int)"wil", (const char *)(unsigned int)v5, v7);
  InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 4u, 0LL);
  return v6;
}
