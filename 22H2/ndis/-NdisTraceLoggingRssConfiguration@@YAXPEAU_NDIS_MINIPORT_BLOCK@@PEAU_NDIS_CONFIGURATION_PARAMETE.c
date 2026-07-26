/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0022304
 * Callers:
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00276CC (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0022F80 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x1C0023554 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // al
  int v6; // ecx
  int v7; // r8d
  int v8; // r10d
  __int64 v9; // r11
  int v10; // r9d
  int v11; // eax
  int v12; // [rsp+40h] [rbp-18h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00E4108 > 5 )
  {
    v5 = tlgKeywordOn(&dword_1C00E4108, 0x200000000000LL, a3, a4);
    v10 = 0;
    if ( v5 )
    {
      if ( v8 )
        v11 = 0;
      else
        v11 = *(_DWORD *)(v9 + 8);
      v14 = v11;
      p_InterfaceGuid = &a1->InterfaceGuid;
      LOBYTE(v10) = v8 == 0;
      v12 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C00D049F,
        v7,
        v10,
        (__int64)&p_InterfaceGuid,
        (__int64)&v12,
        (__int64)&v14);
    }
  }
}
