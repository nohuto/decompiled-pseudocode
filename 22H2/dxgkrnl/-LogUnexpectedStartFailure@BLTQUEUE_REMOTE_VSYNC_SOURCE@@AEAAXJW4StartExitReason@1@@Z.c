/*
 * XREFs of ?LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x1C0300D4C
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C0300EB0 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00213AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C005F778 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  int v8; // [rsp+40h] [rbp-19h] BYREF
  int v9; // [rsp+44h] [rbp-15h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h] BYREF
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp+7h] BYREF
  int *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]
  int *v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+9Ch] [rbp+43h]

  if ( (unsigned int)dword_1C00B19E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00B19E8, 0x400000080000LL) )
    {
      v8 = a3;
      v9 = a2;
      v10 = 33556480LL;
      v11 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1C0081934,
        v6,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8);
      v7 = dword_1C00B19E8;
    }
    if ( v7 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00B19E8, 0x80000LL) )
      {
        v18 = 0;
        v15 = 0;
        v16 = &v9;
        v17 = 4;
        v13 = &v8;
        v14 = 4;
        v9 = a3;
        v8 = a2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C00B19E8,
          (unsigned __int8 *)dword_1C008198A,
          0LL,
          0LL,
          4u,
          &v12);
      }
    }
  }
}
