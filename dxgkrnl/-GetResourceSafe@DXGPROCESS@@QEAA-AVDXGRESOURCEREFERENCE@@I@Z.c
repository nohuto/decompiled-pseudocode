DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceSafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct DXGRESOURCE *v13; // rbx

  v3 = a1 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 248));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 296)
    && (v8 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60))
    && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0
    && (v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F) != 0 )
  {
    if ( v9 == 4 )
    {
      v13 = *(struct DXGRESOURCE **)(v8 + 16LL * v7);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v13 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
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
    v13 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
