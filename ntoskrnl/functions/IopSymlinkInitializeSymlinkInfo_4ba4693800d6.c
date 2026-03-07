void *__fastcall IopSymlinkInitializeSymlinkInfo(
        __int64 a1,
        __int16 a2,
        const void *a3,
        unsigned __int16 a4,
        __int16 a5,
        void *Src,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10)
{
  unsigned __int16 v11; // r10
  void *v13; // rcx
  size_t v14; // rbp
  void *result; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rsi

  *(_WORD *)(a1 + 4) = a8;
  v11 = 0;
  *(_WORD *)(a1 + 18) = a2 - 32;
  *(_WORD *)a1 = a5;
  *(_WORD *)(a1 + 6) = 0;
  *(_WORD *)(a1 + 16) = 0;
  v13 = (void *)(a1 + 32);
  *(_WORD *)(a1 + 2) = a9;
  *(_QWORD *)(a1 + 8) = a10;
  v14 = a4;
  *(_QWORD *)(a1 + 24) = v13;
  if ( Src )
  {
    memmove(v13, Src, a7);
    v16 = *(_QWORD *)(a1 + 24);
    v17 = (unsigned __int64)a7 >> 1;
    v11 = a7;
    *(_WORD *)(a1 + 16) = a7;
    if ( *(_WORD *)(v16 + 2 * v17 - 2) != 92 )
    {
      *(_WORD *)(v16 + 2 * v17) = 92;
      *(_WORD *)(a1 + 16) += 2;
      v11 = *(_WORD *)(a1 + 16);
    }
  }
  result = memmove((void *)(*(_QWORD *)(a1 + 24) + v11), a3, v14);
  *(_WORD *)(a1 + 16) += v14;
  return result;
}
