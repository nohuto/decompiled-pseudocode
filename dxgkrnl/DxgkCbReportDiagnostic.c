__int64 __fastcall DxgkCbReportDiagnostic(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 DxgAdapter; // r9
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d

  if ( KeGetCurrentIrql() > 2u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 1LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0LL,
          0,
          -1,
          L"NULL device handle passed to DxgkCbReportDiagnostic (%d).",
          1LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, 2LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
        0LL,
        0,
        -1,
        L"Invalid device handle passed to DxgkCbReportDiagnostic (%d).",
        2LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v11 = *a2;
  if ( !*a2 )
  {
    WdLogSingleEntry1(2LL, 3LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0LL,
        0,
        -1,
        L"Zero diagnostic categories set for DxgkCbReportDiagnostic. (%d)",
        3LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  if ( ((v11 - 1) & v11) != 0 )
  {
    WdLogSingleEntry2(2LL, *a2, 4LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v16,
        v15,
        v17,
        0LL,
        0,
        -1,
        L"Multiple diagnostic categories: 0x%I64x set for DxgkCbReportDiagnostic. (%d)",
        *a2,
        4LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v18 = a2[1];
  if ( !(_DWORD)v18 )
  {
    WdLogSingleEntry1(2LL, 6LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v20,
        v19,
        v21,
        0LL,
        0,
        -1,
        L"Zero diagnostic types set for DxgkCbReportDiagnostic. (%d)",
        6LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
  {
    WdLogSingleEntry2(2LL, v18, 7LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v23,
        v22,
        v24,
        0LL,
        0,
        -1,
        L"Multiple diagnostic types: 0x%I64x set for DxgkCbReportDiagnostic. (%d)",
        a2[1],
        7LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v25 = 0;
  while ( !_bittest((const int *)&v11, v25) )
  {
    if ( ++v25 >= 2 )
    {
      WdLogSingleEntry2(2LL, *a2, 5LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v27,
          v26,
          v28,
          0LL,
          0,
          -1,
          L"Undefined diagnostic category 0x%I64x reported to DxgkCbReportDiagnostic. (%d)",
          *a2,
          5LL,
          0LL,
          0LL,
          0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(DxgAdapter + 4LL * v25 + 4620) & *(_DWORD *)(DxgAdapter + 4LL * v25 + 4628) & (unsigned int)v18) == 0 )
  {
    WdLogSingleEntry3(3LL, *a2, a2[1], 8LL);
    return 3221225485LL;
  }
  return ((__int64 (__fastcall *)(unsigned int *))(&DiagnosticCategoryHandler)[v25])(a2);
}
