/*
 * XREFs of LookUpTableFlushComplete @ 0x1C0090038
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C008FC50 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0090430 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00904A0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00906E0 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x1C00010A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     FlushLookUpTableBucket @ 0x1C00446A8 (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall LookUpTableFlushComplete(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r10
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  char v14; // [rsp+128h] [rbp-80h] BYREF
  char v15; // [rsp+129h] [rbp-7Fh] BYREF
  char v16; // [rsp+12Ah] [rbp-7Eh] BYREF
  char v17; // [rsp+12Bh] [rbp-7Dh] BYREF
  char v18; // [rsp+12Ch] [rbp-7Ch] BYREF
  char v19; // [rsp+12Dh] [rbp-7Bh] BYREF
  char v20; // [rsp+12Eh] [rbp-7Ah] BYREF
  char v21; // [rsp+12Fh] [rbp-79h] BYREF
  char v22; // [rsp+130h] [rbp-78h] BYREF
  char v23[3]; // [rsp+131h] [rbp-77h] BYREF
  int v24; // [rsp+134h] [rbp-74h] BYREF
  int v25; // [rsp+138h] [rbp-70h] BYREF
  int v26; // [rsp+13Ch] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+140h] [rbp-68h] BYREF
  __int64 v28; // [rsp+148h] [rbp-60h] BYREF
  __int64 v29; // [rsp+150h] [rbp-58h] BYREF
  __int64 v30; // [rsp+158h] [rbp-50h] BYREF
  __int64 v31; // [rsp+160h] [rbp-48h] BYREF
  __int64 v32; // [rsp+168h] [rbp-40h] BYREF
  __int64 v33; // [rsp+170h] [rbp-38h] BYREF
  __int64 v34; // [rsp+178h] [rbp-30h] BYREF
  __int128 *v35; // [rsp+180h] [rbp-28h] BYREF
  __int64 v36; // [rsp+188h] [rbp-20h] BYREF
  const wchar_t *v37; // [rsp+190h] [rbp-18h] BYREF
  __int16 v38; // [rsp+198h] [rbp-10h]
  const wchar_t *v39; // [rsp+1A0h] [rbp-8h] BYREF
  __int16 v40; // [rsp+1A8h] [rbp+0h]
  const wchar_t *v41; // [rsp+1B0h] [rbp+8h] BYREF
  __int16 v42; // [rsp+1B8h] [rbp+10h]
  const wchar_t *v43; // [rsp+1C0h] [rbp+18h] BYREF
  __int16 v44; // [rsp+1C8h] [rbp+20h]
  const wchar_t *v45; // [rsp+1D0h] [rbp+28h] BYREF
  __int16 v46; // [rsp+1D8h] [rbp+30h]
  const wchar_t *v47; // [rsp+1E0h] [rbp+38h] BYREF
  __int16 v48; // [rsp+1E8h] [rbp+40h]
  const wchar_t *v49; // [rsp+1F0h] [rbp+48h] BYREF
  __int16 v50; // [rsp+1F8h] [rbp+50h]
  const wchar_t *v51; // [rsp+200h] [rbp+58h] BYREF
  __int16 v52; // [rsp+208h] [rbp+60h]
  const wchar_t *v53; // [rsp+210h] [rbp+68h] BYREF
  __int16 v54; // [rsp+218h] [rbp+70h]
  __int64 v55; // [rsp+240h] [rbp+98h]
  __int128 v56; // [rsp+248h] [rbp+A0h] BYREF

  result = *(unsigned int *)(a1 + 256);
  v2 = 0;
  if ( (_DWORD)result )
  {
    v4 = *(unsigned int *)(a1 + 312);
    if ( (unsigned int)v4 > (unsigned int)result || (v5 = *(_QWORD *)(a1 + 296)) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 296);
      v4 = (unsigned int)result;
      *(_DWORD *)(a1 + 312) = result;
    }
    v6 = *(unsigned int *)(a1 + 308);
    if ( (unsigned int)v6 < (unsigned int)result )
    {
      *(_DWORD *)(a1 + 308) = result;
      v6 = (unsigned int)result;
    }
    v7 = v5 + 1;
    *(_QWORD *)(a1 + 296) = v5 + 1;
    v8 = *(_QWORD *)(a1 + 288) + result == 0;
    v9 = *(_QWORD *)(a1 + 288) + result;
    *(_QWORD *)(a1 + 288) = v9;
    if ( !v8 )
    {
      if ( (unsigned int)dword_1C006D840 > 5
        && (qword_1C006D850 & 0x200000000000LL) != 0
        && (qword_1C006D858 & 0x200000000000LL) == qword_1C006D858 )
      {
        v10 = *(_QWORD *)(a1 + 344);
        v52 = 32;
        v11 = *(_QWORD *)(v10 + 8);
        v37 = L"SummaryCount";
        v38 = 24;
        v12 = *(unsigned int *)(a1 + 324);
        v13 = *(_OWORD *)(v11 - 16);
        v25 = -1;
        v27 = v12;
        v39 = L"NumLargeEventFailures";
        v28 = *(unsigned int *)(a1 + 320);
        v41 = L"NumAllocationFailures";
        v29 = *(unsigned int *)(a1 + 316);
        v43 = L"NumBucketLimitReached";
        v30 = (unsigned int)v4;
        v45 = L"MinEntriesFlushed";
        v31 = (unsigned int)v6;
        v47 = L"MaxEntriesFlushed";
        v49 = L"TotalEntriesFlushed";
        v50 = 38;
        v33 = *(unsigned int *)(a1 + 304);
        v51 = L"MaxEntriesStored";
        v53 = L"NumFlushes";
        v54 = 20;
        v35 = &v56;
        v40 = 42;
        v42 = 42;
        v44 = 42;
        v56 = v13;
        v14 = 4;
        v24 = 1;
        v15 = 4;
        v16 = 4;
        v17 = 4;
        v18 = 4;
        v46 = 34;
        v19 = 4;
        v48 = 34;
        v20 = 4;
        v32 = v9;
        v21 = 4;
        v22 = 4;
        v34 = v7;
        v23[0] = 0;
        v26 = 300;
        v36 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          34LL,
          byte_1C0065F25,
          v6,
          v4,
          (__int64)&v36,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)v23,
          (__int64 *)&v35,
          (__int64 *)&v53,
          (__int64)&v34,
          (__int64)&v22,
          (__int64 *)&v51,
          (__int64)&v33,
          (__int64)&v21,
          (__int64 *)&v49,
          (__int64)&v32,
          (__int64)&v20,
          (__int64 *)&v47,
          (__int64)&v31,
          (__int64)&v19,
          (__int64 *)&v45,
          (__int64)&v30,
          (__int64)&v18,
          (__int64 *)&v43,
          (__int64)&v29,
          (__int64)&v17,
          (__int64 *)&v41,
          (__int64)&v28,
          (__int64)&v16,
          (__int64 *)&v39,
          (__int64)&v27,
          (__int64)&v15,
          (__int64 *)&v37,
          (__int64)&v24,
          (__int64)&v14);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v55 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v55;
    }
    do
      result = FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}
