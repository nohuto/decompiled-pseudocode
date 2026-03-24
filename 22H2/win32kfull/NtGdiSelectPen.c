/*
 * XREFs of NtGdiSelectPen @ 0x1C02AFA70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

HPEN __fastcall NtGdiSelectPen(HDC a1, HPEN a2)
{
  HPEN v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v10) )
  {
    if ( *(_WORD *)(v10[0] + 12LL) == 1 )
    {
      v3 = GreSelectPenInternal((struct XDCOBJ *)v10, a2, 0);
    }
    else if ( (unsigned int)dword_1C032A3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x400000000000LL) )
    {
      v11 = 0;
      v12 = v6;
      v9 = 0x1000000LL;
      v8 = 80231;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (int)&unk_1C02F401A,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v3;
}
