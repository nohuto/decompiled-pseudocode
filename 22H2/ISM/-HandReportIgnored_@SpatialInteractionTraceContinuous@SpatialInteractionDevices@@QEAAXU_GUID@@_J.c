/*
 * XREFs of ?HandReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JHH_N2@Z @ 0x1800DFDC0
 * Callers:
 *     ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800DD960 (--$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteracti.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D45BC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x1800DDB58 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U-$_.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        int a4,
        int a5,
        bool a6,
        bool a7)
{
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  struct _GUID *v19; // [rsp+78h] [rbp-8h] BYREF
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v20; // [rsp+A0h] [rbp+20h] BYREF
  bool v21; // [rsp+B0h] [rbp+30h] BYREF

  v20 = this;
  v10 = 1000000 * a3 / qword_180209328;
  v11 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          (__int64)this,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 5u && tlgKeywordOn(v11[1], 2LL) )
  {
    LOBYTE(v20) = a7;
    v21 = a6;
    v15 = a5;
    v16 = a4;
    v17 = v10;
    v18 = a3;
    v19 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v14,
      byte_1801CE17B,
      v12,
      v13,
      (__int64 *)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v21,
      (__int64)&v20);
  }
}
