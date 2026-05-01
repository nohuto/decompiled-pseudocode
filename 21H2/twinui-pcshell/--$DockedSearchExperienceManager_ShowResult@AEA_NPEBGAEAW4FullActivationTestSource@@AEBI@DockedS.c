/*
 * XREFs of ??$DockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBI@DockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBI@Z @ 0x18009D808
 * Callers:
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1800AD944 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800AD008 (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 */

char __fastcall DockedSearchExperienceManagerTIPTelemetry::DockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &>(
        char *a1,
        __int64 *a2,
        _DWORD *a3,
        int *a4)
{
  __int64 v8; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(v8 + 8);
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v15 = *a4;
      LODWORD(v16) = *a3;
      v18 = *a2;
      v14 = *a1;
      v17 = 0x1000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v10,
                     (int)&dword_18057D4AE,
                     v11,
                     v12,
                     (__int64)&v14,
                     (const WCHAR **)&v18,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v17);
    }
  }
  return v8;
}
