/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01DAF00
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *this,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v6; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  __int64 v12; // rsi
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  struct DXGADAPTER *v20; // r8
  __int64 v21; // rdx
  struct _DXGK_DRIVERCAPS *v22; // rax
  __int64 v23; // r9
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int128 v34; // xmm1
  struct DXGADAPTER *v35; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  char v41; // [rsp+80h] [rbp-80h]
  _BYTE v42[144]; // [rsp+90h] [rbp-70h] BYREF

  v39 = -1;
  v6 = a5;
  v40 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 3005);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 3005);
  memset(a2, 0, 0x250uLL);
  v35 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35);
  PairingAdapters = DxgkpGetPairingAdapters(this, 0, v10, &v36, 0LL, 0LL, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, this, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddGetDriverCaps (ntStatus = 0x%I64x).",
      (__int64)this,
      v12,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( !v35 )
    {
      WdLogSingleEntry1(1LL, 3216LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef != NULL", 3216LL, 0LL, 0LL, 0LL, 0LL);
    }
    v37 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37);
    v14 = DxgkpGetPairingAdapters(this, 0, 0LL, 0LL, v13, &v38, 0);
    v19 = v14;
    if ( v14 < 0 )
    {
      v33 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      *(_QWORD *)(v33 + 24) = this;
      *(_QWORD *)(v33 + 32) = v19;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v35, v37);
    LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
    if ( (int)v12 >= 0 )
    {
      v20 = v35;
      v21 = 4LL;
      v22 = a5;
      v23 = 4LL;
      v24 = (_OWORD *)((char *)v35 + 2216);
      do
      {
        *(_OWORD *)&v22->HighestAcceptableAddress.LowPart = *v24;
        *(_OWORD *)&v22->ApertureSegmentCommitLimit = v24[1];
        *(_OWORD *)&v22->PointerCaps.0 = v24[2];
        *(_OWORD *)&v22->GammaRampCaps.0 = v24[3];
        *(_OWORD *)&v22->SchedulingCaps.0 = v24[4];
        *(_OWORD *)v22->GpuEngineTopology.Reserved = v24[5];
        *(_OWORD *)&v22->GpuEngineTopology.Reserved[4] = v24[6];
        v22 = (struct _DXGK_DRIVERCAPS *)((char *)v22 + 128);
        v25 = v24[7];
        v24 += 8;
        *(_OWORD *)&v22[-1].SupportSurpriseRemoval = v25;
        --v23;
      }
      while ( v23 );
      *(_OWORD *)&v22->HighestAcceptableAddress.LowPart = *v24;
      *(_OWORD *)&v22->ApertureSegmentCommitLimit = v24[1];
      *(_OWORD *)&v22->PointerCaps.0 = v24[2];
      *(_OWORD *)&v22->GammaRampCaps.0 = v24[3];
      *(_OWORD *)&v22->SchedulingCaps.0 = v24[4];
      if ( v37 )
      {
        v26 = (_OWORD *)((char *)v37 + 2216);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v26;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v26[1];
          *(_OWORD *)&a2->PointerCaps.0 = v26[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v26[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v26[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v26[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v26[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v27 = v26[7];
          v26 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v27;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v26;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v26[1];
        *(_OWORD *)&a2->PointerCaps.0 = v26[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v26[3];
        v28 = v26[4];
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v6->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v6->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v6->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v34 = *(_OWORD *)&v6->GpuEngineTopology.Reserved[8];
          v6 = (struct _DXGK_DRIVERCAPS *)((char *)v6 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v34;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
        v28 = *(_OWORD *)&v6->SchedulingCaps.0;
      }
      v29 = v36;
      LODWORD(v12) = 0;
      *(_OWORD *)&a2->SchedulingCaps.0 = v28;
      *a3 = v20;
      *a4 = v29;
      v35 = 0LL;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    DXGADAPTER_REFERENCE::Assign(&v37, 0LL);
  }
  DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 )
  {
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v39);
  }
  return (unsigned int)v12;
}
