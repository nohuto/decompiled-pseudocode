/*
 * XREFs of ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C01A2DA8
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01A2D04 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C01A2EE8 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C004387C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C01A27E0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  LONG *p_right; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  LONG v9; // [rsp+40h] [rbp+7h] BYREF
  LONG v10; // [rsp+44h] [rbp+Bh] BYREF
  int v11; // [rsp+48h] [rbp+Fh] BYREF
  int v12; // [rsp+4Ch] [rbp+13h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp+17h] BYREF
  LONG *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  v5 = (unsigned int)a2;
  if ( InputTraceLogging::Enabled(0, a2, a3, a4) )
  {
    if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 64LL) )
    {
      v16 = 0;
      v14 = &v9;
      v9 = v5;
      v15 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C024BA90,
        (unsigned __int8 *)dword_1C021F2DF,
        0LL,
        0LL,
        3u,
        &v13);
    }
    if ( (_DWORD)v5 )
    {
      p_right = &a1->right;
      do
      {
        if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 64LL) )
        {
          v9 = p_right[1];
          v10 = *p_right;
          v11 = *(p_right - 1);
          v12 = *(p_right - 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C024BA90,
            byte_1C021F296,
            v7,
            v8,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v9);
        }
        p_right += 4;
        --v5;
      }
      while ( v5 );
    }
  }
}
