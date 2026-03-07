__int64 __fastcall DXGDOORBELL::Disconnect(__int64 a1, int a2)
{
  ULONG_PTR v2; // rax
  void *v4; // rcx
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rsi
  const wchar_t *v8; // r9
  void *v9; // rcx
  NTSTATUS v10; // eax
  ULONG_PTR NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(void **)(a1 + 48);
  v5 = a2;
  NumberOfBytes = v2;
  v6 = MmRotatePhysicalView(v4, &NumberOfBytes, 0LL, MmToRegularMemory, 0LL, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = *(void **)(a1 + 64);
    if ( !v9
      || (NumberOfBytes = *(_QWORD *)(a1 + 40),
          v10 = MmRotatePhysicalView(v9, &NumberOfBytes, 0LL, MmToRegularMemory, 0LL, 0LL),
          v7 = v10,
          v10 >= 0) )
    {
      **(_QWORD **)(a1 + 120) = v5;
      return (unsigned int)v7;
    }
    WdLogSingleEntry2(2LL, a1, v10);
    v8 = L"DXGDOORBELL 0x%I64x: Failed to rotate secondary CPUVA back to dummy CPU page, returning 0x%I64x";
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, v6);
    v8 = L"DXGDOORBELL 0x%I64x: Failed to rotate CPUVA back to dummy CPU page, returning 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, a1, v7, 0LL, 0LL, 0LL);
  return (unsigned int)v7;
}
