/*
 * XREFs of ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C020B158
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C020B0A4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C020B300 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C020A5C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, unsigned int a2)
{
  __int64 v3; // rdi
  LONG *p_right; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  LONG v7; // [rsp+40h] [rbp+7h] BYREF
  LONG v8; // [rsp+44h] [rbp+Bh] BYREF
  int v9; // [rsp+48h] [rbp+Fh] BYREF
  int v10; // [rsp+4Ch] [rbp+13h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+17h] BYREF
  LONG *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v3 = a2;
  if ( InputTraceLogging::Enabled(0) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    {
      v14 = 0;
      v12 = &v7;
      v7 = v3;
      v13 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029B5E4,
        0LL,
        0LL,
        3u,
        &v11);
    }
    if ( (_DWORD)v3 )
    {
      p_right = &a1->right;
      do
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
        {
          v7 = p_right[1];
          v8 = *p_right;
          v9 = *(p_right - 1);
          v10 = *(p_right - 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C02CA7E0,
            byte_1C029B612,
            v5,
            v6,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&v7);
        }
        p_right += 4;
        --v3;
      }
      while ( v3 );
    }
  }
}
