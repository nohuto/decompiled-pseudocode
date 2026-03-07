__int64 __fastcall SmmAllocateLogicalAddress(
        struct SYSMM_LOGICAL_ALLOCATOR *a1,
        unsigned __int64 a2,
        const void *a3,
        struct SYSMM_LOGICAL_BLOCK **a4)
{
  char *v4; // rbx
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbp
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rax

  v4 = (char *)a1 + 1312;
  ExAcquirePushLockExclusiveEx((char *)a1 + 1312, 0LL);
  v10 = 0;
  v11 = (a2 + 4095) >> 12;
  if ( v11 < 2 )
  {
    v13 = 1LL;
  }
  else
  {
    _BitScanReverse64(&v12, v11 - 1);
    v13 = 1LL << ((unsigned __int8)v12 + 1);
  }
  _BitScanReverse64((unsigned __int64 *)&v14, v13);
  v15 = 4096LL << v14;
  if ( 4096LL << v14 < a2 )
  {
    WdLogSingleEntry1(1LL, 1295LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v16,
          v9,
          v17,
          0LL,
          2,
          -1,
          L"BlockSize >= Size",
          1295LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LOBYTE(v9) = v14;
  v18 = SmmAcquireBlock((__int64)a1, v9, 0LL, 0LL);
  if ( v18 )
  {
    *(_QWORD *)(v18 + 16) = a3;
    *(_QWORD *)(v18 + 32) |= 0x10000000000000uLL;
    *(_QWORD *)(v18 + 24) = a2;
    *a4 = (struct SYSMM_LOGICAL_BLOCK *)v18;
    *((_QWORD *)a1 + 160) += v15;
    *((_QWORD *)a1 + 161) -= v15;
    *((_QWORD *)a1 + 162) += a2;
    *((_QWORD *)a1 + 163) += v15 - a2;
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
    v10 = -1073741801;
  }
  ExReleasePushLockExclusiveEx(v4, 0LL);
  return v10;
}
