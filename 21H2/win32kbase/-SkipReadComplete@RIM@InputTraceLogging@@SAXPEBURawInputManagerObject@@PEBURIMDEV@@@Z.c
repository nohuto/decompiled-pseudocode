/*
 * XREFs of ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0173F0C
 * Callers:
 *     rimSignalReadComplete @ 0x1C0175F28 (rimSignalReadComplete.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151434 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C017322C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0173400 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::RIM::SkipReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 *v4; // rax
  unsigned __int8 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+58h] [rbp-11h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+78h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  v2 = *((_BYTE *)a2 + 48);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
        {
          v14 = *(_QWORD *)(v12 + 472);
          v15 = *(unsigned __int16 *)(v14 + 16);
          LODWORD(v18) = *(unsigned __int16 *)(v14 + 18);
          v19 = *(_QWORD *)(v12 + 16);
          LODWORD(v17) = v15;
          v21 = v13;
          v20 = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C024BA90,
            byte_1C021D007,
            v12,
            v13,
            (__int64)&v20,
            (__int64)&v21,
            (__int64)&v19,
            (__int64)&v17,
            (__int64)&v18);
        }
      }
      else if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
      {
        v7 = *(_QWORD *)(v6 + 472);
        v8 = *(unsigned __int16 *)(v7 + 16);
        LODWORD(v17) = *(unsigned __int16 *)(v7 + 18);
        v9 = *(_QWORD *)(v6 + 480);
        LODWORD(v18) = v8;
        v22 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v9 + 24));
        v20 = *(_QWORD *)(v10 + 16);
        v21 = v11;
        v19 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C024BA90,
          byte_1C021CF2E,
          v10,
          v11,
          (__int64)&v19,
          (__int64)&v21,
          (__int64)&v20,
          (void **)&v22,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
    else if ( v2 == 1 && (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
    {
      v19 = v16;
      v4 = &v19;
      v5 = (unsigned __int8 *)&dword_1C021CFD1;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
  {
    v18 = v3;
    v4 = &v18;
    v5 = (unsigned __int8 *)&unk_1C021CF9E;
LABEL_17:
    v26 = 0;
    v24 = v4;
    v25 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024BA90, v5, 0LL, 0LL, 3u, &v23);
  }
}
