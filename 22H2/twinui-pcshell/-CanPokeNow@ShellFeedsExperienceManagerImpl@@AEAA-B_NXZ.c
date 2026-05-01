/*
 * XREFs of ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x1800B1DC4
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x1800B6370 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEA_KAEA_KAEBMAEB_NAEA_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_NAEA_K1AEBMAEB_NAEA_JAEBH3@Z @ 0x1800B0420 (--$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEA_KAEA_KAEBMAEB_NAEA_JAEBHAEB_.c)
 *     ??$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?AW4EnergySaverStatus@Power@System@Windows@2@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@Z @ 0x1800B0BA4 (--$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@-$factory_cache_entry@UPowerManager@Powe.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8870 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 */

char __fastcall ShellFeedsExperienceManagerImpl::CanPokeNow(ShellFeedsExperienceManagerImpl *this)
{
  __int64 ticks; // rax
  __int64 v3; // r9
  __int64 v4; // r15
  bool IsViewVisible; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // bp
  char v10; // di
  float v11; // xmm6_4
  float v12; // xmm0_4
  bool v14; // [rsp+90h] [rbp+8h] BYREF
  bool v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF
  float v17; // [rsp+A8h] [rbp+20h] BYREF

  ticks = _Xtime_get_ticks();
  v3 = ticks - *((_QWORD *)this + 25);
  *((_QWORD *)this + 22) = (ticks - *((_QWORD *)this + 24)) / 10000000;
  v4 = v3 / 36000000000LL;
  v16 = v3 / 36000000000LL;
  IsViewVisible = ShellFeedsExperienceManagerImpl::_IsViewVisible(this);
  v15 = IsViewVisible;
  v6 = winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<_lambda_64579cffbd4724e9a4ba09ce2deae2f2_ &>();
  v7 = *((_QWORD *)this + 21);
  v8 = *((_QWORD *)this + 20);
  v9 = v6 == 2;
  v14 = v6 == 2;
  v10 = 1;
  if ( v7 < 0 )
    v11 = (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1))
        + (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1));
  else
    v11 = (float)(int)v7;
  if ( v8 )
  {
    if ( v8 < 0 )
      v12 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
          + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v12 = (float)(int)v8;
    v11 = v11 / v12;
  }
  v17 = v11;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration<bool &,unsigned __int64 &,unsigned __int64 &,float const &,bool const &,__int64 &,int const &,bool const &>(
    (_BYTE *)this + 184,
    (__int64 *)this + 21,
    (__int64 *)this + 20,
    (int *)&v17,
    (char *)&v15,
    (int *)this + 44,
    &v16,
    (char *)&v14);
  if ( !*((_BYTE *)this + 184)
    || v11 >= 5.0
    || IsViewVisible
    || *((__int64 *)this + 22) <= 30
    || (unsigned int)((int)v4 / 24) > 0xE
    || v9 )
  {
    return 0;
  }
  return v10;
}
