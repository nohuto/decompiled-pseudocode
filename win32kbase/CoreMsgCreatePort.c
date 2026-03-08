/*
 * XREFs of CoreMsgCreatePort @ 0x1C00C01E8
 * Callers:
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00C010C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0081820 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00C03A8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C00C09E4 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01C7854 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall CoreMsgCreatePort(__int64 a1, void *a2, __int64 a3, void **a4)
{
  char v6; // cl
  const unsigned __int16 *v7; // r8
  int Port; // ebx
  _BYTE v10[4]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]

  v10[0] = 0;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v11[0] = 0;
    *(_QWORD *)&v11[1] = L"Kernel\\MIT\\InputPort";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C02C9500,
      (int)&dword_1C029F975,
      (__int64)v11,
      (__int64)&v11[1]);
  }
  *a4 = 0LL;
  CoreMessagingK::EntryLock::Acquire(v10, 2u);
  if ( CoreMessagingK::RegistrarClient::s_Port || (Port = CoreMessagingK::RegistrarClient::Connect(), Port >= 0) )
  {
    Port = CoreMessagingK::ServerPorts::CreatePort(v6, a2, v7, a4);
    if ( Port >= 0 )
      Port = 0;
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v11[0] = Port;
    v13 = v11;
    v14 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9500, (unsigned __int8 *)dword_1C029F7E4, 0LL, 0LL, 3u, &v12);
  }
  if ( v10[0] )
    KeReleaseMutex(Mutex, 0);
  return (unsigned int)Port;
}
