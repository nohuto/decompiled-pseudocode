/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1C016645C
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0166440 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1C034FC90 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  bool v3; // r15
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v5; // rbx
  struct DXGPROCESS *Current; // rsi
  D3DKMT_HANDLE *v7; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  D3DKMT_HANDLE *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+60h] [rbp-128h] BYREF
  __int64 v23; // [rsp+68h] [rbp-120h]
  char v24; // [rsp+70h] [rbp-118h]
  struct DXGPROCESS *v25; // [rsp+78h] [rbp-110h]
  unsigned int v26[52]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a3;
  v5 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2043);
  Current = DXGPROCESS::GetCurrent();
  v25 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v14 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v22);
    return (unsigned int)v9;
  }
  memset(v26, 0, 0xC8uLL);
  if ( !a2 )
  {
    *(_OWORD *)v26 = *(_OWORD *)&v5->hContext;
    *(_OWORD *)&v26[4] = *(_OWORD *)&v5->ObjectHandleArray[2];
    *(_OWORD *)&v26[8] = *(_OWORD *)&v5->ObjectHandleArray[6];
    *(_OWORD *)&v26[12] = *(_OWORD *)&v5->ObjectHandleArray[10];
    *(_OWORD *)&v26[16] = *(_OWORD *)&v5->ObjectHandleArray[14];
    *(_OWORD *)&v26[20] = *(_OWORD *)&v5->ObjectHandleArray[18];
    *(_OWORD *)&v26[24] = *(_OWORD *)&v5->ObjectHandleArray[22];
    *(_OWORD *)&v26[28] = *(_OWORD *)&v5->ObjectHandleArray[26];
    v7 = &v5->ObjectHandleArray[30];
    *(_OWORD *)&v26[32] = *(_OWORD *)v7;
    *(_OWORD *)&v26[36] = *((_OWORD *)v7 + 1);
    *(_OWORD *)&v26[40] = *((_OWORD *)v7 + 2);
    *(_OWORD *)&v26[44] = *((_OWORD *)v7 + 3);
    *(_QWORD *)&v26[48] = *((_QWORD *)v7 + 8);
    v8 = *(_QWORD *)v26;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
  *(_OWORD *)v26 = *(_OWORD *)&v5->hContext;
  *(_OWORD *)&v26[4] = *(_OWORD *)&v5->ObjectHandleArray[2];
  *(_OWORD *)&v26[8] = *(_OWORD *)&v5->ObjectHandleArray[6];
  *(_OWORD *)&v26[12] = *(_OWORD *)&v5->ObjectHandleArray[10];
  *(_OWORD *)&v26[16] = *(_OWORD *)&v5->ObjectHandleArray[14];
  *(_OWORD *)&v26[20] = *(_OWORD *)&v5->ObjectHandleArray[18];
  *(_OWORD *)&v26[24] = *(_OWORD *)&v5->ObjectHandleArray[22];
  *(_OWORD *)&v26[28] = *(_OWORD *)&v5->ObjectHandleArray[26];
  v17 = &v5->ObjectHandleArray[30];
  *(_OWORD *)&v26[32] = *(_OWORD *)v17;
  *(_OWORD *)&v26[36] = *((_OWORD *)v17 + 1);
  *(_OWORD *)&v26[40] = *((_OWORD *)v17 + 2);
  *(_OWORD *)&v26[44] = *((_OWORD *)v17 + 3);
  *(_QWORD *)&v26[48] = *((_QWORD *)v17 + 8);
  v8 = *(_QWORD *)v26;
  if ( v26[1] )
  {
    if ( v26[1] <= 0x20 )
    {
LABEL_6:
      v9 = WaitForSynchronizationObjectFromGpu(
             HIDWORD(v8),
             &v26[2],
             0LL,
             *(unsigned __int64 *)&v26[34],
             v8,
             Current,
             a2 != 0,
             0,
             0,
             0,
             v3);
      if ( v9 >= 0 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( v24 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v22);
        }
        return 0LL;
      }
      goto LABEL_12;
    }
    WdLogSingleEntry3(2LL, v26[0], v26[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x waiting on too many objects %I64d, returning 0x%I64x",
      v26[0],
      v26[1],
      -1073741811LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v22);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v26[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      v26[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
    return 3221225485LL;
  }
}
