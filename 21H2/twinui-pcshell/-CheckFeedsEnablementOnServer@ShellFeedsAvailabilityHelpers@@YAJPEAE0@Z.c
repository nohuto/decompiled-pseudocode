/*
 * XREFs of ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108EF8
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18010752C (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$ShellFeedsLauncher_PingFeedsEnablementEndpoint@AEBJAEAEAEB_J@ShellFeedsTelemetry@@SAXAEBJAEAEAEB_J@Z @ 0x1801088D0 (--$ShellFeedsLauncher_PingFeedsEnablementEndpoint@AEBJAEAEAEB_J@ShellFeedsTelemetry@@SAXAEBJAEAE.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108E9C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109B04 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109D34 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1801155CC (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAE@Z @ 0x180116070 (-PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  int v4; // ebx
  int v5; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int IsFeedsEnabledAtEndPoint; // eax
  int v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h] BYREF
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  CHAR MultiByteStr[16]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  _QWORD v16[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+Fh]
  __int64 v18; // [rsp+70h] [rbp+17h]
  _QWORD v19[4]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(v19);
  if ( v19[2] )
  {
    v17 = 0LL;
    v18 = 7LL;
    LOWORD(v16[0]) = 0;
    v5 = ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(v19, v16);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x252,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
        (const char *)(unsigned int)v5);
LABEL_17:
      std::wstring::_Tidy_deallocate(v16);
      goto LABEL_18;
    }
    if ( !v17 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    v14 = 0LL;
    v15 = 15LL;
    MultiByteStr[0] = 0;
    std::chrono::steady_clock::now(&v11);
    v4 = ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint(v16, MultiByteStr, a2);
    v10 = v4;
    std::chrono::steady_clock::now(&v12);
    v11 = (v12 - v11) / 1000;
    ShellFeedsTelemetry::ShellFeedsLauncher_PingFeedsEnablementEndpoint<long const &,unsigned char &,__int64 const &>(
      &v10,
      a2,
      (int *)&v11);
    if ( v4 >= 0 )
    {
      if ( !v14 || *a2 )
      {
        v4 = 1;
        *a2 = 1;
        goto LABEL_16;
      }
      IsFeedsEnabledAtEndPoint = ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint(MultiByteStr);
      v4 = IsFeedsEnabledAtEndPoint;
      if ( IsFeedsEnabledAtEndPoint >= 0 )
      {
        v4 = 0;
        goto LABEL_16;
      }
      v6 = (unsigned int)IsFeedsEnabledAtEndPoint;
      v7 = 619LL;
    }
    else
    {
      v6 = (unsigned int)v4;
      v7 = 608LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)v6);
LABEL_16:
    std::string::~string((__int64)MultiByteStr);
    goto LABEL_17;
  }
  v4 = 1;
LABEL_18:
  std::wstring::_Tidy_deallocate(v19);
  return (unsigned int)v4;
}
