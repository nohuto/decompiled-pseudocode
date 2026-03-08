/*
 * XREFs of _lambda_0e6dcefab9b27dbf753c4a8a5b0f464a_::operator() @ 0x1C02BD568
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C02BD7E4 (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0041D64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall lambda_0e6dcefab9b27dbf753c4a8a5b0f464a_::operator()(unsigned int **a1)
{
  unsigned int *v1; // rax
  __int64 v3; // rcx
  const CHAR *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  int v8; // ecx
  unsigned int *v9; // rax
  __int64 v11[5]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  const CHAR *v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  if ( **a1 == 2303131 && (unsigned int)dword_1C013A8A8 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000100000LL);
    v4 = 0LL;
    if ( (_BYTE)v1 )
    {
      v5 = *((_QWORD *)DXGPROCESS::GetCurrent(v3) + 8);
      if ( v5 )
        v4 = *(const CHAR **)(v5 + 96);
      v7 = a1[1];
      v14 = v4;
      v15 = 33556480LL;
      v11[0] = 1LL;
      v8 = *(unsigned __int8 *)v7;
      v9 = *a1;
      v12 = v8;
      v13 = *v9;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                     v13,
                     byte_1C009DD73,
                     v6,
                     (__int64)v11,
                     (__int64)&v15,
                     (__int64)&v13,
                     (__int64)&v12,
                     &v14);
    }
  }
  return (char)v1;
}
