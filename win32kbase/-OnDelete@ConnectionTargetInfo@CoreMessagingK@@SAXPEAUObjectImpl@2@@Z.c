/*
 * XREFs of ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00CA580
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00CA5B8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00F0068 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall CoreMessagingK::ConnectionTargetInfo::OnDelete(
        struct CoreMessagingK::ObjectImpl *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 *v5; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v5 = (__int64 *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v6 = *((_DWORD *)v5 + 3);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *v5;
    v9 = *((_QWORD *)a1 + 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02C9500,
      (unsigned int)&unk_1C029FCB0,
      a3,
      a4,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
  CoreMessagingK::ClientPortInfo::Release(*((CoreMessagingK::ClientPortInfo **)a1 + 2));
  *((_QWORD *)a1 + 2) = 0LL;
}
