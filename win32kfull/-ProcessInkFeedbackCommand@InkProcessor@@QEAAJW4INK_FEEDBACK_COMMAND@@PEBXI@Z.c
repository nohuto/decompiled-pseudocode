/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0241300
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C0200FC0 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x1C0245784 (-RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProv.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
  v3 = v2;
  if ( v2 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    if ( *(_BYTE *)(a1 + 8) )
    {
      v6 = InkFeedbackServer::RunForAllProviders(a1 + 96);
      v3 = v6;
      if ( v6 < 0 && (unsigned int)dword_1C03570E0 > 2 )
      {
        v13 = 0;
        LODWORD(v8) = v6;
        v12 = 4;
        v11 = &v8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03570E0,
          (unsigned __int8 *)dword_1C031DA06,
          0LL,
          0LL,
          3u,
          &v10);
      }
    }
    else
    {
      v3 = -1073741823;
      if ( (unsigned int)dword_1C03570E0 > 2 )
      {
        LODWORD(v8) = -1073741823;
        v9 = (__int64)"Ink processor not enabled";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (__int64)&dword_1C03570E0,
          byte_1C031EF8B,
          v4,
          v5,
          (__int64)&v8,
          (void **)&v9);
      }
    }
    if ( a1 )
    {
      ExReleasePushLockExclusiveEx(a1, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v13 = 0;
    LODWORD(v8) = v2;
    v12 = 4;
    v11 = &v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v10);
  }
  return v3;
}
