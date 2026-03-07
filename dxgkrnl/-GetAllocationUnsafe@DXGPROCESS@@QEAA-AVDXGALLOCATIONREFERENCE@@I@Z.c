DXGALLOCATIONREFERENCE *__fastcall DXGPROCESS::GetAllocationUnsafe(
        __int64 a1,
        DXGALLOCATIONREFERENCE *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  struct DXGALLOCATION *v10; // rbx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(a1 + 296)
    && (v5 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x60))
    && (*(_DWORD *)(v5 + 16LL * v4 + 8) & 0x2000) == 0
    && (v6 = *(_DWORD *)(v5 + 16LL * v4 + 8) & 0x1F) != 0 )
  {
    if ( v6 == 5 )
    {
      v10 = *(struct DXGALLOCATION **)(v5 + 16LL * v4);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v10 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
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
    v10 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(a2, v10);
  return a2;
}
