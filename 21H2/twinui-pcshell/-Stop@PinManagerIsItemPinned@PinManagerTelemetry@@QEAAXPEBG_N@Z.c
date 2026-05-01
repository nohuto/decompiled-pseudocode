/*
 * XREFs of ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x180141BEC
 * Callers:
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013B080 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002CE0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002CE0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003214 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801466FC (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsItemPinned::Stop(
        PinManagerTelemetry::PinManagerIsItemPinned *this,
        const unsigned __int16 *a2,
        char a3)
{
  int *v3; // rdi
  int v7; // eax
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // edi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v18[4]; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  int v23; // [rsp+C4h] [rbp-6Ch] BYREF
  int v24; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+100h] [rbp-30h] BYREF
  __int64 v32; // [rsp+108h] [rbp-28h] BYREF
  __int64 v33; // [rsp+110h] [rbp-20h] BYREF
  __int64 v34; // [rsp+118h] [rbp-18h] BYREF
  __int64 v35; // [rsp+120h] [rbp-10h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v10 = PinManagerTelemetry::Provider(v9);
  if ( v8 )
  {
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v28 = *((_QWORD *)v8 + 14);
      v29 = *((_QWORD *)v8 + 13);
      v13 = *((_QWORD *)this + 6);
      v21 = v8[24];
      v30 = *((_QWORD *)v8 + 11);
      v31 = *((_QWORD *)v8 + 10);
      v22 = v8[18];
      v32 = *((_QWORD *)v8 + 8);
      v23 = v8[6];
      v33 = *((_QWORD *)v8 + 2);
      v24 = *v8;
      v34 = *((_QWORD *)v8 + 15);
      v19 = v8[14];
      v35 = *((_QWORD *)v8 + 6);
      v20 = v8[1];
      v25 = 0x1000000LL;
      v26 = 0x1000000LL;
      v18[0] = a3;
      v27 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v11,
        (int)&dword_1805A1499,
        v13 + 8,
        v12,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v20,
        (const wchar_t **)&v35,
        (__int64)&v19,
        (const wchar_t **)&v34,
        (__int64)&v24,
        (const WCHAR **)&v33,
        (__int64)&v23,
        (const wchar_t **)&v32,
        (__int64)&v22,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v21,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (const WCHAR **)&v27,
        (__int64)v18);
    }
  }
  else
  {
    v14 = (int)v10;
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v18[0] = a3;
      v26 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v16 + 76);
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v14,
        (int)&dword_1805A1422,
        v16 + 8,
        v17,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v20,
        (const WCHAR **)&v26,
        (__int64)v18);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
