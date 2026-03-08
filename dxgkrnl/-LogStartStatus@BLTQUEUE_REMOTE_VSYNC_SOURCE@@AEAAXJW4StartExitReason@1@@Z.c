/*
 * XREFs of ?LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x1C03D09AC
 * Callers:
 *     _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C006DC48 (_DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006CB24 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006D00C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::LogStartStatus(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v13 = a1;
  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
    {
      LODWORD(v13) = a3;
      v14 = a2;
      v11 = 33556480LL;
      v12 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1C00A1E6E,
        v6,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v14,
        (__int64)&v13);
      v7 = dword_1C013A8A8;
    }
    if ( v7 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x80000LL) )
      {
        LODWORD(v13) = a3;
        v14 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_1C00A1E37,
          v9,
          v10,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
  }
}
