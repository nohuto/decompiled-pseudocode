/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C003D2E4
 * Callers:
 *     VidSchRestartAdapter @ 0x1C01086B0 (VidSchRestartAdapter.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void **a11)
{
  _BYTE *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned __int16 *v14; // rax
  int v15; // ecx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-91h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h]
  __int64 v19; // [rsp+58h] [rbp-69h]
  __int64 v20; // [rsp+60h] [rbp-61h]
  __int64 v21; // [rsp+68h] [rbp-59h]
  _DWORD *v22; // [rsp+70h] [rbp-51h]
  __int64 v23; // [rsp+78h] [rbp-49h]
  __int64 v24; // [rsp+80h] [rbp-41h]
  _DWORD v25[2]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v26; // [rsp+90h] [rbp-31h]
  __int64 v27; // [rsp+98h] [rbp-29h]
  __int64 v28; // [rsp+A0h] [rbp-21h]
  __int64 v29; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  __int64 v31; // [rsp+B8h] [rbp-9h]
  _BYTE *v32; // [rsp+C0h] [rbp-1h]
  int v33; // [rsp+C8h] [rbp+7h]
  int v34; // [rsp+CCh] [rbp+Bh]

  v11 = *a11;
  if ( *a11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_1C00627B9;
    v13 = 1;
  }
  v33 = v13;
  v30 = a10;
  v28 = a9;
  v26 = a8;
  v22 = v25;
  v32 = v11;
  v34 = 0;
  v31 = 8LL;
  v14 = *a7;
  v29 = 4LL;
  v27 = 8LL;
  v23 = 2LL;
  v15 = *v14;
  v24 = *((_QWORD *)v14 + 1);
  v20 = a6;
  v18 = a5;
  v25[0] = v15;
  v25[1] = 0;
  v21 = 8LL;
  v19 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0xAu, &v17);
}
