/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C02255E4
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D17B0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C02245AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

NTSTATUS __fastcall TraceLoggingScreenOrientationArStateChangeEvent(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+50h] [rbp-18h] BYREF
  int v5; // [rsp+54h] [rbp-14h] BYREF
  __int64 v6; // [rsp+58h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v7 = a2;
  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
    {
      v8 = 0;
      v4 = 0;
      v7 = a3;
      v5 = a1;
      v6 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               a1,
               byte_1C02F393A,
               a3,
               0x400000000000LL,
               (__int64)&v6,
               (__int64)&v5,
               (__int64)&v4,
               (__int64)&v8,
               (__int64)&v7);
    }
  }
  return result;
}
