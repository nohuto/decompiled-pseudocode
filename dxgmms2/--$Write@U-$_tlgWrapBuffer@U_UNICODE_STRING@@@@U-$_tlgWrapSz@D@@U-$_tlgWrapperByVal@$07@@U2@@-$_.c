/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1C0030300
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00B534C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        void **a6,
        __int64 a7,
        void **a8)
{
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-29h]
  __int64 v19; // [rsp+58h] [rbp-21h]
  __int64 v20; // [rsp+60h] [rbp-19h]
  _DWORD v21[2]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  __int64 v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  _BYTE *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]

  v9 = -1LL;
  v10 = *a8;
  if ( *a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &unk_1C00627B9;
    v12 = 1;
  }
  v28 = v12;
  v25 = a7;
  v27 = v10;
  v29 = 0;
  v26 = 8LL;
  v13 = *a6;
  if ( *a6 )
  {
    do
      ++v9;
    while ( v13[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v13 = &unk_1C00627B9;
    v14 = 1;
  }
  v22 = v13;
  v18 = v21;
  v23 = v14;
  v24 = 0;
  v19 = 2LL;
  v15 = **a5;
  v20 = *((_QWORD *)*a5 + 1);
  v21[0] = v15;
  v21[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, a3, 0LL, 7u, &v17);
}
