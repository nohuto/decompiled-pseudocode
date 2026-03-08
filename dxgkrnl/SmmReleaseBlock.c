/*
 * XREFs of SmmReleaseBlock @ 0x1C007050C
 * Callers:
 *     SmmAcquireBlock @ 0x1C006FC8C (SmmAcquireBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0070254 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C03D24BC (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     SmmCoalesceBlocks @ 0x1C00700A8 (SmmCoalesceBlocks.c)
 */

_QWORD *__fastcall SmmReleaseBlock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r11
  __int64 v4; // r8
  _QWORD *v5; // r8
  _QWORD *result; // rax
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // rdx

  v2 = a2[4] >> 53;
  v3 = a2[4] & 0xFFFFFFFFFFFFFLL;
  v4 = 1LL << (v2 & 0x3F);
  if ( ((2 * v4 - 1) & v3) != 0 )
  {
    v5 = (_QWORD *)a2[1];
  }
  else
  {
    if ( (unsigned __int64)(v3 + v4) >= *(_QWORD *)(a1 + 1248) >> 12 )
      goto LABEL_9;
    v5 = (_QWORD *)*a2;
  }
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)(v5[4] >> 53)) & 0x3F) == 0 && v5 && (v5[4] & 0x10000000000000LL) == 0 )
    return SmmCoalesceBlocks(a1, a2, v5);
LABEL_9:
  v7 = a2[4] & 0xFFEFFFFFFFFFFFFFuLL;
  a2[4] = v7;
  v8 = (_DWORD *)(a1 + 24 * ((v7 >> 53) & 0x3F));
  result = a2 + 2;
  v9 = *(_QWORD *)v8;
  if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) != v8 )
    __fastfail(3u);
  *result = v9;
  result[1] = v8;
  *(_QWORD *)(v9 + 8) = result;
  *(_QWORD *)v8 = result;
  ++v8[4];
  return result;
}
