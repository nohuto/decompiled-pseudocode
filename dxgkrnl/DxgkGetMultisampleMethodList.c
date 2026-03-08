/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C02FC880
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C03A8C04 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGADAPTER *Current; // r12
  __int64 CurrentProcess; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  struct _D3DDDI_MULTISAMPLINGMETHOD *v14; // r15
  ULONG64 v15; // rax
  unsigned __int64 v16; // rax
  struct DXGADAPTER *v17; // rbx
  int PairingAdapters; // eax
  struct DXGADAPTER *v19; // rdi
  int v20; // eax
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v22; // r11
  unsigned int v23; // ecx
  _BYTE **v24; // r8
  _QWORD *v25; // rdx
  int v27; // [rsp+50h] [rbp-158h]
  unsigned int v28[4]; // [rsp+58h] [rbp-150h]
  enum _D3DDDIFORMAT v29[4]; // [rsp+68h] [rbp-140h]
  unsigned __int64 v30; // [rsp+78h] [rbp-130h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v31; // [rsp+80h] [rbp-128h]
  unsigned __int64 v32; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v33; // [rsp+90h] [rbp-118h]
  int v34; // [rsp+98h] [rbp-110h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-108h]
  char v36; // [rsp+A8h] [rbp-100h]
  struct DXGADAPTER *v37; // [rsp+B0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v38[2]; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned __int64 v39; // [rsp+C8h] [rbp-E0h] BYREF
  DXGADAPTER *v40; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v41[144]; // [rsp+E0h] [rbp-C8h] BYREF

  v32 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2019);
  Current = DXGPROCESS::GetCurrent(v4);
  v38[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v10,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return (unsigned int)v8;
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_48;
  }
  v8 = 0;
  v14 = 0LL;
  v31 = 0LL;
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)v28 = *(_OWORD *)v15;
  *(_OWORD *)v29 = *(_OWORD *)(v15 + 16);
  v30 = *(_QWORD *)(v15 + 32);
  if ( _mm_srli_si128(*(__m128i *)v29, 8).m128i_u64[0] && (_DWORD)v30 )
  {
    v16 = 8LL * (unsigned int)v30;
    if ( !is_mul_ok((unsigned int)v30, 8uLL) )
      v16 = -1LL;
    v14 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v16, 0x4B677844u, 256LL);
    v31 = v14;
    if ( !v14 )
    {
      v8 = -1073741801;
      WdLogSingleEntry4(6LL, -1073741801LL, v28[0], v28[1], (unsigned int)v30);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x 0x%I64x 0x%I64x fails to allocate array of 0x%I64d D3DDDI_MULTISAMPLINGMETHOD",
        -1073741801LL,
        v28[0],
        v28[1],
        (unsigned int)v30,
        0LL);
    }
  }
  if ( v8 >= 0 )
  {
    v37 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v40, v28[0], (struct _KTHREAD **)Current, &v37, 1);
    v32 = 0LL;
    v17 = v37;
    if ( v37 )
    {
      v38[0] = 0LL;
      v39 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v37, v28[1], 0LL, 0LL, v38, &v39, 0);
      v8 = PairingAdapters;
      v27 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v19 = v38[0];
        if ( !v38[0] )
        {
          WdLogSingleEntry1(1LL, 6194LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 6194LL, 0LL, 0LL, 0LL, 0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v19, 0LL);
        DXGADAPTER::ReleaseReference(v19);
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
        v8 = v20;
        v27 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry4(7LL, v20, Current, v28[0], v19);
        }
        else
        {
          if ( *(_DWORD *)(*((_QWORD *)v19 + 365) + 96LL) > v28[1] )
          {
            if ( *((_QWORD *)v19 + 366) )
            {
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v19,
                                                              v28[1],
                                                              v28[2],
                                                              v28[3],
                                                              v29[0],
                                                              (unsigned int)v30,
                                                              v14,
                                                              &v32);
              v8 = MultisamplingMethodSetFromClientVidPnSource;
              v27 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                WdLogSingleEntry4(3LL, (unsigned int)v30, v28[1], v19, MultisamplingMethodSetFromClientVidPnSource);
                WdLogSingleEntry5(3LL, v28[1], v19, v28[2], v28[3], v29[0]);
              }
              goto LABEL_30;
            }
            v8 = -1073741637;
            WdLogSingleEntry2(7LL, v19, -1073741637LL);
          }
          else
          {
            v8 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, v19, v28[1]);
          }
          v27 = v8;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
        goto LABEL_33;
      }
      WdLogSingleEntry3(3LL, v17, v28[1], PairingAdapters);
    }
    else
    {
      v8 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v28[0]);
      v27 = -1073741811;
    }
LABEL_33:
    if ( v8 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v32 >> 3;
      if ( v14 )
      {
        v22 = *(_QWORD *)(a1 + 24);
        v23 = 0;
        v14 = v31;
        v24 = (_BYTE **)MmUserProbeAddress;
        while ( 1 )
        {
          v33 = v23;
          if ( v23 >= (unsigned int)v30 )
            break;
          v25 = (_QWORD *)(v22 + 12LL * v23);
          if ( v25 + 1 > (_QWORD *)*v24 || v25 + 1 <= v25 )
          {
            **v24 = 0;
            v24 = (_BYTE **)MmUserProbeAddress;
          }
          *v25 = v31[v23++];
        }
        v8 = v27;
      }
    }
    if ( v40 )
      DXGADAPTER::ReleaseReference(v40);
  }
  if ( v14 )
    operator delete(v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 )
  {
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_48:
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v34);
  }
  return (unsigned int)v8;
}
