/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C01D9720
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
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v6; // rbx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h]
  char v17; // [rsp+68h] [rbp-98h]
  DXGADAPTER *v18; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  v15 = -1;
  v16 = 0LL;
  v3 = (unsigned int)a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2189);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v10 = -1073741811;
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
    goto LABEL_14;
  }
  v14 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, v3, Current, &v14, 1);
  v6 = v14;
  if ( v14 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v14, 0LL);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v19, (unsigned int)(v7 + 2));
    if ( v8 != -1073741130 )
    {
      if ( v8 < 0 )
      {
LABEL_16:
        v10 = v8;
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
        goto LABEL_12;
      }
      v9 = *((_QWORD *)v6 + 366);
      if ( v9 )
      {
        if ( !*((_BYTE *)v6 + 209) )
          ADAPTER_RENDER::FlushScheduler(v9, 1u, 0xFFFFFFFF, 0);
        v10 = 0;
        goto LABEL_11;
      }
      WdLogSingleEntry2(3LL, v3, -1073741637LL);
    }
    v8 = 0;
    goto LABEL_16;
  }
  v10 = -1073741811;
  WdLogSingleEntry2(3LL, v3, -1073741811LL);
LABEL_12:
  if ( v18 )
    DXGADAPTER::ReleaseReference(v18);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v15);
  }
  return v10;
}
