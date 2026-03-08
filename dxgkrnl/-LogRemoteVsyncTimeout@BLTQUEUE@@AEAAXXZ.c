/*
 * XREFs of ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x1C03CD4B4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2@Z @ 0x1C006CC44 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_E.c)
 */

void __fastcall BLTQUEUE::LogRemoteVsyncTimeout(BLTQUEUE *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
    {
      v4 = 33556480LL;
      v5 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v1,
        byte_1C00A1D5F,
        v2,
        (__int64)&v5,
        (__int64)&v4);
      v3 = dword_1C013A8A8;
    }
    if ( v3 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x80000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C013A8A8,
          (unsigned __int8 *)dword_1C00A1CD7,
          0LL,
          0LL,
          2u,
          &v6);
    }
  }
}
