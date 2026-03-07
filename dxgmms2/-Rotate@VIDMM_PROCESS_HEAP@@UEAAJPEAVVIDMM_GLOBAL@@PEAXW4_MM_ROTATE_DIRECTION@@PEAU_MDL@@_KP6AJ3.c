// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  ULONG_PTR v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  char v13; // di
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcess; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  bool v25; // zf
  char *v26; // r12
  SIZE_T v27; // r13
  HANDLE v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _MDL *v33; // r15
  ULONG_PTR v34; // rbx
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r13
  PVOID Context; // r14
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  struct _MDL *v43; // r14
  PVOID v44; // r13
  int v45; // r14d
  NTSTATUS v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  NTSTATUS (__stdcall *v49)(PMDL, PMDL, PVOID); // r15
  struct _EPROCESS *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-29h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  int v58; // [rsp+70h] [rbp-19h] BYREF
  __int64 v59; // [rsp+78h] [rbp-11h]
  char v60; // [rsp+80h] [rbp-9h]
  int v61; // [rsp+D8h] [rbp+4Fh]
  ULONG_PTR v63; // [rsp+E8h] [rbp+5Fh] BYREF
  enum _MM_ROTATE_DIRECTION v64; // [rsp+F0h] [rbp+67h]

  v64 = a4;
  v63 = a3;
  v58 = -1;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  v59 = 0LL;
  v13 = 1;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v60 = 1;
    v58 = 8005;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8005);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  CurrentProcess = PsGetCurrentProcess(v16, v15, v17, v18);
  if ( CurrentProcess != **(_QWORD **)(a1 + 8) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v22 = WdLogNewEntry5_WdTrace(CurrentProcess);
    *(_QWORD *)(v22 + 24) = v9;
    *(_QWORD *)(v22 + 32) = v10;
  }
  v23 = *(_QWORD *)(v9 + 8);
  v24 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v25 = (*(_DWORD *)(v9 + 20) & 0x800000) == 0;
    v26 = *(char **)(v9 + 8);
  }
  else
  {
    v26 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v23 + 32));
    v25 = (*(_DWORD *)(v23 + 64) & 1) == 0;
  }
  if ( v25 )
  {
    if ( (unsigned int)v10 < 2 )
    {
      v14 = -1073741823;
    }
    else
    {
      v51 = (unsigned int)(v10 - 2);
      if ( (unsigned int)v51 <= 1 )
      {
        v52 = PsGetCurrentProcess(v51, v24, v20, v21);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 1LL, v52, v9, v10);
      }
    }
    goto LABEL_66;
  }
  v61 = 0;
  if ( (unsigned int)v10 > 1 )
  {
    v27 = *(_QWORD *)(v9 + 64);
    v56 = v27;
    goto LABEL_26;
  }
  v27 = Size;
  v56 = Size;
  if ( (_DWORD)v24
    || *(_QWORD *)(v23 + 56)
    || *(_QWORD *)(v9 + 32)
    || (v28 = MmSecureVirtualMemory(v26, Size, 4u), (*(_QWORD *)(v9 + 32) = v28) != 0LL) )
  {
    if ( *(_DWORD *)(v11 + 40184) != -1 )
      (*(void (__fastcall **)(_QWORD))(v11 + 40088))(*(_QWORD *)(v11 + 40152));
    v61 = 1;
LABEL_26:
    if ( (_DWORD)v10 == 2 )
    {
      v33 = NewMdl;
      v34 = v27;
      CopyFunction = a7;
      Context = a8;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v34;
        v14 = MmRotatePhysicalView(v26, &NumberOfBytes, v33, MmToRegularMemory, CopyFunction, Context);
        if ( v14 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        if ( bTracingEnabled )
        {
          if ( (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, &EventPerformanceWarning, v41, 12);
        }
        v26 += NumberOfBytes;
        v34 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v9 = v63;
    }
    else
    {
      if ( (_DWORD)v10 != 3 )
      {
        v63 = v27;
        v14 = MmRotatePhysicalView(v26, &v63, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
        if ( v14 >= 0 )
        {
LABEL_37:
          if ( (unsigned int)v10 <= 1 )
          {
            v43 = NewMdl;
            *(_QWORD *)(v9 + 80) = NewMdl;
            *(_QWORD *)(v9 + 64) = v27;
          }
          else
          {
            if ( (a9 & 2) == 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
              *(_QWORD *)(v9 + 80) = 0LL;
            }
            v43 = NewMdl;
            v13 = 0;
          }
          *(_BYTE *)(v9 + 72) = v13;
LABEL_59:
          v50 = (struct _EPROCESS *)PsGetCurrentProcess(v37, v42, v38, v39);
          VIDMM_GLOBAL::RecordRotation(v50, v26, v27, v43, (enum _MM_ROTATE_DIRECTION)v10, v14);
LABEL_66:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
          if ( v60 && byte_1C00769C1 < 0 )
            McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v58);
          return (unsigned int)v14;
        }
        if ( (a9 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
LABEL_55:
        if ( v61 )
        {
          v42 = *(unsigned int *)(v11 + 40184);
          if ( (_DWORD)v42 != -1 )
            (*(void (__fastcall **)(_QWORD))(v11 + 40104))(*(_QWORD *)(v11 + 40152));
        }
        v43 = NewMdl;
        goto LABEL_59;
      }
      NumberOfBytes = v27;
      v44 = a8;
      v45 = a9 & 1;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        v46 = MmRotatePhysicalView(v26, &NumberOfBytes, NewMdl, MmToRegularMemoryNoCopy, a7, v44);
        v14 = v46;
        if ( !v45 || v46 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventPerformanceWarning, v48, 12);
        v49 = a7;
        while ( MmRotatePhysicalView(v26, &NumberOfBytes, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v49, v44) < 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        KeDelayExecutionThread(0, 0, &Interval);
      }
    }
    v11 = a2;
    v27 = v56;
    LODWORD(v10) = v64;
    v42 = *(unsigned int *)(a2 + 40184);
    if ( (_DWORD)v42 != -1 )
      (*(void (__fastcall **)(_QWORD))(a2 + 40104))(*(_QWORD *)(a2 + 40152));
    if ( v14 >= 0 )
      goto LABEL_37;
    goto LABEL_55;
  }
  _InterlockedAdd(&dword_1C0076870, 1u);
  WdLogSingleEntry1(6LL, 1530LL);
  DxgkLogInternalTriageEvent(v29, 262145LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v58);
  return 3221225495LL;
}
