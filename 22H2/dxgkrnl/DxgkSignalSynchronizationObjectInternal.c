/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C015D2C0
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0064770 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C00DF010 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0174B40 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C015D5F8 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  unsigned int *v16; // rax
  __int64 v17; // rdx
  unsigned int *v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // [rsp+60h] [rbp-258h] BYREF
  __int64 v45; // [rsp+68h] [rbp-250h]
  char v46; // [rsp+70h] [rbp-248h]
  struct DXGPROCESS *v47; // [rsp+78h] [rbp-240h]
  unsigned int v48; // [rsp+80h] [rbp-238h] BYREF
  unsigned int v49; // [rsp+84h] [rbp-234h]
  unsigned int v50[33]; // [rsp+88h] [rbp-230h] BYREF
  unsigned int v51; // [rsp+10Ch] [rbp-1ACh]
  _DWORD v52[64]; // [rsp+110h] [rbp-1A8h]
  void *v53; // [rsp+210h] [rbp-A8h] BYREF
  PVOID P; // [rsp+250h] [rbp-68h] BYREF
  _BYTE v55[64]; // [rsp+258h] [rbp-60h] BYREF
  int v56; // [rsp+298h] [rbp-20h]

  v4 = (_OWORD *)a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2044);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2044LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v47 = Current;
  if ( Current )
  {
    if ( !a2 )
    {
      v26 = &v48;
      v27 = 3LL;
      do
      {
        *(_OWORD *)v26 = *v4;
        *((_OWORD *)v26 + 1) = v4[1];
        *((_OWORD *)v26 + 2) = v4[2];
        *((_OWORD *)v26 + 3) = v4[3];
        *((_OWORD *)v26 + 4) = v4[4];
        *((_OWORD *)v26 + 5) = v4[5];
        *((_OWORD *)v26 + 6) = v4[6];
        v26 += 32;
        *((_OWORD *)v26 - 1) = v4[7];
        v4 += 8;
        --v27;
      }
      while ( v27 );
      *(_OWORD *)v26 = *v4;
      *((_OWORD *)v26 + 1) = v4[1];
      *((_OWORD *)v26 + 2) = v4[2];
      *((_OWORD *)v26 + 3) = v4[3];
      *((_OWORD *)v26 + 4) = v4[4];
      v15 = v51;
LABEL_11:
      P = 0LL;
      v56 = 0;
      v16 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v15 + 1);
      v18 = v16;
      if ( v16 )
      {
        *v16 = v48;
        v19 = 0LL;
        v20 = v51;
        if ( v51 )
        {
          do
          {
            v41 = (unsigned int)(v19 + 1);
            v18[v41] = v52[v19];
            v19 = v41;
            v20 = v51;
          }
          while ( (unsigned int)v41 < v51 );
        }
        v22 = SignalSynchronizationObjectInternal(
                v49,
                v50,
                (struct _D3DDDICB_SIGNALFLAGS)v50[32],
                v20 + 1,
                v18,
                0LL,
                (unsigned __int64)v53,
                &v53,
                Current,
                a2 != 0,
                0);
        if ( v22 < 0 )
        {
          if ( P != v55 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v56 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v21);
          if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v44);
          return (unsigned int)v22;
        }
        else
        {
          if ( P != v55 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v56 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v21);
          if ( v46 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v44);
          }
          return 0LL;
        }
      }
      else
      {
        if ( P != v55 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v56 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v17);
        if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v44);
        return 3221225495LL;
      }
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    v13 = &v48;
    v14 = 3LL;
    do
    {
      *(_OWORD *)v13 = *v4;
      *((_OWORD *)v13 + 1) = v4[1];
      *((_OWORD *)v13 + 2) = v4[2];
      *((_OWORD *)v13 + 3) = v4[3];
      *((_OWORD *)v13 + 4) = v4[4];
      *((_OWORD *)v13 + 5) = v4[5];
      *((_OWORD *)v13 + 6) = v4[6];
      v13 += 32;
      *((_OWORD *)v13 - 1) = v4[7];
      v4 += 8;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v13 = *v4;
    *((_OWORD *)v13 + 1) = v4[1];
    *((_OWORD *)v13 + 2) = v4[2];
    *((_OWORD *)v13 + 3) = v4[3];
    *((_OWORD *)v13 + 4) = v4[4];
    v15 = v51;
    if ( v51 > 0x40 )
    {
      v34 = WdLogNewEntry5_WdWarning(128LL, v51, v12);
      *(_QWORD *)(v34 + 24) = v51;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_26;
    }
    if ( v49 <= 0x20 )
      goto LABEL_11;
    v36 = WdLogNewEntry5_WdError(128LL, v51);
    *(_QWORD *)(v36 + 24) = v49;
    v33 = v36;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v30, v29, v31, v32);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    v33 = v28;
  }
  WdLogEvent5_WdError(v33);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v35);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v44);
  return 3221225485LL;
}
