void __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rsi
  const wchar_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+60h] [rbp-18h]

  v12 = -1;
  v3 = a3;
  v4 = a2;
  v13 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 11001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 11001);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 11001);
  v6 = 3 * v4;
  v7 = *(_DWORD *)(a1 + 8 * v6 + 16);
  if ( v3 )
  {
    if ( (int)DXGKEYEDMUTEX::DestroyLocal(v7) >= 0 )
      goto LABEL_11;
    v8 = 657LL;
    WdLogSingleEntry1(1LL, 657LL);
    v9 = L"NT_SUCCESS(Status)";
  }
  else
  {
    if ( DXGKEYEDMUTEX::DestroyHandle(v7) )
      goto LABEL_11;
    v8 = 652LL;
    WdLogSingleEntry1(1LL, 652LL);
    v9 = L"bStatus";
  }
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
  *(_DWORD *)(a1 + 8 * v6 + 16) = 0;
  *(_QWORD *)(a1 + 8 * v6 + 24) = 0LL;
  *(_QWORD *)(a1 + 8 * v6 + 32) = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
  }
}
