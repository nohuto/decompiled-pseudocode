/*
 * XREFs of LookUpTableFlushComplete @ 0x140859480
 * Callers:
 *     TlgAggregateFlush @ 0x140674D20 (TlgAggregateFlush.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140859410 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140861C00 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14087B3D0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     FlushLookUpTableBucket @ 0x1403CA80C (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x1406748E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     UpdateInternalStatsOnFlush @ 0x14087B550 (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  char v11; // [rsp+128h] [rbp-80h] BYREF
  char v12; // [rsp+129h] [rbp-7Fh] BYREF
  char v13; // [rsp+12Ah] [rbp-7Eh] BYREF
  char v14; // [rsp+12Bh] [rbp-7Dh] BYREF
  char v15; // [rsp+12Ch] [rbp-7Ch] BYREF
  char v16; // [rsp+12Dh] [rbp-7Bh] BYREF
  char v17; // [rsp+12Eh] [rbp-7Ah] BYREF
  char v18; // [rsp+12Fh] [rbp-79h] BYREF
  char v19; // [rsp+130h] [rbp-78h] BYREF
  _BYTE v20[3]; // [rsp+131h] [rbp-77h] BYREF
  int v21; // [rsp+134h] [rbp-74h] BYREF
  int v22; // [rsp+138h] [rbp-70h] BYREF
  int v23; // [rsp+13Ch] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+140h] [rbp-68h] BYREF
  __int64 v25; // [rsp+148h] [rbp-60h] BYREF
  __int64 v26; // [rsp+150h] [rbp-58h] BYREF
  __int64 v27; // [rsp+158h] [rbp-50h] BYREF
  __int64 v28; // [rsp+160h] [rbp-48h] BYREF
  __int64 v29; // [rsp+168h] [rbp-40h] BYREF
  __int64 v30; // [rsp+170h] [rbp-38h] BYREF
  __int64 v31; // [rsp+178h] [rbp-30h] BYREF
  __int128 *v32; // [rsp+180h] [rbp-28h] BYREF
  __int64 v33; // [rsp+188h] [rbp-20h] BYREF
  const wchar_t *v34; // [rsp+190h] [rbp-18h] BYREF
  __int16 v35; // [rsp+198h] [rbp-10h]
  const wchar_t *v36; // [rsp+1A0h] [rbp-8h] BYREF
  __int16 v37; // [rsp+1A8h] [rbp+0h]
  const wchar_t *v38; // [rsp+1B0h] [rbp+8h] BYREF
  __int16 v39; // [rsp+1B8h] [rbp+10h]
  const wchar_t *v40; // [rsp+1C0h] [rbp+18h] BYREF
  __int16 v41; // [rsp+1C8h] [rbp+20h]
  const wchar_t *v42; // [rsp+1D0h] [rbp+28h] BYREF
  __int16 v43; // [rsp+1D8h] [rbp+30h]
  const wchar_t *v44; // [rsp+1E0h] [rbp+38h] BYREF
  __int16 v45; // [rsp+1E8h] [rbp+40h]
  const wchar_t *v46; // [rsp+1F0h] [rbp+48h] BYREF
  __int16 v47; // [rsp+1F8h] [rbp+50h]
  const wchar_t *v48; // [rsp+200h] [rbp+58h] BYREF
  __int16 v49; // [rsp+208h] [rbp+60h]
  const wchar_t *v50; // [rsp+210h] [rbp+68h] BYREF
  __int16 v51; // [rsp+218h] [rbp+70h]
  __int64 v52; // [rsp+240h] [rbp+98h]
  __int128 v53; // [rsp+248h] [rbp+A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+C8h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( (unsigned int)dword_140C068F8 > 5 && tlgKeywordOn((__int64)&dword_140C068F8, 0x200000000000LL) )
      {
        v7 = *(_QWORD *)(a1 + 344);
        v49 = 32;
        v8 = *(_QWORD *)(v7 + 8);
        v34 = L"SummaryCount";
        v35 = 24;
        v9 = *(unsigned int *)(a1 + 324);
        v10 = *(_OWORD *)(v8 - 16);
        v22 = -1;
        v24 = v9;
        v36 = L"NumLargeEventFailures";
        v25 = *(unsigned int *)(a1 + 320);
        v38 = L"NumAllocationFailures";
        v26 = *(unsigned int *)(a1 + 316);
        v40 = L"NumBucketLimitReached";
        v27 = *(unsigned int *)(a1 + 312);
        v42 = L"MinEntriesFlushed";
        v28 = *(unsigned int *)(a1 + 308);
        v44 = L"MaxEntriesFlushed";
        v46 = L"TotalEntriesFlushed";
        v47 = 38;
        v30 = *(unsigned int *)(a1 + 304);
        v48 = L"MaxEntriesStored";
        v31 = *(_QWORD *)(a1 + 296);
        v50 = L"NumFlushes";
        v51 = 20;
        v32 = &v53;
        v37 = 42;
        v39 = 42;
        v41 = 42;
        v53 = v10;
        v11 = 4;
        v21 = 1;
        v12 = 4;
        v13 = 4;
        v14 = 4;
        v15 = 4;
        v43 = 34;
        v16 = 4;
        v45 = 34;
        v17 = 4;
        v29 = v6;
        v18 = 4;
        v19 = 4;
        v20[0] = 0;
        v23 = 300;
        v33 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          34LL,
          (unsigned __int8 *)byte_14003A530,
          v5,
          v6,
          (__int64)&v33,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)v20,
          (__int64 *)&v32,
          (__int64 *)&v50,
          (__int64)&v31,
          (__int64)&v19,
          (__int64 *)&v48,
          (__int64)&v30,
          (__int64)&v18,
          (__int64 *)&v46,
          (__int64)&v29,
          (__int64)&v17,
          (__int64 *)&v44,
          (__int64)&v28,
          (__int64)&v16,
          (__int64 *)&v42,
          (__int64)&v27,
          (__int64)&v15,
          (__int64 *)&v40,
          (__int64)&v26,
          (__int64)&v14,
          (__int64 *)&v38,
          (__int64)&v25,
          (__int64)&v13,
          (__int64 *)&v36,
          (__int64)&v24,
          (__int64)&v12,
          (__int64 *)&v34,
          (__int64)&v21,
          (__int64)&v11);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v52 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v52;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}
