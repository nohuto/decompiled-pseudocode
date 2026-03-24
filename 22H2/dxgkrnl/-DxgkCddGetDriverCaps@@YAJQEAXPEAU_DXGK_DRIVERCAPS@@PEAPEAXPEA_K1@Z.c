/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C0169310
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v8; // rdi
  __int64 v10; // rdx
  struct DXGADAPTER **v11; // rax
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct DXGADAPTER **v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  struct DXGADAPTER *v22; // r8
  struct _DXGK_DRIVERCAPS *v23; // rcx
  __int64 v24; // r9
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm1
  struct DXGADAPTER *v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h]
  _BYTE v46[144]; // [rsp+80h] [rbp-80h] BYREF

  v43 = -1;
  v44 = 0LL;
  v8 = a5;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3005);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 3005LL);
  memset(a2, 0, sizeof(struct _DXGK_DRIVERCAPS));
  v39 = 0LL;
  v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v39, v10);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0LL, v11, &v40, 0LL, 0LL, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v35 + 24) = a1;
    *(_QWORD *)(v35 + 32) = v15;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    if ( !v39 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v36 + 24) = 3153LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v41 = 0LL;
    v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v41, v13);
    v17 = DxgkpGetPairingAdapters(a1, 0LL, 0LL, 0LL, v16, &v42, 0);
    v20 = v17;
    if ( v17 < 0 )
    {
      v37 = WdLogNewEntry5_WdTrace(v19, v18);
      *(_QWORD *)(v37 + 24) = a1;
      *(_QWORD *)(v37 + 32) = v20;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v39, v41);
    LODWORD(v15) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
    if ( (int)v15 >= 0 )
    {
      v22 = v39;
      v21 = 4LL;
      v23 = a5;
      v24 = 4LL;
      v25 = (_OWORD *)((char *)v39 + 1992);
      do
      {
        *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
        *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
        *(_OWORD *)&v23->PointerCaps.0 = v25[2];
        *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
        *(_OWORD *)&v23->SchedulingCaps.0 = v25[4];
        *(_OWORD *)v23->GpuEngineTopology.Reserved = v25[5];
        *(_OWORD *)&v23->GpuEngineTopology.Reserved[4] = v25[6];
        v23 = (struct _DXGK_DRIVERCAPS *)((char *)v23 + 128);
        v26 = v25[7];
        v25 += 8;
        *(_OWORD *)&v23[-1].SupportSurpriseRemoval = v26;
        --v24;
      }
      while ( v24 );
      *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
      *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
      *(_OWORD *)&v23->PointerCaps.0 = v25[2];
      *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
      *(_QWORD *)&v23->SchedulingCaps.0 = *((_QWORD *)v25 + 8);
      if ( v41 )
      {
        v27 = (_OWORD *)((char *)v41 + 1992);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
          *(_OWORD *)&a2->PointerCaps.0 = v27[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v27[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v27[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v27[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v28 = v27[7];
          v27 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v28;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
        *(_OWORD *)&a2->PointerCaps.0 = v27[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
        v29 = *((_QWORD *)v27 + 8);
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v8->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v8->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v8->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v38 = *(_OWORD *)&v8->GpuEngineTopology.Reserved[8];
          v8 = (struct _DXGK_DRIVERCAPS *)((char *)v8 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v38;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
        v29 = *(_QWORD *)&v8->SchedulingCaps.0;
      }
      v39 = 0LL;
      *(_QWORD *)&a2->SchedulingCaps.0 = v29;
      LODWORD(v15) = 0;
      v30 = v40;
      *a3 = v22;
      *a4 = v30;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46, v21);
    DXGADAPTER_REFERENCE::Assign(&v41, 0LL);
  }
  DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v31);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v43);
  return (unsigned int)v15;
}
