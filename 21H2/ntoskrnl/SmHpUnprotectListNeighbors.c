/*
 * XREFs of SmHpUnprotectListNeighbors @ 0x14024D868
 * Callers:
 *     SmHpBufferUpdateFullness @ 0x1402882B8 (SmHpBufferUpdateFullness.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x140275470 (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpUnprotectListNeighbors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9

  if ( !a3 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 16LL);
    _BitScanReverse((unsigned int *)&v8, v12);
    v9 = v12 ^ (unsigned int)(1 << v8);
    return SmHpBufferProtectEx(v8, *(_QWORD *)(a1 + 8 * v8) + 16 * v9, 1LL);
  }
  if ( *a3 != a2 )
  {
    v10 = *(unsigned int *)(*a3 + 16LL);
    _BitScanReverse((unsigned int *)&v11, v10);
    SmHpBufferProtectEx(v11, *(_QWORD *)(a1 + 8 * v11) + 16 * (v10 ^ (unsigned int)(1 << v11)), 1LL);
  }
  result = a3[1];
  if ( result != a2 )
  {
    v7 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v8, v7);
    v9 = v7 ^ (unsigned int)(1 << v8);
    return SmHpBufferProtectEx(v8, *(_QWORD *)(a1 + 8 * v8) + 16 * v9, 1LL);
  }
  return result;
}
