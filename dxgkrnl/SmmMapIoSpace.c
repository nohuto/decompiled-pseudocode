__int64 __fastcall SmmMapIoSpace(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, _QWORD *a6, __int64 *a7)
{
  __int64 v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v7 = a4;
  v9 = a1 + a2;
  v10 = 4LL;
  if ( a4 )
  {
    if ( a4 == 2 )
      v10 = 1028LL;
  }
  else
  {
    v10 = 516LL;
  }
  v11 = MmMapIoSpaceEx(v9, a3, v10);
  if ( v11 )
  {
    *a5 = v11;
    *a6 = 0LL;
    *a7 = a3;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C013BD3C);
    WdLogSingleEntry3(6LL, v9, a3, v7);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0LL,
          1,
          -1,
          L"Failed to map IO space. Address=0x%.16I64x, Size=%I64u, CacheType=%u",
          v9,
          a3,
          v7,
          0LL,
          0LL);
    }
    return 3221225626LL;
  }
}
