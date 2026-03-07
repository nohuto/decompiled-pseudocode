__int64 __fastcall ADAPTER_RENDER::DdiDescribeAllocation(
        ADAPTER_RENDER *this,
        struct _DXGKARG_DESCRIBEALLOCATION *a2,
        __int64 a3)
{
  _OWORD *hAllocation; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *v10; // rax
  int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  KIRQL v21; // al
  int v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-31h]
  char v24; // [rsp+60h] [rbp-29h]
  _BYTE v25[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v23 = 0LL;
  v22 = -1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5003);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5003);
  hAllocation = a2->hAllocation;
  if ( a2->hAllocation )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    {
      *(_OWORD *)&a2->hAllocation = hAllocation[4];
      *(_OWORD *)&a2->Format = hAllocation[5];
      *(_OWORD *)&a2->RefreshRate.Denominator = hAllocation[6];
      a2->Rotation = -1;
      LODWORD(v12) = 0;
    }
    else
    {
      Current = DXGPROCESS::GetCurrent();
      DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v25, Current);
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
      CurrentIrql = KeGetCurrentIrql();
      v8 = CurrentIrql;
      v9 = 0LL;
      if ( CurrentIrql < 2u && (v10 = DXGTHREAD::GetCurrent(), (v9 = v10) != 0LL) )
        v11 = *((_DWORD *)v10 + 12);
      else
        v11 = 0;
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v26,
        *((struct DXGADAPTER **)this + 2));
      v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_DESCRIBEALLOCATION *))(*((_QWORD *)this + 2) + 480LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
              a2);
      if ( v26[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v8 != KeGetCurrentIrql() )
      {
        v21 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v21);
      }
      if ( v9 )
      {
        v14 = *((int *)v9 + 12);
        if ( (_DWORD)v14 != v11 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v11, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v17[3] = v12;
      v17[4] = a2->hAllocation;
      v17[5] = a2->Width;
      v17[6] = a2->Height;
      v17[7] = a2->Format;
      if ( (_DWORD)v12 )
      {
        WdLogSingleEntry1(2LL, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    }
  }
  else
  {
    LODWORD(v12) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  }
  return (unsigned int)v12;
}
