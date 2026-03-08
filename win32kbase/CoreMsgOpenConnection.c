/*
 * XREFs of CoreMsgOpenConnection @ 0x1C0082FE8
 * Callers:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0082ECC (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     UserCoreMsgOpenConnectionHandle @ 0x1C021CBE0 (UserCoreMsgOpenConnectionHandle.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0081820 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0083098 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C008B288 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C0273954 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, int *a2, void **a3, int a4)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int *v14; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-10h] BYREF
  char v16; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+38h] BYREF

  v16 = 0;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v13 = a1;
    v14 = a2 + 6;
    v15[0] = *((_QWORD *)a2 + 1);
    v17 = a2[1];
    v12 = *a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      a1,
      (unsigned int)&unk_1C029F812,
      (_DWORD)a3,
      a4,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v17,
      (__int64)v15,
      (__int64)&v14);
  }
  CoreMessagingK::EntryLock::Acquire(&v16, 3u);
  if ( CoreMessagingK::RegistrarClient::s_Port )
  {
    v9 = CoreMessagingK::ServerPorts::OpenConnection(a1, (const struct tagMsgRoutingInfo *)a2, a3);
    v10 = v9;
    if ( !v9 )
    {
      if ( !*a3 )
        v9 = -1073741584;
      v10 = v9;
    }
  }
  else
  {
    v10 = -1073741584;
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v15[0] = *a3;
    v17 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C02C9500,
      (unsigned int)&unk_1C029F887,
      v7,
      v8,
      (__int64)&v17,
      (__int64)v15);
  }
  if ( v16 )
    KeReleaseMutex(Mutex, 0);
  return v10;
}
