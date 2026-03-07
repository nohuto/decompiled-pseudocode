__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  unsigned int v5; // edi
  __int64 v7; // r13
  KIRQL CurrentIrql; // al
  __int64 v9; // r14
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  int v12; // esi
  __int64 v13; // rdi
  KIRQL v14; // al
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+70h] [rbp-39h]
  char v24; // [rsp+78h] [rbp-31h]
  _BYTE v25[8]; // [rsp+80h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-21h] BYREF

  v22 = -1;
  v23 = 0LL;
  v5 = a3;
  v21 = a3;
  v7 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5056);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5056);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
    v12 = *((_DWORD *)Current + 12);
  else
    v12 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)this + 2) + 904LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          (unsigned int)v7,
          v5,
          a4);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v14);
  }
  if ( v10 && *((_DWORD *)v10 + 12) != v12 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v12, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  WdLogSingleEntry4(4LL, v13, v7, v21, a4->GpuFrequency);
  WdLogSingleEntry2(4LL, a4->GpuClockCounter, a4->CpuClockCounter);
  if ( (_DWORD)v13 != -1073741811 )
  {
    if ( (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL, v13);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
            v17,
            0LL,
            0,
            -1,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v13,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  return (unsigned int)v13;
}
