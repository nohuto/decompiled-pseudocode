/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C017BCE0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038D070 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C017BEDC (-SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x1C03894B4 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  struct DXGPROCESS *Current; // r14
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  bool v15; // sf
  int v16; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-F0h]
  char v18; // [rsp+60h] [rbp-E8h]
  int v19[2]; // [rsp+68h] [rbp-E0h]
  DXGCONTEXT *v20[2]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v21[16]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v22[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2084;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2084);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2084);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int64 *)MmUserProbeAddress;
      v5 = *v3;
      *(_QWORD *)v19 = v5;
    }
    else
    {
      v5 = *v3;
      *(_QWORD *)v19 = v5;
    }
    if ( HIDWORD(v5) <= 1 )
    {
      v20[0] = 0LL;
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21, v5, Current, v20, 0, 1);
      v6 = (__int64 *)v20[0];
      if ( v20[0] )
      {
        if ( *((_BYTE *)v20[0] + 442) )
        {
          v8 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20[0] + 2) + 16LL) + 16LL) + 4472LL),
                 Current,
                 v20[0],
                 v19[1],
                 1u);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
          if ( !v18 )
            return v8;
          LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
            *((struct DXGDEVICE **)v20[0] + 2));
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, v6[2], 0, v7, 0);
          v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL);
          if ( (v8 & 0x80000000) == 0 )
            v8 = DXGCONTEXT::SetInProcessSchedulingPriority((DXGCONTEXT *)v6, v19[1]);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
          if ( v20[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
          if ( !v18 )
            return v8;
          v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        }
        if ( v15 )
          McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v16);
        return v8;
      }
      WdLogSingleEntry2(3LL, (unsigned int)v5, -1073741811LL);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 )
      {
        LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_26:
        if ( v14 )
          McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
        return 3221225485LL;
      }
      return 3221225485LL;
    }
    WdLogSingleEntry1(3LL, SHIDWORD(v5));
  }
  else
  {
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_26;
  }
  return 3221225485LL;
}
