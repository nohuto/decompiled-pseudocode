__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 TimeIncrement; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 PathCount; // rcx
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v19; // edx
  unsigned __int64 v20; // rdx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  KIRQL v25; // al
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-89h] BYREF
  __int64 v28; // [rsp+58h] [rbp-81h]
  char v29; // [rsp+60h] [rbp-79h]
  _QWORD v30[5]; // [rsp+70h] [rbp-69h] BYREF
  int v31; // [rsp+98h] [rbp-41h]
  int v32; // [rsp+9Ch] [rbp-3Dh]
  int v33; // [rsp+A0h] [rbp-39h]
  UINT v34; // [rsp+A4h] [rbp-35h]
  int v35; // [rsp+A8h] [rbp-31h]
  int v36; // [rsp+ACh] [rbp-2Dh]
  __int64 v37; // [rsp+B0h] [rbp-29h]
  _BYTE v38[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v27 = -1;
  memset(&v30[1], 0, 24);
  v32 = 0;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 5076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5076);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 5076);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v5 = MEMORY[0xFFFFF78000000320];
  v6 = v5 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v38,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1152LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v25 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v25);
  }
  if ( v9 && *((_DWORD *)v9 + 12) != v11 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v13 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v16 = *((_QWORD *)this + 2);
  v17 = v13 * TimeIncrement;
  if ( (int)v12 < 0 )
  {
    v26 = *(_QWORD *)(v16 + 404);
    v20 = (unsigned __int64)a2->pResultsFlags->0;
    v30[3] = 0LL;
    PathCount = a2->PathCount;
    v34 = a2->PathCount;
    v33 = 96;
    v35 = v20;
    v36 = v12;
    v37 = v26;
  }
  else
  {
    PathCount = *(_QWORD *)(v16 + 404);
    v17 -= v6;
    v19 = a2->pResultsFlags->0;
    v30[3] = 0LL;
    v34 = a2->PathCount;
    v35 = (int)v19;
    v33 = 87;
    v20 = v17 / 0x2710;
    v36 = v17 / 0x2710;
    v37 = PathCount;
  }
  v30[0] = 0x480000001ELL;
  v31 = 0;
  v30[4] = 0LL;
  *(_OWORD *)&v30[1] = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(PathCount, v20, v17, v15);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, CurrentProcessSessionId);
  WdLogSingleEntry4(4LL, v12, a2->hFunctionalVidPn, *(_DWORD *)&a2->pResultsFlags->0, a2->PathCount);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v27);
  return (unsigned int)v12;
}
