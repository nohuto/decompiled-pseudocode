/*
 * XREFs of ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1801420BC
 * Callers:
 *     ??R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x180136750 (--R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C270 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566664@Z @ 0x180002960 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002960.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@554@Z @ 0x1800030C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U3@U2@@-$_tlgW.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801466FC (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::Stop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int *v5; // rdi
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // edi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v21; // [rsp+C4h] [rbp-7Ch] BYREF
  int v22; // [rsp+C8h] [rbp-78h] BYREF
  int v23; // [rsp+CCh] [rbp-74h] BYREF
  int v24; // [rsp+D0h] [rbp-70h] BYREF
  int v25; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v26; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+100h] [rbp-40h] BYREF
  __int64 v32; // [rsp+108h] [rbp-38h] BYREF
  __int64 v33; // [rsp+110h] [rbp-30h] BYREF
  __int64 v34; // [rsp+118h] [rbp-28h] BYREF
  __int64 v35; // [rsp+120h] [rbp-20h] BYREF
  __int64 v36; // [rsp+128h] [rbp-18h] BYREF
  __int64 v37; // [rsp+130h] [rbp-10h] BYREF
  __int64 v38; // [rsp+138h] [rbp-8h] BYREF
  __int64 v39; // [rsp+160h] [rbp+20h] BYREF

  v5 = *(int **)(a1 + 48);
  v10 = v5[19];
  if ( v10 < 0 && v10 == v5[21] )
    v11 = v5 + 20;
  else
    v11 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v13 = PinManagerTelemetry::Provider(v12);
  if ( v11 )
  {
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v33 = *((_QWORD *)v11 + 14);
      v34 = *((_QWORD *)v11 + 13);
      v22 = v11[24];
      v35 = *((_QWORD *)v11 + 11);
      v15 = *(_QWORD *)(a1 + 48);
      v36 = *((_QWORD *)v11 + 10);
      v23 = v11[18];
      v37 = *((_QWORD *)v11 + 8);
      v24 = v11[6];
      v38 = *((_QWORD *)v11 + 2);
      v25 = *v11;
      v26 = *((_QWORD *)v11 + 15);
      v20 = v11[14];
      v27 = *((_QWORD *)v11 + 6);
      v21 = v11[1];
      v28 = 0x1000000LL;
      v29 = 0x1000000LL;
      LODWORD(v39) = a5;
      v30 = a4;
      v31 = a3;
      v32 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v14,
        (int)&dword_1805A0C09,
        v15 + 8,
        v14,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v21,
        (const wchar_t **)&v27,
        (__int64)&v20,
        (const wchar_t **)&v26,
        (__int64)&v25,
        (const WCHAR **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (__int64)&v23,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v22,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (const WCHAR **)&v32,
        (const WCHAR **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v39);
    }
  }
  else
  {
    v16 = (int)v13;
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      LODWORD(v39) = a5;
      v29 = a4;
      v28 = a3;
      v27 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *(_QWORD *)(a1 + 48);
      v21 = CurrentThreadId;
      v20 = *(_DWORD *)(v18 + 76);
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v16,
        (int)&dword_1805A0B6A,
        v18 + 8,
        v19,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&v21,
        (const WCHAR **)&v27,
        (const WCHAR **)&v28,
        (const WCHAR **)&v29,
        (__int64)&v39);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
