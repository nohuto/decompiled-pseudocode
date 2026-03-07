__int64 __fastcall SmmMapMdl(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        MEMORY_CACHING_TYPE CacheType,
        _QWORD *a7,
        __int64 *a8,
        __int64 *a9)
{
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  PVOID v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v24; // [rsp+60h] [rbp-38h]
  PVOID v25; // [rsp+68h] [rbp-30h]

  v24 = -1073741823;
  v25 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 )
      goto LABEL_21;
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 )
    {
      WdLogSingleEntry1(1LL, 327LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v15,
            0LL,
            2,
            -1,
            L"pPhysicalObject->Flags.ExistingMemory == 0",
            327LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
        v16 = *(PVOID *)(a2 + 24);
      else
        v16 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
      v25 = v16;
      if ( v16 )
        goto LABEL_18;
      WdLogSingleEntry1(1LL, 343LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0LL,
          2,
          -1,
          L"pBaseAddress != nullptr",
          343LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      v25 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, CacheType, 0LL, 0, 0x40000010u);
    }
    if ( !v25 )
    {
      WdLogSingleEntry1(3LL, 353LL);
      v24 = -1073741801;
      goto LABEL_20;
    }
LABEL_18:
    ++*(_DWORD *)(a1 + 48);
    v24 = 0;
LABEL_20:
    ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
    goto LABEL_21;
  }
  v25 = MmMapLockedPagesSpecifyCache((PMDL)a2, 1, CacheType, 0LL, 0, 0x40000010u);
  v24 = 0;
LABEL_21:
  if ( v24 < 0 )
  {
    _InterlockedAdd(&dword_1C013BD40, 1u);
    WdLogSingleEntry4(6LL, a4, a5, a3, CacheType);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v21,
          v20,
          v22,
          0LL,
          1,
          -1,
          L"Failed to map MDL. Offset=0x%.16I64x, Size=%I64u, AccessMode=%u, CacheType=%u",
          a4,
          a5,
          a3,
          CacheType,
          0LL);
    }
  }
  *a7 = v25;
  *a8 = a4;
  *a9 = a5;
  return (unsigned int)v24;
}
