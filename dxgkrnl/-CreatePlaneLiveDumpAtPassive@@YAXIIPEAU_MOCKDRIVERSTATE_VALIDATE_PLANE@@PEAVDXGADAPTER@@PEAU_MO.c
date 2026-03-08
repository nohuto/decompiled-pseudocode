/*
 * XREFs of ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C031E220
 * Callers:
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C0052F08 (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555@Z @ 0x1C005281C (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_1C005281C.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall CreatePlaneLiveDumpAtPassive(
        unsigned int a1,
        unsigned int a2,
        struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a3,
        struct DXGADAPTER *a4,
        struct _MOCKDRIVERSTATE_PLANE *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  struct _MOCKDRIVERSTATE_PLANE *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  int v17; // [rsp+B8h] [rbp-78h] BYREF
  int v18; // [rsp+BCh] [rbp-74h] BYREF
  int v19; // [rsp+C0h] [rbp-70h] BYREF
  int v20; // [rsp+C4h] [rbp-6Ch] BYREF
  int v21; // [rsp+C8h] [rbp-68h] BYREF
  int v22; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h]
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  void *v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27[8]; // [rsp+F0h] [rbp-40h] BYREF
  __int16 v28; // [rsp+140h] [rbp+10h] BYREF
  __int16 v29; // [rsp+148h] [rbp+18h] BYREF
  int IsDebuggerPresent; // [rsp+150h] [rbp+20h] BYREF
  int v31; // [rsp+158h] [rbp+28h] BYREF

  v6 = a2;
  v8 = a1;
  WdLogSingleEntry2(2LL, a1, a2);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Destroying kernel plane state without explicitly asking driver to disable plane on source0x%I64x, plane:0x%I64x",
    v8,
    v6,
    0LL,
    0LL,
    0LL);
  v9 = a5;
  *((_DWORD *)a5 + 654) = *((_DWORD *)a3 + 10);
  *((_DWORD *)v9 + 655) = v6;
  *((_BYTE *)v9 + 8) = 1;
  *((_QWORD *)v9 + 328) = *((_QWORD *)a3 + 6);
  RtlCaptureStackBackTrace(2u, 0xCu, (PVOID *)v9 + 329, 0LL);
  v23 = *(_QWORD *)((char *)a4 + 404);
  if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000020000LL) )
  {
    LOBYTE(v10) = 1;
    LODWORD(a5) = *((unsigned __int8 *)a4 + 209);
    v27[0] = 0x1000000LL;
    IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v10);
    v31 = *((_DWORD *)a4 + 754);
    v15 = *((unsigned __int8 *)a4 + 2870);
    v16 = *((_DWORD *)v9 + 655);
    v17 = *((_DWORD *)v9 + 654);
    v28 = *((_WORD *)a4 + 1410);
    v24 = *((_QWORD *)a4 + 228);
    v25 = (void *)*((_QWORD *)a4 + 227);
    v18 = *((_DWORD *)a4 + 107);
    v19 = *((_DWORD *)a4 + 106);
    v20 = *((_DWORD *)a4 + 105);
    v21 = *((_DWORD *)a4 + 104);
    v22 = *((_DWORD *)a4 + 103);
    v26 = v23;
    v29 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1C009F973,
      v12,
      v13,
      (__int64)&v29,
      (__int64)v27,
      (__int64)&v26,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      &v25,
      (__int64)&v24,
      (__int64)&v28,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v31,
      (__int64)&IsDebuggerPresent,
      (__int64)&a5);
  }
  a5 = 0LL;
  v14 = *((int *)v9 + 654);
  LOBYTE(a5) = 1;
  DxgCreateLiveDumpWithWdLogs2(0x193u, 2067LL, 0LL, v14, *((_QWORD *)v9 + 328), 1LL);
}
