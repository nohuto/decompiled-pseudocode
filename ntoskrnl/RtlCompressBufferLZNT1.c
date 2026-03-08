/*
 * XREFs of RtlCompressBufferLZNT1 @ 0x140A84CD0
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1CompressChunk @ 0x140A84DD0 (LZNT1CompressChunk.c)
 */

__int64 __fastcall RtlCompressBufferLZNT1(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  char *v10; // r14
  int v11; // r15d
  char v12; // di
  __int64 (__fastcall *v13)(_BYTE *, __int64); // r12
  _WORD *v14; // rbx
  __int64 v15; // r13
  __int64 result; // rax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2;
  v9 = a2 + a3;
  v17 = 0;
  v10 = (char *)a4 + a5;
  v11 = (int)a4;
  v12 = 1;
  if ( a1 )
  {
    if ( a1 != 256 )
      return 3221225659LL;
    v13 = LZNT1FindMatchMaximum;
  }
  else
  {
    v13 = LZNT1FindMatchStandard;
  }
  v14 = a4;
  if ( a2 >= v9 )
  {
LABEL_9:
    if ( v14 <= (_WORD *)v10 - 1 )
      *v14 = 0;
    *a7 = (_DWORD)v14 - v11;
    return v12 != 0 ? 0x117 : 0;
  }
  else
  {
    v15 = a8;
    while ( 1 )
    {
      result = LZNT1CompressChunk(v13, v8, v9, v14, v10, &v17, v15);
      if ( (int)result < 0 )
        break;
      if ( !v12 || (v12 = 1, (_DWORD)result != 279) )
        v12 = 0;
      v8 += 4096LL;
      v14 = (_WORD *)((char *)v14 + v17);
      if ( v8 >= v9 )
        goto LABEL_9;
    }
  }
  return result;
}
