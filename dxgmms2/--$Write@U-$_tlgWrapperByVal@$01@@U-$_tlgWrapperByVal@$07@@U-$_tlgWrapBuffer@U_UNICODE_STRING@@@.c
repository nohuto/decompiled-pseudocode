/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C0033C14
 * Callers:
 *     VidSchiResetEngine @ 0x1C003B96C (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x1C00460A0 (VidSchiResetHwEngine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a11,
        __int64 a12,
        __int64 a13)
{
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned __int16 *v16; // rax
  int v17; // ecx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A1h]
  __int64 v21; // [rsp+58h] [rbp-99h]
  __int64 v22; // [rsp+60h] [rbp-91h]
  __int64 v23; // [rsp+68h] [rbp-89h]
  _DWORD *v24; // [rsp+70h] [rbp-81h]
  __int64 v25; // [rsp+78h] [rbp-79h]
  __int64 v26; // [rsp+80h] [rbp-71h]
  _DWORD v27[2]; // [rsp+88h] [rbp-69h] BYREF
  __int64 v28; // [rsp+90h] [rbp-61h]
  __int64 v29; // [rsp+98h] [rbp-59h]
  __int64 v30; // [rsp+A0h] [rbp-51h]
  __int64 v31; // [rsp+A8h] [rbp-49h]
  __int64 v32; // [rsp+B0h] [rbp-41h]
  __int64 v33; // [rsp+B8h] [rbp-39h]
  _BYTE *v34; // [rsp+C0h] [rbp-31h]
  int v35; // [rsp+C8h] [rbp-29h]
  int v36; // [rsp+CCh] [rbp-25h]
  __int64 v37; // [rsp+D0h] [rbp-21h]
  __int64 v38; // [rsp+D8h] [rbp-19h]
  __int64 v39; // [rsp+E0h] [rbp-11h]
  __int64 v40; // [rsp+E8h] [rbp-9h]

  v39 = a13;
  v37 = a12;
  v40 = 4LL;
  v38 = 4LL;
  v13 = *a11;
  if ( *a11 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1C00627B9;
    v15 = 1;
  }
  v35 = v15;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v24 = v27;
  v34 = v13;
  v36 = 0;
  v33 = 8LL;
  v16 = *a7;
  v31 = 4LL;
  v29 = 8LL;
  v25 = 2LL;
  v17 = *v16;
  v26 = *((_QWORD *)v16 + 1);
  v22 = a6;
  v20 = a5;
  v27[0] = v17;
  v27[1] = 0;
  v23 = 8LL;
  v21 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0xCu, &v19);
}
