/*
 * XREFs of CoreMsgSend @ 0x1C008141C
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0081280 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C00814C4 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0081820 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C01BFA24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  char v7; // dl
  unsigned int v8; // ebx
  char v10; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-4Fh] BYREF
  void *v12; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-40h] BYREF
  void **v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v10 = 0;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v11[0] = 0;
    v12 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (unsigned int)&dword_1C02C9500,
      (unsigned int)&unk_1C029F8CB,
      (_DWORD)a3,
      a4,
      (__int64)&v12,
      (__int64)v11);
  }
  CoreMessagingK::EntryLock::Acquire(&v10, 4LL);
  v8 = CoreMessagingK::ServerPorts::Send(a1, v7, a3, a4);
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v16 = 0;
    v14 = &v12;
    LODWORD(v12) = v8;
    v15 = 4;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C9500, (int)&dword_1C029F756, 0, 0, 3u, &v13);
  }
  if ( v10 )
    KeReleaseMutex(Mutex, 0);
  return v8;
}
