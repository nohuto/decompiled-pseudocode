/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0225678
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C002EC84 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D16B8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D17B0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C02245AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

NTSTATUS __fastcall TraceLoggingScreenOrientationChangeEvent(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  int v5; // [rsp+50h] [rbp-28h] BYREF
  int v6; // [rsp+54h] [rbp-24h] BYREF
  int v7; // [rsp+58h] [rbp-20h] BYREF
  int v8; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v9[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x400000000001LL) != 0 )
  {
    result = qword_1C032B3F0 & 1;
    if ( (qword_1C032B3F0 & 0x400000000001LL) == qword_1C032B3F0 )
    {
      v7 = a2;
      v5 = a4;
      v6 = a3;
      v8 = a1;
      v9[0] = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               a1,
               byte_1C02F3AC4,
               a3,
               a4,
               (__int64)v9,
               (__int64)&v8,
               (__int64)&v7,
               (__int64)&v6,
               (__int64)&v5);
    }
  }
  return result;
}
