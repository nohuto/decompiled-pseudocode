/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C02D13D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  int v9; // r14d
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-E0h]
  char v30; // [rsp+60h] [rbp-D8h]
  DXGADAPTER *v31; // [rsp+68h] [rbp-D0h] BYREF
  struct DXGADAPTER *v32; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v33[4]; // [rsp+80h] [rbp-B8h]
  _BYTE v34[144]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 10847LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10847LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_49:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v28);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v33 = *(_QWORD *)v3;
  v9 = *(_DWORD *)(v3 + 8);
  v32 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, v33[0], Current, &v32, 1);
  v10 = v32;
  if ( !v32 )
  {
    v11 = v33[0];
    WdLogSingleEntry2(2LL, Current, v33[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v11,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v32 + 365) )
  {
    WdLogSingleEntry2(3LL, v32, -1073741811LL);
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_49;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v32, 0LL);
  v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v34, (unsigned int)(v12 + 1));
  v15 = v13;
  if ( v13 >= 0 )
  {
    v19 = v33[1];
    if ( v33[1] >= *(_DWORD *)(*((_QWORD *)v10 + 365) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v33[1], -1073741811LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
LABEL_13:
      if ( v31 )
        DXGADAPTER::ReleaseReference(v31);
      goto LABEL_7;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v14) + 106) & 4) != 0 )
    {
      *(_BYTE *)(4000 * v19 + *(_QWORD *)(*((_QWORD *)v10 + 365) + 128LL) + 1140) = v9 != 0;
      v22 = *((_QWORD *)v10 + 365);
      if ( v9 )
      {
        *(_BYTE *)(v22 + 460) = 1;
      }
      else
      {
        *(_BYTE *)(v22 + 460) = 0;
        v23 = 0;
        v24 = *((_QWORD *)v10 + 365);
        v25 = *(_DWORD *)(v24 + 96);
        if ( v25 )
        {
          while ( !*(_BYTE *)(4000LL * v23 + *(_QWORD *)(v24 + 128) + 1140) )
          {
            if ( ++v23 >= v25 )
              goto LABEL_39;
          }
          *(_BYTE *)(v24 + 460) = 1;
        }
      }
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      if ( v31 )
        DXGADAPTER::ReleaseReference(v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v28);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741790LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      if ( v31 )
        DXGADAPTER::ReleaseReference(v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 )
      {
        LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v28);
      }
      return 3221225506LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v28);
    return (unsigned int)v15;
  }
}
