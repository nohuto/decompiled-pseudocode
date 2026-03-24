/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C02272D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-E0h]
  char v55; // [rsp+40h] [rbp-D8h]
  DXGADAPTER *v56; // [rsp+48h] [rbp-D0h] BYREF
  struct DXGADAPTER *v57; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v58[4]; // [rsp+60h] [rbp-B8h]
  _BYTE v59[144]; // [rsp+70h] [rbp-A8h] BYREF

  v3 = a1;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2130LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 10506LL;
    WdLogEvent5_WdError(v11);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v12);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v53);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v58 = *(_QWORD *)v3;
  v13 = *(_DWORD *)(v3 + 8);
  v57 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v56, v58[0], Current, &v57, 1);
  v17 = v57;
  if ( !v57 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v18 + 24) = Current;
    *(_QWORD *)(v18 + 32) = v58[0];
    WdLogEvent5_WdError(v18);
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v57 + 337) )
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v19 + 24) = v17;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_22;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v57, 0LL);
  v21 = COREADAPTERACCESS::AcquireExclusive((__int64)v59, (unsigned int)(v20 + 1));
  v26 = v21;
  if ( v21 >= 0 )
  {
    v33 = v58[1];
    if ( v58[1] >= *(_DWORD *)(*((_QWORD *)v17 + 337) + 80LL) )
    {
      v34 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v34 + 24) = v33;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v35);
LABEL_22:
      if ( v56 )
        DXGADAPTER::ReleaseReference(v56);
      goto LABEL_24;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v23, v22, v24, v25) + 346) )
    {
      v46 = 3968 * v33;
      *(_BYTE *)(3968 * v33 + *(_QWORD *)(*((_QWORD *)v17 + 337) + 112LL) + 1112) = v13 != 0;
      v47 = *((_QWORD *)v17 + 337);
      if ( v13 )
      {
        *(_BYTE *)(v47 + 396) = 1;
      }
      else
      {
        *(_BYTE *)(v47 + 396) = 0;
        v46 = 0LL;
        v48 = *((_QWORD *)v17 + 337);
        v49 = *(_DWORD *)(v48 + 80);
        if ( v49 )
        {
          while ( !*(_BYTE *)(3968LL * (unsigned int)v46 + *(_QWORD *)(v48 + 112) + 1112) )
          {
            v46 = (unsigned int)(v46 + 1);
            if ( (unsigned int)v46 >= v49 )
              goto LABEL_42;
          }
          *(_BYTE *)(v48 + 396) = 1;
        }
      }
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v46);
      if ( v56 )
        DXGADAPTER::ReleaseReference(v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v50);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v53);
      return 0LL;
    }
    else
    {
      v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v41 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v41);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v42);
      if ( v56 )
        DXGADAPTER::ReleaseReference(v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v43);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v53);
      return 3221225506LL;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdError(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v28);
    if ( v56 )
      DXGADAPTER::ReleaseReference(v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v29);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v53);
    return (unsigned int)v26;
  }
}
