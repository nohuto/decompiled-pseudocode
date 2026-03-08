/*
 * XREFs of _lambda_d7f36fd7568915a231f5d0e0139551af_::operator() @ 0x1C03C5718
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44344@Z @ 0x1C006BB54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

unsigned int *__fastcall lambda_d7f36fd7568915a231f5d0e0139551af_::operator()(unsigned int **a1)
{
  __int64 v2; // r9
  unsigned int *v3; // rdx
  __int64 v4; // r8
  unsigned int *v5; // rax
  __int64 v6; // rcx
  unsigned int *result; // rax
  int v8; // [rsp+60h] [rbp+27h] BYREF
  __int64 v9; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v10[4]; // [rsp+70h] [rbp+37h] BYREF
  unsigned int v11; // [rsp+A0h] [rbp+67h] BYREF
  int v12; // [rsp+A8h] [rbp+6Fh] BYREF
  int v13; // [rsp+B0h] [rbp+77h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( !**a1 )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000008000LL) )
  {
    v3 = *a1;
    v11 = (*a1)[1];
    v4 = *(_QWORD *)a1[1];
    v12 = *(_DWORD *)(v4 + 88);
    v9 = *(_QWORD *)(v4 + 80);
    v5 = a1[2];
    v8 = 1;
    v10[0] = 16779264LL;
    v6 = *v5;
    v14 = *v3;
    v13 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1C00A1ADF,
      (const GUID *)(v4 + 16),
      v2,
      (__int64)v10,
      (__int64)&v8,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v9,
      (__int64)&v12,
      (__int64)&v11);
  }
  result = a1[2];
  if ( (*result & 0x80000000) != 0 )
  {
    DxgkLogCodePointPacket(0x7Cu, *result, **a1, (*a1)[1], *(_QWORD *)(*(_QWORD *)a1[1] + 80LL));
    return (unsigned int *)WdLogSingleEntry2(2LL, **a1, (int)*a1[2]);
  }
  return result;
}
