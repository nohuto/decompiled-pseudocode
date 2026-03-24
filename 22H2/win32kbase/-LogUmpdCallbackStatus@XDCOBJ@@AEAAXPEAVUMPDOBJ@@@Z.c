/*
 * XREFs of ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C00C8640
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00C816C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 */

void __fastcall XDCOBJ::LogUmpdCallbackStatus(XDCOBJ *this, struct UMPDOBJ *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  const WCHAR *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  const WCHAR *v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  if ( dword_1C0249250 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
    {
      v5 = *(unsigned int *)(v4 + 428);
      v6 = *(unsigned __int16 *)(*(_QWORD *)v3 + 12LL);
      if ( *(_DWORD *)(*(_QWORD *)v3 + 2144LL) != (_DWORD)v5 )
      {
        *(_DWORD *)(*(_QWORD *)v3 + 2144LL) = v5;
        v7 = *(_QWORD *)(*(_QWORD *)v3 + 48LL);
        v8 = *(const WCHAR **)(v7 + 3560);
        if ( !v8 )
        {
          v8 = L"unknown";
          if ( (*(_DWORD *)(v7 + 40) & 0x8000) == 0 )
            v8 = L"display";
        }
        if ( (unsigned int)dword_1C0249250 > 5 && tlgKeywordOn((__int64)&dword_1C0249250, v2) )
        {
          v16 = v6;
          v12 = v5;
          v13 = v8;
          v14 = 0x2000000LL;
          v15 = 20;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v9,
            (int)&unk_1C02191CC,
            v10,
            v11,
            (__int64)&v15,
            (__int64)&v14,
            &v13,
            (__int64)&v12,
            (__int64)&v16);
        }
        if ( !gUmpdDumpCreated )
        {
          gUmpdDumpCreated = 1;
          DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 29LL, v8, v5, v6, v8, DumpDriverName, 0);
        }
      }
    }
  }
}
