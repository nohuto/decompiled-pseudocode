/*
 * XREFs of IopLiveDumpGetCapturePagesNoLock @ 0x1409AC9C4
 * Callers:
 *     IopLiveDumpGetNtMergePages @ 0x140898494 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AB53C (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x1402288D0 (RtlFindSetBitsEx.c)
 */

void __fastcall IopLiveDumpGetCapturePagesNoLock(
        PRTL_BITMAP_EX BitMapHeader,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int *a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  ULONG64 v7; // rbp
  int v12; // eax
  char v13; // r14
  ULONG64 SetBits; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v6 = -1LL;
  v7 = *(_QWORD *)(a2 + 48);
  *a5 = 0;
  if ( v7 != -1LL )
  {
    v12 = 0;
    v13 = 1;
    if ( a4 )
    {
      while ( 1 )
      {
        SetBits = RtlFindSetBitsEx(BitMapHeader, 1uLL, v7);
        if ( SetBits < v7 || SetBits == -1LL )
          break;
        v15 = (unsigned int)*a5;
        v7 = SetBits + 1;
        *(_QWORD *)(a3 + 8 * v15) = SetBits;
        v12 = v15 + 1;
        *a5 = v15 + 1;
        if ( (int)v15 + 1 >= a4 )
          goto LABEL_8;
      }
      v12 = *a5;
      v13 = 0;
    }
LABEL_8:
    if ( v13 )
      v6 = *(_QWORD *)(a3 + 8LL * (unsigned int)(v12 - 1)) + 1LL;
  }
  *(_QWORD *)(a2 + 48) = v6;
  if ( *a5 )
  {
    v16 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 40) = *a5;
    *a6 = v16;
    *(_QWORD *)(a2 + 56) = v16 + 1;
  }
}
