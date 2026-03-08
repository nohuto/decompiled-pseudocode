/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1C00305D4
 * Callers:
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-61h] BYREF
  _DWORD *v15; // [rsp+50h] [rbp-41h]
  __int64 v16; // [rsp+58h] [rbp-39h]
  __int64 v17; // [rsp+60h] [rbp-31h]
  _DWORD v18[2]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE *v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+7Ch] [rbp-15h]
  __int64 v22; // [rsp+80h] [rbp-11h]
  __int64 v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  __int64 v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  __int64 v27; // [rsp+A8h] [rbp+17h]

  v26 = a9;
  v24 = a8;
  v22 = a7;
  v27 = 8LL;
  v25 = 8LL;
  v23 = 8LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = &unk_1C00627B9;
    v11 = 1;
  }
  v20 = v11;
  v15 = v18;
  v19 = v9;
  v21 = 0;
  v16 = 2LL;
  v12 = **a5;
  v17 = *((_QWORD *)*a5 + 1);
  v18[0] = v12;
  v18[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, a3, 0LL, 8u, &v14);
}
