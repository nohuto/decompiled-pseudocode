/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByRef@$0BA@@@555554@Z @ 0x1C0203C30
 * Callers:
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1C0204D6C (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void **a17)
{
  __int64 v18; // rdx
  _BYTE *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _BYTE *v23; // rcx
  int v24; // edx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  _BYTE *v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+6Ch] [rbp-94h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _BYTE *v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]

  v18 = -1LL;
  v19 = *a17;
  if ( *a17 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &unk_1C03206E9;
    v21 = 1;
  }
  v53 = v21;
  v50 = a16;
  v48 = a15;
  v46 = a14;
  v44 = a13;
  v42 = a12;
  v52 = v19;
  v54 = 0;
  v51 = 4LL;
  v22 = *a11;
  v38 = a10;
  v36 = a9;
  v34 = a8;
  v32 = a7;
  v40 = v22;
  v49 = 4LL;
  v47 = 4LL;
  v23 = *a6;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 16LL;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  v33 = 4LL;
  if ( v23 )
  {
    do
      ++v18;
    while ( v23[v18] );
    v24 = v18 + 1;
  }
  else
  {
    v23 = &unk_1C03206E9;
    v24 = 1;
  }
  v27 = a5;
  v29 = v23;
  v30 = v24;
  v31 = 0;
  v28 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0357098, a2, 0LL, 0LL, 0xFu, &v26);
}
