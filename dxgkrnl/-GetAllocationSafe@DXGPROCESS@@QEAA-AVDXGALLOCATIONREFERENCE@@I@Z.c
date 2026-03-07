DXGALLOCATIONREFERENCE *__fastcall DXGPROCESS::GetAllocationSafe(
        __int64 a1,
        DXGALLOCATIONREFERENCE *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  struct DXGALLOCATION *v9; // rbx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v3 = a1 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 248));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 296)
    && (v8 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60))
    && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0
    && (v11 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F) != 0 )
  {
    if ( v11 == 5 )
    {
      v9 = *(struct DXGALLOCATION **)(v8 + 16LL * v7);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v9 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0,
          0,
          -1,
          (__int64)L"Handle type mismatch",
          267LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    v9 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(a2, v9);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
