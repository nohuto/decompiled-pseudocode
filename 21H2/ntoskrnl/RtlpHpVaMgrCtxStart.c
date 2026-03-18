/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x140371D3C
 * Callers:
 *     RtlHpHeapManagerStart @ 0x14036EDD4 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140371E18 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x140372070 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // r8
  _DWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v16; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v8, 0x20u);
  *(_DWORD *)(a1 + 24) = v8;
  v9 = (a5 >> 20) + 1;
  if ( (a5 & 0xFFFFF) == 0 )
    v9 = a5 >> 20;
  v10 = v9;
  v11 = 8 * v9;
  if ( !is_mul_ok(v10, 8uLL) || !is_mul_ok(v11, 0x20uLL) )
    return 3221225621LL;
  result = RtlCSparseBitmapStart(a1 + 32, 32 * v11, a3, (unsigned int)((v11 * (unsigned __int128)0x20u) >> 64) + 1);
  if ( (int)result >= 0 )
  {
    v15[0] = -1;
    *(_DWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a4;
    v13 = 0;
    v16 = 0LL;
    while ( 1 )
    {
      v15[1] = v13;
      v14 = 0x200000LL;
      if ( (unsigned int)(v13 - 2) > 1 && v13 == 4 )
        v14 = 0x40000000LL;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, v15, v14);
      if ( (int)result < 0 )
        break;
      if ( ++v13 >= 5 )
        return 0LL;
    }
  }
  return result;
}
