/*
 * XREFs of MiAllocateFixupVad @ 0x14068D5A4
 * Callers:
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiInitializePrivateFixupBitmap @ 0x1405FC490 (MiInitializePrivateFixupBitmap.c)
 */

_RTL_BITMAP *__fastcall MiAllocateFixupVad(__int64 a1)
{
  _QWORD *v2; // rbx
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v4; // rdi
  unsigned __int64 v5; // rax
  int v6; // ecx
  _RTL_BITMAP *result; // rax

  v2 = **(_QWORD ***)(a1 + 72);
  if ( !*(_QWORD *)(v2[12] + 32LL) )
    return 0LL;
  Pool = (_RTL_BITMAP *)MiAllocatePool(
                          64,
                          8
                        * (((unsigned __int64)*(unsigned int *)(*v2 + 8LL) >> 6)
                         + ((*(_DWORD *)(*v2 + 8LL) & 0x3F) != 0)
                         + 20LL),
                          0x49646156u);
  v4 = Pool;
  if ( !Pool )
    return 0LL;
  *Pool = *(_RTL_BITMAP *)a1;
  Pool[1] = *(_RTL_BITMAP *)(a1 + 16);
  Pool[2] = *(_RTL_BITMAP *)(a1 + 32);
  Pool[3] = *(_RTL_BITMAP *)(a1 + 48);
  Pool[4] = *(_RTL_BITMAP *)(a1 + 64);
  Pool[5] = *(_RTL_BITMAP *)(a1 + 80);
  Pool[6] = *(_RTL_BITMAP *)(a1 + 96);
  Pool[7] = *(_RTL_BITMAP *)(a1 + 112);
  *(_QWORD *)&Pool[8].SizeOfBitMap = *(_QWORD *)(a1 + 128);
  Pool[8].Buffer = (unsigned int *)(-4096 * ((__int64)(*(_QWORD *)(a1 + 80) - v2[17]) >> 3)
                                  + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)
                                  - *(_QWORD *)(*v2 + 32LL));
  v5 = MiInitializePrivateFixupBitmap(Pool + 9, v2);
  v6 = (v5 ^ *(&v4[3].SizeOfBitMap + 1)) & 0x7FFFFFFF;
  BYTE2(v4[2].SizeOfBitMap) = v5 >> 31;
  *(&v4[3].SizeOfBitMap + 1) ^= v6;
  result = v4;
  v4[3].SizeOfBitMap |= 0x200000u;
  return result;
}
