/*
 * XREFs of ?StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z @ 0x180141AB4
 * Callers:
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FBB4 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180146660 (-zInternalStart@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801C9428 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x1804D6718 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWriteTe.c)
 */

void __fastcall PinManagerTelemetry::PinManagerRequestPinItem::StartActivity(
        PinManagerTelemetry::PinManagerRequestPinItem *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // edi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = PinManagerTelemetry::Provider(v8);
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    v14 = (__int64)a4;
    v15 = (__int64)a3;
    v16 = (__int64)a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *((_QWORD *)this + 6);
    LODWORD(v18) = CurrentThreadId;
    v17 = 0x1000000LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v13 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v10,
      (int)&dword_1805A0749,
      v12 + 8,
      v13,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
