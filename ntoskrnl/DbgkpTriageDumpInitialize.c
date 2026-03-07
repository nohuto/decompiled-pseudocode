__int64 __fastcall DbgkpTriageDumpInitialize(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 (__fastcall **a4)(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))
{
  PVOID PoolWithTag; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x6F98uLL, 0x4D574454u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x6F98uLL);
    *(_DWORD *)(a1 + 40) = 0;
  }
  *a4 = DbgkpTriageDumpFillHeaders;
  a4[2] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))DbgkpTriageDumpSnapData;
  a4[1] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))DbgkpTriageDumpIsMemoryBlockPresent;
  a4[3] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))DbgkpTriageDumpSaveState;
  a4[4] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))DbgkpTriageDumpRestoreState;
  a4[5] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))DbgkpTriageDumpWrite;
  return 0LL;
}
