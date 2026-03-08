/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01E4A30
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00D6B18 (xxxWindowFromPoint.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const unsigned __int16 **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        const unsigned __int16 **a12,
        void **a13)
{
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // r8d
  const unsigned __int16 *v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  const unsigned __int16 *v23; // rdx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v26; // [rsp+50h] [rbp-91h]
  __int64 v27; // [rsp+58h] [rbp-89h]
  __int64 v28; // [rsp+60h] [rbp-81h]
  __int64 v29; // [rsp+68h] [rbp-79h]
  const unsigned __int16 *v30; // [rsp+70h] [rbp-71h]
  int v31; // [rsp+78h] [rbp-69h]
  int v32; // [rsp+7Ch] [rbp-65h]
  __int64 v33; // [rsp+80h] [rbp-61h]
  __int64 v34; // [rsp+88h] [rbp-59h]
  __int64 v35; // [rsp+90h] [rbp-51h]
  __int64 v36; // [rsp+98h] [rbp-49h]
  __int64 v37; // [rsp+A0h] [rbp-41h]
  __int64 v38; // [rsp+A8h] [rbp-39h]
  __int64 v39; // [rsp+B0h] [rbp-31h]
  __int64 v40; // [rsp+B8h] [rbp-29h]
  const unsigned __int16 *v41; // [rsp+C0h] [rbp-21h]
  int v42; // [rsp+C8h] [rbp-19h]
  int v43; // [rsp+CCh] [rbp-15h]
  _BYTE *v44; // [rsp+D0h] [rbp-11h]
  int v45; // [rsp+D8h] [rbp-9h]
  int v46; // [rsp+DCh] [rbp-5h]

  v15 = -1LL;
  v16 = *a13;
  if ( *a13 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1C03206E9;
    v18 = 1;
  }
  v45 = v18;
  v19 = 2;
  v44 = v16;
  v46 = 0;
  v20 = *a12;
  if ( *a12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &word_1C03142AC;
    v22 = 2;
  }
  v39 = a11;
  v37 = a10;
  v35 = a9;
  v33 = a8;
  v41 = v20;
  v42 = v22;
  v43 = 0;
  v23 = *a7;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  if ( v23 )
  {
    do
      ++v15;
    while ( v23[v15] );
    v19 = 2 * v15 + 2;
  }
  else
  {
    v23 = &word_1C03142AC;
  }
  v28 = a6;
  v26 = a5;
  v30 = v23;
  v31 = v19;
  v32 = 0;
  v29 = 4LL;
  v27 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xBu, &v25);
}
