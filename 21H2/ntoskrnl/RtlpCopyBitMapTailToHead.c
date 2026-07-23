/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x1402751CC
 * Callers:
 *     RtlCopyBitMap @ 0x140275080 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

unsigned __int64 __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  int *v13; // r9
  int v14; // esi
  char v15; // bl
  int *v16; // r9
  unsigned int v17; // ebx
  int v18; // r15d
  size_t v19; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = (unsigned __int64)a3 >> 3;
  v7 = a3;
  if ( (a3 & 7) != 0 )
  {
    v8 = (unsigned __int64)a4 >> 5;
    v9 = a3 & 0x1F;
    v10 = a4 & 0x1F;
    v11 = (unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * (v8 + (v7 >> 5)));
    result = *(_QWORD *)(a1 + 8);
    v12 = v11;
    v13 = (int *)(result + 4 * v8);
    if ( v10 )
    {
      v14 = *v13;
      v15 = 32 - v9;
      if ( v10 > 32 - v9 )
      {
        v11[1] = v11[1] & -(1 << (v9 + v10 - 32)) | ((v14 & (unsigned int)(((1 << (v9 + v10 - 32)) - 1) << v15)) >> v15);
        result = ((*v13 & ((1 << v15) - 1)) << v9) | *v11 & ((1 << v9) - 1);
        *v11 = result;
      }
      else
      {
        result = (v14 & (unsigned int)((1 << v10) - 1)) << v9;
        *v11 = result | *v11 & ~(((1 << v10) - 1) << v9);
      }
    }
    v16 = v13 - 1;
    if ( v8 )
    {
      v17 = *v11;
      v18 = 1 << (32 - v9);
      do
      {
        *v12-- = ((*v16 & (unsigned int)~(v18 - 1)) >> (32 - v9)) | v17 & ~((1 << v9) - 1);
        result = (*v16-- & (unsigned int)(v18 - 1)) << v9;
        v17 = result | ((1 << v9) - 1) & *v12;
        *v12 = v17;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v19 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v5 + *(_QWORD *)(a2 + 8) + v19) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v19 + result) | *(_BYTE *)(v5 + *(_QWORD *)(a2 + 8) + v19) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v19 )
      return (unsigned __int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v19);
  }
  return result;
}
