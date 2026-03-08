/*
 * XREFs of TraceLoggingWriteMiracastSessionStop @ 0x1C0066B34
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U3@U3@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444444AEBU?$_tlgWrapSz@G@@55554455544444444444444444444@Z @ 0x1C00663C8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U-$__ea_1C00663C8.c)
 */

void TraceLoggingWriteMiracastSessionStop()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // r11d
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+150h] [rbp-80h] BYREF
  int v8; // [rsp+154h] [rbp-7Ch] BYREF
  int v9; // [rsp+158h] [rbp-78h] BYREF
  int v10; // [rsp+15Ch] [rbp-74h] BYREF
  int v11; // [rsp+160h] [rbp-70h] BYREF
  int v12; // [rsp+164h] [rbp-6Ch] BYREF
  int v13; // [rsp+168h] [rbp-68h] BYREF
  int v14; // [rsp+16Ch] [rbp-64h] BYREF
  int v15; // [rsp+170h] [rbp-60h] BYREF
  int v16; // [rsp+174h] [rbp-5Ch] BYREF
  int v17; // [rsp+178h] [rbp-58h] BYREF
  int v18; // [rsp+17Ch] [rbp-54h] BYREF
  int v19; // [rsp+180h] [rbp-50h] BYREF
  int v20; // [rsp+184h] [rbp-4Ch] BYREF
  unsigned int v21; // [rsp+188h] [rbp-48h] BYREF
  int v22; // [rsp+18Ch] [rbp-44h] BYREF
  int v23; // [rsp+190h] [rbp-40h] BYREF
  int v24; // [rsp+194h] [rbp-3Ch] BYREF
  int v25; // [rsp+198h] [rbp-38h] BYREF
  int v26; // [rsp+19Ch] [rbp-34h] BYREF
  int v27; // [rsp+1A0h] [rbp-30h] BYREF
  int v28; // [rsp+1A4h] [rbp-2Ch] BYREF
  int v29; // [rsp+1A8h] [rbp-28h] BYREF
  int v30; // [rsp+1ACh] [rbp-24h] BYREF
  int v31; // [rsp+1B0h] [rbp-20h] BYREF
  int v32; // [rsp+1B4h] [rbp-1Ch] BYREF
  int v33; // [rsp+1B8h] [rbp-18h] BYREF
  int v34; // [rsp+1BCh] [rbp-14h] BYREF
  void *v35; // [rsp+1C0h] [rbp-10h] BYREF
  void *v36; // [rsp+1C8h] [rbp-8h] BYREF
  void *v37; // [rsp+1D0h] [rbp+0h] BYREF
  void *v38; // [rsp+1D8h] [rbp+8h] BYREF
  void *v39; // [rsp+1E0h] [rbp+10h] BYREF
  void *v40; // [rsp+1E8h] [rbp+18h] BYREF
  void *v41; // [rsp+1F0h] [rbp+20h] BYREF
  void *v42; // [rsp+1F8h] [rbp+28h] BYREF
  __int64 v43; // [rsp+200h] [rbp+30h] BYREF
  int v44; // [rsp+238h] [rbp+68h] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x800000000002LL) )
    {
      v7 = *(_DWORD *)(v0 + 676);
      v8 = dword_1C013B8D8 - *(_DWORD *)(v0 + 672);
      v9 = *(_DWORD *)(v0 + 668);
      v10 = *(_DWORD *)(v0 + 696);
      v3 = (unsigned __int16)*(_DWORD *)(v0 + 688);
      v12 = *(_DWORD *)(v0 + 684);
      v4 = *(_DWORD *)(v0 + 692);
      v13 = *(_DWORD *)(v0 + 680);
      v15 = *(_DWORD *)(v0 + 660);
      v16 = *(_DWORD *)(v0 + 656);
      v17 = *(_DWORD *)(v0 + 664);
      v44 = v1;
      v5 = (*(_DWORD *)(v0 + 600) >> 2) & 1;
      v21 = *(_DWORD *)(v0 + 600);
      v18 = v5;
      v11 = v3 + (v4 << 16);
      v19 = (v21 >> 1) & 1;
      v14 = v2;
      v20 = v21 & 1;
      v22 = *(_QWORD *)(v0 + 624) >> 16;
      v23 = *(_QWORD *)(v0 + 616) >> 16;
      v24 = *(_QWORD *)(v0 + 608) >> 16;
      v25 = *(_DWORD *)(v0 + 776);
      v35 = (void *)(v0 + 708);
      v36 = *(void **)(v0 + 384);
      v37 = *(void **)(v0 + 376);
      v26 = *(_DWORD *)(v0 + 196);
      v27 = *(_DWORD *)(v0 + 192);
      v39 = *(void **)(v0 + 360);
      v40 = *(void **)(v0 + 344);
      v41 = *(void **)(v0 + 336);
      v28 = *(_DWORD *)(v0 + 780);
      v29 = *(_DWORD *)(v0 + 700);
      v30 = *(_DWORD *)(v0 + 784);
      v31 = *(_DWORD *)(v0 + 416);
      v32 = *(_DWORD *)(v0 + 704);
      v6 = *(_DWORD *)(v0 + 652);
      v38 = &unk_1C0093660;
      v42 = &unk_1C0093660;
      v33 = v6;
      v34 = *(_DWORD *)(v0 + 788);
      v43 = v0 + 112;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&unk_1C0093660,
        byte_1C00A0650,
        (const GUID *)(v0 + 112),
        v0,
        &v43,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        &v42,
        &v41,
        &v40,
        &v39,
        &v38,
        (__int64)&v27,
        (__int64)&v26,
        &v37,
        &v36,
        &v35,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v44);
    }
  }
}
