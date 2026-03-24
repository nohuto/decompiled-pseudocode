/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0075318
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00759BC (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C0099238 (CoreUICallSend.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01FEF7C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FF124 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01FF3A0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // [rsp+A0h] [rbp+28h] BYREF
  void *v10; // [rsp+A8h] [rbp+30h] BYREF
  PWSTR Buffer; // [rsp+B0h] [rbp+38h]
  const struct _GUID *v12; // [rsp+B8h] [rbp+40h]

  CoreMessagingK::RegistrarClient::s_Reply_Result = 24;
  v3 = 0;
  v10 = &CoreMessagingK::SendHost::s_Vtbl;
  v9 = 0LL;
  v5 = CoreUICallSend((unsigned int)&v10, (unsigned int)&v9, 1, 1, 13);
  if ( v5 < 0 )
  {
    v3 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v5, v6);
  }
  else if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
  {
    CoreMessagingK::Runtime::BugCheck(1029LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
  }
  if ( (unsigned int)dword_1C0249450 > 5 )
  {
    Buffer = a2->Buffer;
    LODWORD(v9) = v3;
    v12 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v7,
      &unk_1C0222457);
  }
  return v3;
}
