/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@G@@33333333@Z @ 0x1C004BE0C
 * Callers:
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z @ 0x1C02FEE80 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  _WORD *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  _WORD *v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]

  v45 = a16;
  v43 = a15;
  v41 = a14;
  v39 = a13;
  v37 = a12;
  v35 = a11;
  v33 = a10;
  v31 = a9;
  v46 = 8LL;
  v44 = 8LL;
  v42 = 8LL;
  v17 = *a8;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 8LL;
  v34 = 8LL;
  v32 = 8LL;
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &unk_1C0093660;
    v19 = 2;
  }
  v26 = a7;
  v24 = a6;
  v22 = a5;
  v28 = v17;
  v29 = v19;
  v30 = 0;
  v27 = 8LL;
  v25 = 8LL;
  v23 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, 0LL, 0LL, 0xEu, &v21);
}
