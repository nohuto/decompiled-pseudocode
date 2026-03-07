__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  const wchar_t *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+58h] [rbp-80h]
  char v13; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+70h] [rbp-68h]
  char v15; // [rsp+78h] [rbp-60h] BYREF
  int v16; // [rsp+B8h] [rbp-20h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2206);
  P = 0LL;
  v16 = 0;
  if ( DXGPROCESS::GetCurrent(v3) )
  {
    v7 = -1073741637LL;
    v4 = -1073741637;
    v5 = 146LL;
    WdLogSingleEntry2(2LL, -1073741637LL, 146LL);
    v6 = L"Tracked workload not supported, returning 0x%I64x";
  }
  else
  {
    v4 = -1073741811;
    v5 = 139LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 139LL);
    v6 = L"Invalid process context, returning 0x%I64x";
    v7 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v7, v5, 0LL, 0LL, 0LL);
  if ( P != &v15 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v16 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  }
  return v4;
}
