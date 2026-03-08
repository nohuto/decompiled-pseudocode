/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@@Z @ 0x1C020577C
 * Callers:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C0010D24 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const unsigned __int16 **a13,
        void **a14)
{
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  const unsigned __int16 *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  const unsigned __int16 *v24; // rdx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v27; // [rsp+50h] [rbp-A9h]
  __int64 v28; // [rsp+58h] [rbp-A1h]
  __int64 v29; // [rsp+60h] [rbp-99h]
  __int64 v30; // [rsp+68h] [rbp-91h]
  __int64 v31; // [rsp+70h] [rbp-89h]
  __int64 v32; // [rsp+78h] [rbp-81h]
  const unsigned __int16 *v33; // [rsp+80h] [rbp-79h]
  int v34; // [rsp+88h] [rbp-71h]
  int v35; // [rsp+8Ch] [rbp-6Dh]
  __int64 v36; // [rsp+90h] [rbp-69h]
  __int64 v37; // [rsp+98h] [rbp-61h]
  __int64 v38; // [rsp+A0h] [rbp-59h]
  __int64 v39; // [rsp+A8h] [rbp-51h]
  __int64 v40; // [rsp+B0h] [rbp-49h]
  __int64 v41; // [rsp+B8h] [rbp-41h]
  __int64 v42; // [rsp+C0h] [rbp-39h]
  __int64 v43; // [rsp+C8h] [rbp-31h]
  const unsigned __int16 *v44; // [rsp+D0h] [rbp-29h]
  int v45; // [rsp+D8h] [rbp-21h]
  int v46; // [rsp+DCh] [rbp-1Dh]
  _BYTE *v47; // [rsp+E0h] [rbp-19h]
  int v48; // [rsp+E8h] [rbp-11h]
  int v49; // [rsp+ECh] [rbp-Dh]

  v16 = -1LL;
  v17 = *a14;
  if ( *a14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_1C03206E9;
    v19 = 1;
  }
  v48 = v19;
  v20 = 2;
  v47 = v17;
  v49 = 0;
  v21 = *a13;
  if ( *a13 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &word_1C03142AC;
    v23 = 2;
  }
  v42 = a12;
  v40 = a11;
  v38 = a10;
  v36 = a9;
  v44 = v21;
  v45 = v23;
  v46 = 0;
  v24 = *a8;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 4LL;
  if ( v24 )
  {
    do
      ++v16;
    while ( v24[v16] );
    v20 = 2 * v16 + 2;
  }
  else
  {
    v24 = &word_1C03142AC;
  }
  v31 = a7;
  v29 = a6;
  v27 = a5;
  v33 = v24;
  v34 = v20;
  v35 = 0;
  v32 = 8LL;
  v30 = 4LL;
  v28 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xCu, &v26);
}
