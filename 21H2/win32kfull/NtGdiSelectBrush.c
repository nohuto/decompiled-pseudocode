/*
 * XREFs of NtGdiSelectBrush @ 0x1C02AE790
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC (-bValid@XDCOBJ@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

HBRUSH __fastcall NtGdiSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  int v11; // [rsp+A8h] [rbp+28h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( XDCOBJ::bValid((XDCOBJ *)v9) )
  {
    if ( *(_WORD *)(v9[0] + 12LL) == 1 )
    {
      v3 = GreSelectBrushInternal((struct XDCOBJ *)v9, a2, 0);
    }
    else if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v10 = 0;
      v11 = 0;
      v8 = 0x1000000LL;
      v7 = 80231;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C03263F8,
        byte_1C02F2504,
        v4,
        v5,
        (__int64)&v7,
        (__int64)&v8,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v3;
}
