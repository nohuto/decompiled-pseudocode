/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00CE7F4
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C00CE73C (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C00AE1E8 (CoreUICallSend.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0273AD8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0273FB0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterObject(const unsigned __int16 *a1)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+48h] [rbp-9h]
  __int128 v8; // [rsp+58h] [rbp+7h]
  __int128 v9; // [rsp+78h] [rbp+27h] BYREF
  __int64 v10; // [rsp+88h] [rbp+37h]
  __int64 v11; // [rsp+C0h] [rbp+6Fh] BYREF
  void *v12; // [rsp+C8h] [rbp+77h] BYREF
  const unsigned __int16 *v13; // [rsp+D0h] [rbp+7Fh]

  CoreMessagingK::RegistrarClient::s_Reply_Result = 27;
  v12 = &CoreMessagingK::SendHost::s_Vtbl;
  v11 = 0LL;
  v10 = 0LL;
  v7 = 1;
  v8 = 0LL;
  LODWORD(v8) = 1;
  v9 = v8;
  v2 = CoreUICallSend((int)&v12, (int)&v11, 1, 1, 13, (__int64)&unk_1C028722B, a1, &v9, v7);
  if ( v2 < 0 )
    v5 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v2, v3);
  else
    v5 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    LODWORD(v11) = v5;
    v13 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v4,
      &unk_1C029FA67);
  }
  return v5;
}
