/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C0210078
 * Callers:
 *     ?AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00E0D8C (-AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00E0F84 (-RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02103A8 (-AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0210CA0 (-RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _BYTE *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-49h]
  int v17; // [rsp+58h] [rbp-41h]
  int v18; // [rsp+5Ch] [rbp-3Dh]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  __int64 v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]

  v27 = a10;
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v11 = *a5;
  v22 = 4LL;
  v20 = 8LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_1C02A2108;
    v13 = 1;
  }
  v17 = v13;
  v16 = v11;
  v18 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v15);
}
