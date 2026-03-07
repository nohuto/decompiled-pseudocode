__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct DXGPROCESS *v7; // rax
  KIRQL CurrentIrql; // al
  __int64 v9; // r12
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *v11; // rax
  int v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGPROCESS *Current; // rax
  KIRQL v19; // al
  int v20; // [rsp+50h] [rbp-39h] BYREF
  __int64 v21; // [rsp+58h] [rbp-31h]
  char v22; // [rsp+60h] [rbp-29h]
  _BYTE v23[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 5004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5004);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 5004);
  v6 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v6 + 209) )
  {
    Current = DXGPROCESS::GetCurrent(v5);
    LODWORD(v13) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4472),
                     Current,
                     a2);
  }
  else
  {
    v7 = DXGPROCESS::GetCurrent(v5);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v23, v7);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    CurrentIrql = KeGetCurrentIrql();
    v9 = CurrentIrql;
    v10 = 0LL;
    if ( CurrentIrql < 2u && (v11 = DXGTHREAD::GetCurrent(), (v10 = v11) != 0LL) )
      v12 = *((_DWORD *)v11 + 12);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v24,
      *((struct DXGADAPTER **)this + 2));
    v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2)
                                                                                           + 488LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
            a2);
    if ( v24[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v9 != KeGetCurrentIrql() )
    {
      v19 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v19);
    }
    if ( v10 )
    {
      v14 = *((int *)v10 + 12);
      if ( (_DWORD)v14 != v12 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v12, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    WdLogSingleEntry3(4LL, v13, a2->AllocationPrivateDriverDataSize, a2->ResourcePrivateDriverDataSize);
    if ( (_DWORD)v13 != -1073741801 && (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  return (unsigned int)v13;
}
