/*
 * XREFs of PopAddPagesToCompressedPageSet @ 0x140A9E7C4
 * Callers:
 *     PopCompressHiberBlocks @ 0x140A9EE04 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140AA272C (PopWriteHiberImage.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCompressBufferProgress @ 0x1405B0208 (RtlCompressBufferProgress.c)
 */

const void *__fastcall PopAddPagesToCompressedPageSet(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        const void *a4,
        char a5,
        int a6,
        __int64 a7)
{
  unsigned int v7; // esi
  _DWORD *v9; // r15
  unsigned int v11; // edi
  _BYTE *v13; // rbp
  unsigned int v14; // r9d
  __int64 v15; // r8
  int v16; // r10d
  unsigned int v17; // edx
  unsigned __int64 v18; // rbx
  int v19; // ecx
  unsigned __int64 v20; // rax
  const void *result; // rax
  __int64 v22; // [rsp+20h] [rbp-58h]
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0;
  v23 = 0;
  v9 = *(_DWORD **)(a2 + 24);
  v11 = a6 << 12;
  if ( v9 )
  {
    if ( a5 )
    {
      v13 = *(_BYTE **)a2;
      memmove(*(void **)a2, a4, v11);
    }
    else
    {
      v13 = a4;
      v14 = *(_DWORD *)(a2 + 120);
      v15 = *((_QWORD *)qword_140C3CAF8 + 5) - *((_QWORD *)qword_140C3CAF8 + 7);
      if ( v14 && (v16 = *(_DWORD *)(a2 + 124), (int)(100 * v16 / v14) <= dword_140C3CAA4) )
      {
        v17 = *((_DWORD *)qword_140C3CAF8 + 2);
        if ( v15 >= (__int64)((unsigned __int64)v17 >> 1) )
        {
          *(_DWORD *)(a2 + 124) = v16 + 1;
          LOBYTE(v7) = v15 >= (__int64)((unsigned __int64)(3 * v17) >> 2);
          v7 += 2;
        }
      }
      else
      {
        LOBYTE(v7) = v15 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140C3CAF8 + 2) >> 1);
      }
      *(_DWORD *)(a2 + 120) = v14 + 1;
    }
    v18 = __rdtsc();
    v19 = RtlCompressBufferProgress(
            *((_WORD *)&PopCompressMethodMap + v7),
            v13,
            v11,
            v9,
            v22,
            &v23,
            *(_QWORD *)(a2 + 16),
            a7,
            a1);
    v20 = __rdtsc();
    *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
    if ( v19 < 0 || v23 >= (7 * v11) >> 3 )
    {
      a4 = v13;
    }
    else
    {
      v11 = v23;
      a4 = v9;
    }
  }
  result = a4;
  *a3 = (v7 << 30) | ((v11 << 8) | (unsigned __int8)*a3) & 0x3FFFFFFF;
  return result;
}
