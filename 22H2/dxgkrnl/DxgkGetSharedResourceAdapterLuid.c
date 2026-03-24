/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C022AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0008744 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C4D0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __m128i *v10; // rax
  __m128i v11; // xmm1
  void *v12; // xmm0_8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  PVOID v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  _BYTE v48[16]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v49; // [rsp+40h] [rbp-58h]
  int v50; // [rsp+50h] [rbp-48h] BYREF
  __int64 v51; // [rsp+58h] [rbp-40h]
  char v52; // [rsp+60h] [rbp-38h]
  __m128i v53; // [rsp+68h] [rbp-30h]
  __int64 v54; // [rsp+78h] [rbp-20h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2088LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
    goto LABEL_45;
  v9 = MmUserProbeAddress;
  v10 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (__m128i *)MmUserProbeAddress;
  v11 = *v10;
  v49 = v11;
  v53 = v11;
  v54 = 0LL;
  v12 = (void *)_mm_srli_si128(v11, 8).m128i_u64[0];
  if ( !v12 )
  {
    v32 = _mm_cvtsi128_si32(v11);
    if ( v32 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v48, v8);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      Global = DXGGLOBAL::GetGlobal(v34, v33);
      ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v32, 2);
      v39 = ObjectA;
      if ( ObjectA )
      {
        v42 = *(_QWORD *)(ObjectA + 96);
        if ( v42 )
          goto LABEL_36;
        v43 = *(_QWORD *)(v39 + 80);
        if ( v43 )
          v42 = *(_QWORD *)(v43 + 16);
        if ( v42 )
LABEL_36:
          v54 = *(_QWORD *)(v42 + 316);
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v48, v37);
        goto LABEL_38;
      }
      v40 = WdLogNewEntry5_WdWarning(0LL, v37, v38);
      *(_QWORD *)(v40 + 24) = v32;
      LODWORD(v17) = -1073741811;
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v40);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v48, v41);
LABEL_16:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v24);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v50);
      return (unsigned int)v17;
    }
LABEL_45:
    v47 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    goto LABEL_16;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(v12, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v17 = v13;
  if ( v13 == -1073741788 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v19);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v50);
    }
    return 3221225508LL;
  }
  if ( v13 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v23 + 24) = v12;
    *(_QWORD *)(v23 + 32) = v17;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_16;
  }
  v27 = Object;
  v28 = *((_QWORD *)Object + 2);
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v29 + 24) = v27;
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
  }
  v30 = *(_QWORD *)(v28 + 96);
  if ( v30 )
    goto LABEL_26;
  v31 = *(_QWORD *)(v28 + 80);
  if ( v31 )
    v30 = *(_QWORD *)(v31 + 16);
  if ( v30 )
LABEL_26:
    v54 = *(_QWORD *)(v30 + 316);
  ObfDereferenceObject(v27);
  if ( (int)v17 < 0 )
    goto LABEL_16;
LABEL_38:
  v44 = a1 + 24;
  if ( a1 + 24 > MmUserProbeAddress || v44 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v49;
  *(_QWORD *)(a1 + 16) = v54;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v44);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v50);
  return 0LL;
}
