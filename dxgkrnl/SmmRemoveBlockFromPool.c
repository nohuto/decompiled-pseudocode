/*
 * XREFs of SmmRemoveBlockFromPool @ 0x1C00705E8
 * Callers:
 *     SmmCoalesceBlocks @ 0x1C00700A8 (SmmCoalesceBlocks.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x1C007034C (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1C00703EC (SmmGetFreeBlockFromPool.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D2830 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_QWORD *__fastcall SmmRemoveBlockFromPool(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  _QWORD *result; // rax

  if ( !*(_DWORD *)(a1 + 16) )
  {
    WdLogSingleEntry1(1LL, 667LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0LL,
          2,
          -1,
          L"pPool->NumFreeBlocks > 0",
          667LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  --*(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v7 + 8) != a2 + 16 || (result = *(_QWORD **)(a2 + 24), *result != a2 + 16) )
    __fastfail(3u);
  *result = v7;
  *(_QWORD *)(v7 + 8) = result;
  return result;
}
