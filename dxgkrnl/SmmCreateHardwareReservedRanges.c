__int64 __fastcall SmmCreateHardwareReservedRanges(__int64 a1, __int128 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r14
  __int64 Pool2; // rax
  __int128 v10; // xmm0

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 384) )
  {
    WdLogSingleEntry1(1LL, 410LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRanges == nullptr",
      410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    WdLogSingleEntry1(1LL, 411LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRangeCount == 0",
      411LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = SmmValidateHardwareReservedRanges(a2, (unsigned int)v4);
  if ( (int)result >= 0 )
  {
    v8 = v4;
    Pool2 = ExAllocatePool2(64LL, 24 * v4, 947091524LL);
    *(_QWORD *)(a1 + 384) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_1C013BD08);
      WdLogSingleEntry1(6LL, 422LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate SYSMM_HARDWARE_RESERVED_RANGE array",
        422LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    do
    {
      v10 = *a2++;
      *(_OWORD *)(*(_QWORD *)(a1 + 384) + v3) = v10;
      v3 += 24LL;
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 28) = v4;
    return 0LL;
  }
  return result;
}
