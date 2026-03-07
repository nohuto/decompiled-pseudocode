__int64 __fastcall ADAPTER_RENDER::DdiRenderGdi(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDERGDI *a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // rax
  struct DXGADAPTER **v11; // rdi
  struct DXGTHREAD *DxgThread; // rbx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v24; // al
  KIRQL CurrentIrql; // [rsp+50h] [rbp-108h]
  int v26; // [rsp+58h] [rbp-100h]
  struct DXGTHREAD *v27; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGTHREAD *v28; // [rsp+68h] [rbp-F0h]
  int v29; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-E0h]
  char v31; // [rsp+80h] [rbp-D8h]
  ADAPTER_RENDER *v32; // [rsp+88h] [rbp-D0h]
  void *v33; // [rsp+90h] [rbp-C8h]
  struct _DXGKARG_RENDERGDI *v34; // [rsp+A0h] [rbp-B8h]
  char *v35; // [rsp+B0h] [rbp-A8h]
  _BYTE v36[24]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v37[56]; // [rsp+D8h] [rbp-80h] BYREF

  v32 = this;
  v33 = a2;
  v34 = a3;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5066);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5066);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v10 = v9;
    }
  }
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v36, v10);
  v11 = (struct DXGADAPTER **)((char *)this + 16);
  v35 = (char *)this + 16;
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  DxgThread = 0LL;
  v28 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v27 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v27) >= 0 )
    {
      DxgThread = v27;
      if ( !v27 )
      {
        DxgThread = DxgkThreadObjectCreateDxgThread(1);
        v27 = DxgThread;
      }
    }
    v28 = DxgThread;
  }
  if ( DxgThread )
    v13 = *((_DWORD *)DxgThread + 12);
  else
    v13 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37, *v11);
  v26 = (*((__int64 (__fastcall **)(void *, struct _DXGKARG_RENDERGDI *))*v11 + 115))(a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v24);
  }
  if ( DxgThread )
  {
    v15 = *((int *)DxgThread + 12);
    if ( (_DWORD)v15 != v13 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), v13, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)*v11 + 1153);
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
  v18[3] = v26;
  v18[4] = a2;
  v18[5] = a3->pDmaBuffer;
  v18[6] = a3->DmaSize;
  v18[7] = a3->pAllocationList;
  if ( v26 )
  {
    if ( v26 > -1073741592 )
    {
      if ( v26 == -1071775743 || v26 == -1071775232 )
        goto LABEL_19;
    }
    else if ( v26 == -1073741592 || v26 == -1073741816 || v26 == -1073741811 || v26 == -1073741801 )
    {
      goto LABEL_19;
    }
    WdLogSingleEntry1(2LL, v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_19:
  DXGADAPTER::ReleaseDdiSync(*v11);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v19, v29);
  return (unsigned int)v26;
}
