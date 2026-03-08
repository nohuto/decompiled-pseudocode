/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00EE9F4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMSetDeviceInputMode @ 0x1C00BC07C (RIMSetDeviceInputMode.c)
 *     ?SuppressAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00DF330 (-SuppressAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00F486A (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0169070 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01C0BD4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C020D77C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C022C67C (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C022C6EC (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  _BYTE *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = &unk_1C02A2108;
    v9 = 1;
  }
  v15 = v9;
  v12 = a5;
  v14 = v7;
  v16 = 0;
  v13 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v11);
}
