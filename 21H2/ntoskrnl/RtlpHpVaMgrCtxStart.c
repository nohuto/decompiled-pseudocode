/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x14039D9A8
 * Callers:
 *     RtlHpHeapManagerStart @ 0x14039D8D8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037B760 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x14039DAA0 (RtlCSparseBitmapStart.c)
 */

int __fastcall RtlpHpVaMgrCtxStart(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v7; // eax
  ULONGLONG v8; // rcx
  int result; // eax
  unsigned int v10; // r11d
  int v11; // ebx
  unsigned int v12; // r8d
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  pullResult = 0LL;
  _BitScanForward(&v7, 0x20u);
  *(_DWORD *)(a1 + 24) = v7;
  v8 = (a4 >> 20) + 1;
  if ( (a4 & 0xFFFFF) == 0 )
    v8 = a4 >> 20;
  result = RtlULongLongMult(v8, 8uLL, &pullResult);
  if ( result >= 0 )
  {
    result = RtlULongLongMult(pullResult, v10, &pullResult);
    if ( result >= 0 )
    {
      result = RtlCSparseBitmapStart(a1 + 32, pullResult, a2, 1LL);
      if ( result >= 0 )
        result = 0;
      if ( result >= 0 )
      {
        v13[0] = -1;
        *(_DWORD *)a1 = a2;
        v11 = 0;
        *(_QWORD *)(a1 + 8) = a3;
        v14 = 0LL;
        while ( 1 )
        {
          v13[1] = v11;
          v12 = 0x200000;
          if ( v11 == 3 )
            v12 = 0x40000000;
          result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v13, v12);
          if ( result < 0 )
            break;
          if ( ++v11 >= 4 )
            return 0;
        }
      }
    }
  }
  return result;
}
