/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00F2FFC
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C00DEFF0 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0174B20 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00F64C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  struct DXGPROCESS *Current; // rdx
  __int64 v6; // rcx
  D3DKMT_HANDLE *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DKMT_HANDLE *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-108h] BYREF
  __int64 v34; // [rsp+58h] [rbp-100h]
  char v35; // [rsp+60h] [rbp-F8h]
  struct DXGPROCESS *v36; // [rsp+68h] [rbp-F0h]
  __int128 v37; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-D8h]
  __int128 v39; // [rsp+90h] [rbp-C8h]
  __int128 v40; // [rsp+A0h] [rbp-B8h]
  __int128 v41; // [rsp+B0h] [rbp-A8h]
  __int128 v42; // [rsp+C0h] [rbp-98h]
  __int128 v43; // [rsp+D0h] [rbp-88h]
  __int128 v44; // [rsp+E0h] [rbp-78h]
  __int128 v45; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v46; // [rsp+100h] [rbp-58h]
  __int128 v47; // [rsp+110h] [rbp-48h]
  __int128 v48; // [rsp+120h] [rbp-38h]
  __int64 v49; // [rsp+130h] [rbp-28h]

  v4 = a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2043LL);
  Current = DXGPROCESS::GetCurrent();
  v36 = Current;
  if ( Current )
  {
    if ( !a2 )
    {
      v37 = *(_OWORD *)&v4->hContext;
      v38 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v39 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v40 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v41 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v42 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v43 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v44 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v22 = &v4->ObjectHandleArray[30];
      v45 = *(_OWORD *)v22;
      v46 = *((_OWORD *)v22 + 1);
      v47 = *((_OWORD *)v22 + 2);
      v48 = *((_OWORD *)v22 + 3);
      v49 = *((_QWORD *)v22 + 8);
      v8 = v37;
      goto LABEL_18;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v37 = *(_OWORD *)&v4->hContext;
    v38 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v39 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v40 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v41 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v42 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v43 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v44 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v7 = &v4->ObjectHandleArray[30];
    v45 = *(_OWORD *)v7;
    v46 = *((_OWORD *)v7 + 1);
    v47 = *((_OWORD *)v7 + 2);
    v48 = *((_OWORD *)v7 + 3);
    v49 = *((_QWORD *)v7 + 8);
    v8 = v37;
    if ( DWORD1(v37) )
    {
      if ( DWORD1(v37) <= 0x20 )
      {
LABEL_18:
        v19 = WaitForSynchronizationObjectFromGpu(
                HIDWORD(v8),
                (const unsigned int *)&v37 + 2,
                0LL,
                *((unsigned __int64 *)&v45 + 1),
                v8,
                Current,
                a2 != 0,
                0,
                0,
                0);
        if ( v19 < 0 )
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v18);
          if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v33);
          return (unsigned int)v19;
        }
        else
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v18);
          if ( v35 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v33);
          }
          return 0LL;
        }
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(&v45, Current);
      v14[3] = (unsigned int)v37;
      v14[4] = DWORD1(v37);
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v15);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v33);
      return 3221225485LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(&v45, Current);
      *(_QWORD *)(v9 + 24) = (unsigned int)v37;
      *(_QWORD *)(v9 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v10);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v33);
      return 3221225485LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v6, 0LL);
    *(_QWORD *)(v23 + 24) = PsGetCurrentProcess(v25, v24, v26, v27);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v28);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v33);
    return 3221225485LL;
  }
}
