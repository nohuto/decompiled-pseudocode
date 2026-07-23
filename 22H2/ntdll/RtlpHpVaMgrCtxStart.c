/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x18010EB68
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18010DEC8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180007CDC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlULongLongMult @ 0x180057BC8 (RtlULongLongMult.c)
 *     RtlCSparseBitmapStart @ 0x18010F59C (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // r10d
  int v9; // ebx
  unsigned int v10; // r8d
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  _BitScanForward(&v5, 0x20u);
  *(_DWORD *)(a1 + 24) = v5;
  v6 = (a4 >> 20) + 1;
  if ( (a4 & 0xFFFFF) == 0 )
    v6 = a4 >> 20;
  result = RtlULongLongMult(v6, 8uLL, &v13);
  if ( (int)result >= 0 )
  {
    result = RtlULongLongMult(v13, v8, &v13);
    if ( (int)result >= 0 )
    {
      result = RtlCSparseBitmapStart((PVOID *)(a1 + 32));
      if ( (int)result >= 0 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        v11[0] = -1;
        v12 = 0LL;
        *(_DWORD *)a1 = 0;
        v9 = 0;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v11[1] = v9;
          v10 = 0x200000;
          if ( v9 == 3 )
            v10 = 0x40000000;
          result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v11, v10);
          if ( (int)result < 0 )
            break;
          if ( ++v9 >= 4 )
            return 0LL;
        }
      }
    }
  }
  return result;
}
