/*
 * XREFs of MxMarkActiveDriverBits @ 0x140B5F6B8
 * Callers:
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140B5F6B8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSplitBitmapPages @ 0x14036C1A8 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x14041BBB0 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x140B5F6B8 (MxMarkActiveDriverBits.c)
 */

unsigned __int64 __fastcall MxMarkActiveDriverBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 result; // rax
  __int64 v11; // rbx
  signed __int64 *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbp

  v5 = 0LL;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  result = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( a3 > result )
    v7 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( v6 <= v7 )
  {
    do
    {
      result = MI_READ_PTE_LOCK_FREE(v6);
      if ( (result & 1) != 0 )
      {
        ++v5;
        v11 = (__int64)(v6 << 25) >> 16;
        if ( a5 == 1 )
        {
          v12 = (signed __int64 *)a1[1];
          v13 = ((v11 << 25 >> 16) - a1[4]) >> 21;
          v14 = (unsigned __int64)v12 + (v13 >> 3);
          result = 0xFFFFF68000000000uLL;
          if ( (*(_DWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
          {
            MiSplitBitmapPages(12, (unsigned __int64)v12 + (v13 >> 3), (v13 & 7) + 1);
            result = KeZeroSinglePage((_OWORD *)(v14 & 0xFFFFFFFFFFFFF000uLL));
            v12 = (signed __int64 *)a1[1];
          }
          if ( *a1 <= v13 )
          {
            result = v13 + 1;
            *a1 = v13 + 1;
          }
          _bittestandset64(v12, v13);
        }
        else
        {
          result = MxMarkActiveDriverBits((_DWORD)a1, v11, (int)v11 + 4088, v8, a5 - 1);
        }
      }
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    if ( v5 )
      _InterlockedExchangeAdd64(&qword_140C69640, v5);
  }
  return result;
}
