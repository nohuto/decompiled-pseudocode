__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  int v3; // r15d
  char v6; // r13
  __int64 v7; // rcx
  KIRQL CurrentIrql; // al
  __int64 v9; // r12
  struct DXGTHREAD *v10; // rdi
  struct DXGTHREAD *Current; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  KIRQL v17; // al
  _QWORD *v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  __int64 v26; // [rsp+68h] [rbp-31h]
  char v27; // [rsp+70h] [rbp-29h]
  _BYTE v28[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  LODWORD(v25) = -1;
  v3 = 0;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    LODWORD(v25) = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5010);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5010);
  v6 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v6 = 1;
  }
  v7 = *((_QWORD *)this + 2);
  if ( *(int *)(v7 + 2820) < 1105 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v7 + 632))(
            *(_QWORD *)(v7 + 280),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 4612));
    CurrentIrql = KeGetCurrentIrql();
    v9 = CurrentIrql;
    v10 = 0LL;
    if ( CurrentIrql < 2u )
    {
      Current = DXGTHREAD::GetCurrent();
      v10 = Current;
      if ( Current )
        v3 = *((_DWORD *)Current + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2)
                                                                                           + 632LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
            a2);
    if ( v28[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v9 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v17);
    }
    if ( v10 )
    {
      v14 = *((int *)v10 + 12);
      if ( (_DWORD)v14 != v3 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v3, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v18[3] = (int)v12;
  v18[4] = a2->VidPnSourceId;
  v18[5] = a2->PrimarySegment;
  v18[6] = a2->PrimaryAddress.QuadPart;
  v18[7] = a2->hAllocation;
  if ( v12 != -1073741811 && v12 != -1073741801 )
  {
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, (int)v12);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v20,
            v19,
            v21,
            0LL,
            0,
            -1,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            (int)v12,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            v26);
      }
    }
  }
  if ( v6 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return v12;
}
