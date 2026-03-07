__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  __m128i *v6; // rax
  __m128i v7; // xmm1
  void *v8; // xmm0_8
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // sf
  PVOID v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  _BYTE v29[16]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h]
  char v33; // [rsp+80h] [rbp-38h]
  __m128i v34; // [rsp+88h] [rbp-30h]
  __int64 v35; // [rsp+98h] [rbp-20h]
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2088);
  if ( !DXGPROCESS::GetCurrent(v4) )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  v6 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (__m128i *)MmUserProbeAddress;
  v7 = *v6;
  v30 = v7;
  v34 = v7;
  v35 = 0LL;
  v8 = (void *)_mm_srli_si128(v7, 8).m128i_u64[0];
  if ( v8 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(v8, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v5 = v9;
    if ( v9 == -1073741788 )
    {
      WdLogSingleEntry2(3LL, v8, -1073741788LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v31);
      }
      return 3221225508LL;
    }
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, v8, v9);
      goto LABEL_17;
    }
    v16 = Object;
    v17 = *((_QWORD *)Object + 2);
    if ( !v17 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, Object, -1073741811LL);
    }
    v18 = *(_QWORD *)(v17 + 96);
    if ( v18 )
      goto LABEL_28;
    v19 = *(_QWORD *)(v17 + 80);
    if ( v19 )
      v18 = *(_QWORD *)(v19 + 16);
    if ( v18 )
LABEL_28:
      v35 = *(_QWORD *)(v18 + 404);
    ObfDereferenceObject(v16);
    if ( v5 < 0 )
    {
LABEL_17:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_19;
      }
      return (unsigned int)v5;
    }
  }
  else
  {
    v20 = _mm_cvtsi128_si32(v7);
    if ( !v20 )
    {
      v5 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_19:
        if ( v15 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v31);
      }
      return (unsigned int)v5;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v20, 2);
    v23 = ObjectA;
    if ( !ObjectA )
    {
      v24 = v20;
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v24, -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
      goto LABEL_17;
    }
    v25 = *(_QWORD *)(ObjectA + 96);
    if ( v25 )
      goto LABEL_38;
    v26 = *(_QWORD *)(v23 + 80);
    if ( v26 )
      v25 = *(_QWORD *)(v26 + 16);
    if ( v25 )
LABEL_38:
      v35 = *(_QWORD *)(v25 + 404);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  }
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v30;
  *(_QWORD *)(a1 + 16) = v35;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v31);
  return 0LL;
}
