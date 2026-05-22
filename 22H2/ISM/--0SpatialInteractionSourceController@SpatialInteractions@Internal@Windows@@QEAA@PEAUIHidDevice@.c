/*
 * XREFs of ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180169A24
 * Callers:
 *     std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice___&_unsigned_long_&_unsigned_long_&__lambda_538a60f2dfb0de3d5e0ccb23ebc37905___ @ 0x1800CC97C (std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController_-.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A580 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CB7CC (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x18015692C (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV?$function@$$A6AXXZ@std@@@Z @ 0x1801697C8 (--0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@@Z @ 0x180169D9C (--0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@@Z.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x18016CC50 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x18016CCE4 (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x18016ED68 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=4
Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  RegistryHelpers *v7; // rcx
  RegistryHelpers *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // rcx
  __int64 v14; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v15; // rcx
  char *v16; // rax
  __int64 v17; // rdx
  __m256i v19; // [rsp+20h] [rbp-40h] BYREF

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice(this, a3, a4);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  *((_QWORD *)this + 14) = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 14);
  SpatialInteractionDevices::HID_HANDLE::HID_HANDLE((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120));
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_WORD *)this + 220) = 0;
  *((float *)this + 111) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v7,
                                         (const WCHAR *)&stru_1801C4430,
                                         L"AnalogTriggerInteractionTimeoutInMilliseconds",
                                         (const wchar_t *)0x3E8)
                         / 1000.0;
  *((_DWORD *)this + 112) = 0;
  *((float *)this + 113) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v8,
                                         (const WCHAR *)&stru_1801C4430,
                                         L"AnalogTriggerInteractionThresholdPercent",
                                         (const wchar_t *)0xA)
                         / 100.0;
  *((_WORD *)this + 228) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  v9 = std::function<void (void)>::function<void (void)>((__int64)&v19, a5);
  ThreadpoolTimerHelpers::KeepAliveTimer::KeepAliveTimer((RTL_SRWLOCK *)this + 72, v10, v9);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 696), 0, 0);
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_BYTE *)this + 748) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 752), 0, 0);
  *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 200) = 0;
  *((_BYTE *)this + 804) = 0;
  *((_QWORD *)this + 101) = 0LL;
  *((_DWORD *)this + 204) = 0;
  *((_BYTE *)this + 904) = 0;
  *(_OWORD *)((char *)this + 908) = 0LL;
  *(_OWORD *)((char *)this + 924) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 952) = 0;
  *((_DWORD *)this + 239) = 0;
  memset_0((char *)this + 960, 0, 0x40uLL);
  memset_0((char *)this + 1024, 0, 0xA0uLL);
  *((_WORD *)this + 592) = 0;
  memset_0((char *)this + 1024, 0, 0xA0uLL);
  memset_0((char *)this + 960, 0, 0x40uLL);
  v19.m256i_i64[0] = qword_180209960;
  v19.m256i_i32[2] = dword_180209968;
  *(_OWORD *)((char *)&v19.m256i_u64[1] + 4) = xmmword_1801C74C0;
  v19.m256i_i16[14] = 257;
  *(__m256i *)((char *)this + 540) = v19;
  v19.m256i_i64[0] = qword_180209960;
  v19.m256i_i32[2] = dword_180209968;
  *(_OWORD *)((char *)&v19.m256i_u64[1] + 4) = xmmword_1801C74C0;
  v19.m256i_i16[14] = 257;
  *(__m256i *)((char *)this + 508) = v19;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(this, 13000);
  *((_DWORD *)this + 200) = 30000;
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v11) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v12,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
      v13,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      0x7530u);
  }
  *((_BYTE *)this + 804) = 100;
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v12) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v14,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
      v15,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      0x64u);
  }
  v16 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
  {
    *((_QWORD *)v16 + 2) = 0LL;
    *(_OWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_DWORD *)v16 + 8) = 0;
    *(_OWORD *)(v16 + 36) = 0LL;
    *(_QWORD *)(v16 + 52) = 0LL;
    *((_DWORD *)v16 + 15) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 62) = v16;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a5, v17);
  return this;
}
