/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C02257A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0223FEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

NTSTATUS __fastcall TraceLoggingPTPWarpBack(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  int v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp-24h] BYREF
  int v9; // [rsp+58h] [rbp-20h] BYREF
  int v10; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v11[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C032A3D8 > 5 && (qword_1C032A3E8 & 0x200000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1C032A3F0 & 0x200000000000LL) == qword_1C032A3F0 )
    {
      v7 = a1;
      v5 = HIDWORD(a3);
      v6 = (unsigned int)(a3 - a2);
      v8 = a4;
      v9 = v5 - HIDWORD(a2);
      v10 = v6;
      v11[0] = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               HIDWORD(a2),
               byte_1C02F2750,
               v6,
               a4,
               (__int64)v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v7);
    }
  }
  return result;
}
