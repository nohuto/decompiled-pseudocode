__int64 __fastcall ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v10; // r15
  struct DXGTHREAD *v11; // rdi
  struct DXGTHREAD *v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  KIRQL v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  char v25; // [rsp+60h] [rbp-39h]
  _BYTE v26[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 5140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5140);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 5140);
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1360LL) )
  {
    Current = DXGPROCESS::GetCurrent(v6);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v26, Current);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = CurrentIrql;
    v11 = 0LL;
    if ( CurrentIrql < 2u && (v12 = DXGTHREAD::GetCurrent(), (v11 = v12) != 0LL) )
      v13 = *((_DWORD *)v12 + 12);
    else
      v13 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v27,
      *((struct DXGADAPTER **)this + 2));
    v7 = (*(int (__fastcall **)(void *, struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *))(*((_QWORD *)this + 2) + 1360LL))(
           a2,
           a3);
    if ( v27[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v10 != KeGetCurrentIrql() )
    {
      v18 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v18);
    }
    if ( v11 )
    {
      v15 = *((int *)v11 + 12);
      if ( (_DWORD)v15 != v13 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v15, v13, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    v19 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = v7;
    *(_QWORD *)(v19 + 32) = a2;
    if ( (_DWORD)v7 != -1073741592 && (_DWORD)v7 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  }
  else
  {
    LODWORD(v7) = -1073741822;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  }
  return (unsigned int)v7;
}
