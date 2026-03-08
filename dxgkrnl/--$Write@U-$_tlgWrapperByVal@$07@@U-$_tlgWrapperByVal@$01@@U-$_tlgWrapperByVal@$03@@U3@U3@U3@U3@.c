/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@555@Z @ 0x1C004523C
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A4B90 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void **a12,
        const CHAR **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // rcx
  const CHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  _WORD *v21; // rdx
  int v22; // eax
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  _WORD *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  const CHAR *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]

  v49 = a16;
  v17 = -1LL;
  v47 = a15;
  v45 = a14;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v18 = *a13;
  if ( *a13 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = File;
    v20 = 1;
  }
  v43 = v20;
  v42 = v18;
  v44 = 0;
  v21 = *a12;
  if ( *a12 )
  {
    do
      ++v17;
    while ( v21[v17] );
    v22 = 2 * v17 + 2;
  }
  else
  {
    v21 = &unk_1C0093660;
    v22 = 2;
  }
  v40 = v22;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v39 = v21;
  v41 = 0;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 2LL;
  v26 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, 0LL, 0LL, 0xEu, &v24);
}
