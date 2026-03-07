__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  int v3; // r14d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rbx
  KIRQL CurrentIrql; // al
  __int64 v12; // r15
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  KIRQL v19; // al
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  _BYTE v27[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v24 = -1;
  v3 = 0;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5030);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5030);
  Current = DXGPROCESS::GetCurrent(v7);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v27, Current);
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_BYTE *)Global + 1689)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (struct DXGGLOBAL *)((char *)Global + 1684),
         *((struct DXGADAPTER **)this + 2)) )
  {
    LODWORD(v10) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    CurrentIrql = KeGetCurrentIrql();
    v12 = CurrentIrql;
    v13 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v14 = DXGTHREAD::GetCurrent();
      v13 = v14;
      if ( v14 )
        v3 = *((_DWORD *)v14 + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v10 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 728LL))(a2, a3);
    if ( v28[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v12 != KeGetCurrentIrql() )
    {
      v19 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v19);
    }
    if ( v13 )
    {
      v16 = *((int *)v13 + 12);
      if ( (_DWORD)v16 != v3 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v3, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    v20[3] = v10;
    v20[4] = a2;
    v20[5] = a3->pDmaBuffer;
    v20[6] = a3->DmaSize;
    v20[7] = a3->pAllocationList;
    if ( (_DWORD)v10 != -1073741816
      && (_DWORD)v10 != -1073741811
      && (_DWORD)v10 != -1073741801
      && (_DWORD)v10 != -1073741795
      && (_DWORD)v10 != -1073741674
      && (_DWORD)v10 != -1073741592
      && (_DWORD)v10 != -1071775743
      && (_DWORD)v10 != -1071775232
      && (_DWORD)v10 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v10;
}
