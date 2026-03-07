__int64 __fastcall DxgkAllocateContiguousMemoryCB(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbx
  __int64 SysMmAdapterFromDevice; // rax
  char v7; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(int *)(a2 + 32);
  if ( (int)v2 <= 2 )
  {
    v5 = (*(_QWORD *)a2 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    SysMmAdapterFromDevice = DpiGetSysMmAdapterFromDevice();
    return SysMmCreateContiguousMemoryPhysicalObject(
             SysMmAdapterFromDevice,
             v5,
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 24),
             v2,
             0LL,
             0,
             a2 + 40,
             &v7,
             a2 + 48);
  }
  else
  {
    WdLogSingleEntry1(3LL, v2);
    return 3221225485LL;
  }
}
