/*
 * XREFs of ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1801B14E0
 * Callers:
 *     wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801AFEA0 (wistd--__function--__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil--Regis.c)
 *     ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x1801B06D0 (-OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1801B0730 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B11D0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::UpdateAcrylicState(AcrylicPolicyManager *this, char a2)
{
  unsigned __int8 v3; // di
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 465) && !*((_BYTE *)this + 467) && *((_BYTE *)this + 466) )
    v3 = *((_BYTE *)this + 468) != 0;
  if ( *((_BYTE *)this + 464) != v3 || a2 )
  {
    v8 = v3;
    v4 = RtlPublishWnfStateData(WNF_IMSN_TRANSPARENCYPOLICY, 0LL, &v8, 4LL);
    v5 = v4 | 0x10000000;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107,
        (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)v5);
      return v5;
    }
    *((_BYTE *)this + 464) = v3;
  }
  return 0LL;
}
