_QWORD *__fastcall SmmAllocateAdl(unsigned int a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  _QWORD *Pool2; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  _QWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v4 = 0LL;
  v5 = 24LL;
  if ( !a2 )
    v5 = 8LL * a1 + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v5, 846428228LL);
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_1C013BD34);
    WdLogSingleEntry1(6LL, 112LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          1,
          -1,
          L"Failed to allocate SYSMM_ADL",
          112LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 0LL;
  }
  if ( (dword_1C013BCE0 & 0x20) != 0 )
  {
    v10 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 846428228LL);
    v4 = v10;
    if ( !v10 )
    {
      _InterlockedIncrement(&dword_1C013BD38);
      WdLogSingleEntry1(6LL, 121LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0LL,
          1,
          -1,
          L"Failed to allocate SYSMM_ADL_DEBUG",
          121LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    *v10 = 0LL;
    v10[2] = 0LL;
    v10[3] = Pool2;
  }
  *Pool2 = v4;
  *((_DWORD *)Pool2 + 2) = a1;
  *((_DWORD *)Pool2 + 3) = a2 == 1;
  if ( (unsigned int)(a2 - 1) > 1 )
    Pool2[2] = Pool2 + 3;
  else
    Pool2[2] = 0LL;
  return Pool2;
}
