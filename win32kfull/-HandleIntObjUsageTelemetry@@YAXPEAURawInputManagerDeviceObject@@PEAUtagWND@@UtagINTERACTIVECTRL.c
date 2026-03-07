__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm6
  __m128i v13; // xmm7
  unsigned __int64 v14; // r12
  struct tagPROCESSINFO *v15; // rdx
  struct tagPROCESSINFO *v16; // rdx
  __int64 v17; // rax
  struct _GUID v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  struct _GUID v22; // xmm0
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  struct tagINTOBJTELEMETRYSTATE *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int16 v35; // bx
  __int16 v36; // di
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // xmm1_8
  int v42; // eax
  struct _GUID v45; // [rsp+48h] [rbp-A1h] BYREF
  struct _GUID v46; // [rsp+58h] [rbp-91h] BYREF
  __int64 v47; // [rsp+68h] [rbp-81h]
  int v48; // [rsp+70h] [rbp-79h]
  _BYTE Buf2[96]; // [rsp+78h] [rbp-71h] BYREF

  v5 = a4;
  *(_QWORD *)&v45.Data1 = a1;
  v8 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq;
  v10 = SGDGetUserSessionState(v9);
  v11 = gptiForeground;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v8 - *(_QWORD *)(v10 + 17256);
  if ( gptiForeground )
  {
    v15 = *(struct tagPROCESSINFO **)(gptiForeground + 424LL);
    if ( v15 )
      v12 = *(__m128i *)ProcessGetAppSessionGuid(&v46, v15);
  }
  if ( a2 )
  {
    v16 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 424LL);
    if ( v16 )
      v13 = *(__m128i *)ProcessGetAppSessionGuid(&v46, v16);
  }
  if ( v14 > 0xEA60 )
    goto LABEL_14;
  v17 = SGDGetUserSessionState(v11);
  v18 = *(struct _GUID *)(v17 + 17308);
  v19 = *(_QWORD *)(v17 + 17308);
  v46 = v18;
  v20 = v12.m128i_i64[0] - v19;
  if ( v12.m128i_i64[0] == v19 )
    v20 = _mm_srli_si128(v12, 8).m128i_u64[0] - *(_QWORD *)v46.Data4;
  if ( v20 )
    goto LABEL_14;
  v21 = SGDGetUserSessionState(0LL);
  v22 = *(struct _GUID *)(v21 + 17324);
  v23 = *(_QWORD *)(v21 + 17324);
  v46 = v22;
  v24 = v13.m128i_i64[0] - v23;
  if ( v13.m128i_i64[0] == v23 )
    v24 = _mm_srli_si128(v13, 8).m128i_u64[0] - *(_QWORD *)v46.Data4;
  if ( v24 )
  {
LABEL_14:
    memset_0(Buf2, 0, sizeof(Buf2));
    v26 = SGDGetUserSessionState(v25);
    v27 = (struct tagINTOBJTELEMETRYSTATE *)(v26 + 17160);
    if ( memcmp((const void *)(v26 + 17160), Buf2, 0x60uLL) )
    {
      v29 = *(_QWORD *)(SGDGetUserSessionState(v28) + 17272);
      if ( v29 < *(_QWORD *)(SGDGetUserSessionState(v30) + 17264) )
      {
        v32 = *(_DWORD *)(v26 + 17300);
        v33 = SGDGetUserSessionState(v31);
        v31 = (v32 & 2) != 0 ? 0x30 : 0;
        *(_QWORD *)((char *)v27 + v31 + 40) += v8 - *(_QWORD *)(v33 + 17264);
      }
      v46 = *(struct _GUID *)(SGDGetUserSessionState(v31) + 17324);
      v34 = *(_QWORD *)(*(_QWORD *)&v45.Data1 + 528LL);
      v35 = *(_WORD *)(v34 + 112);
      v36 = *(_WORD *)(v34 + 110);
      v45 = *(struct _GUID *)(SGDGetUserSessionState(v37) + 17308);
      TraceLoggingIntObjUsageSummaryEvent(v27, v36, v35, &v45, &v46, v14);
      memset_0(v27, 0, 0x60uLL);
      v5 = a4;
    }
    *(_QWORD *)(SGDGetUserSessionState(v28) + 17264) = v8;
    *(_QWORD *)(SGDGetUserSessionState(v38) + 17256) = v8;
    *(__m128i *)(SGDGetUserSessionState(v39) + 17308) = v12;
    *(__m128i *)(SGDGetUserSessionState(v40) + 17324) = v13;
  }
  v41 = *(_QWORD *)(a3 + 16);
  v42 = *(_DWORD *)(a3 + 24);
  v46 = *(struct _GUID *)a3;
  v47 = v41;
  v48 = v42;
  return UpdateIntObjUsage(a2, &v46, v5, a5, v8);
}
