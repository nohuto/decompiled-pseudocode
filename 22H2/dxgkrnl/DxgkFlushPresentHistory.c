/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C016A550
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
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGADAPTER *v28; // [rsp+30h] [rbp-79h] BYREF
  int v29; // [rsp+38h] [rbp-71h] BYREF
  __int64 v30; // [rsp+40h] [rbp-69h]
  char v31; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v32; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v33[144]; // [rsp+60h] [rbp-49h] BYREF

  v29 = -1;
  v30 = 0LL;
  v3 = (unsigned int)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2189LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    v20 = -1073741811;
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_14;
  }
  v28 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v32, (unsigned int)v3, Current, &v28, 1);
  v14 = v28;
  if ( v28 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v28, 0LL);
    v16 = COREADAPTERACCESS::AcquireExclusive((__int64)v33, (unsigned int)(v15 + 2));
    if ( v16 != -1073741130 )
    {
      if ( v16 < 0 )
      {
LABEL_16:
        v20 = v16;
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33, v17);
        goto LABEL_12;
      }
      v19 = *((_QWORD *)v14 + 338);
      if ( v19 )
      {
        if ( !*((_BYTE *)v14 + 209) )
          ADAPTER_RENDER::FlushScheduler(v19, 1, 0xFFFFFFFF, 0);
        v20 = 0;
        goto LABEL_11;
      }
      v27 = WdLogNewEntry5_WdWarning(0LL, v17, v18);
      *(_QWORD *)(v27 + 24) = v3;
      *(_QWORD *)(v27 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v27);
    }
    v16 = 0;
    goto LABEL_16;
  }
  v26 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  v20 = -1073741811;
  *(_QWORD *)(v26 + 24) = v3;
  *(_QWORD *)(v26 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
LABEL_12:
  if ( v32 )
    DXGADAPTER::ReleaseReference(v32);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v21);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
  return v20;
}
