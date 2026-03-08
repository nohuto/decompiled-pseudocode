/*
 * XREFs of HalpDmaMapScatterTransferV3 @ 0x1404FE110
 * Callers:
 *     HalpMapTransferV3 @ 0x140512CCC (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x140452E28 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x1404544F2 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 */

_QWORD *__fastcall HalpDmaMapScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        char a6,
        char a7,
        __int64 *a8)
{
  _QWORD *result; // rax
  __int64 v13; // rdx
  unsigned int v14; // r11d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r12
  _BYTE *v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+28h] [rbp-30h]

  result = (_QWORD *)HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v14 = (unsigned int)result;
  *a5 = (int)result;
  if ( !(_DWORD)result )
    return result;
  v15 = a4 & 0xFFF;
  v16 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v17 = v15 + (*(_QWORD *)(a2 + 8 * v16 + 48) << 12);
  if ( a3 )
  {
    v18 = (unsigned int)result;
    if ( *(_QWORD *)(a1 + 144) < v17 + (unsigned __int64)(unsigned int)result - 1 && *(_DWORD *)(a1 + 520) != 3 )
    {
      v19 = (_BYTE *)(a1 + 445);
LABEL_11:
      v20 = *(_QWORD **)(a3 + 56);
      *a8 = v15 + *v20;
      if ( a6 )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, v20, v14, a6, 0, a7);
      }
      else if ( !*v19 )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, v20, v14, 0, 1, a7);
      }
      v21 = *(_QWORD *)(a3 + 56);
      result = (_QWORD *)((unsigned __int64)(v18 + v15 + 4095) >> 12);
      if ( (_DWORD)result )
      {
        v22 = (unsigned int)result;
        do
        {
          v21 = *(_QWORD *)(v21 + 8);
          --v22;
        }
        while ( v22 );
      }
      *(_QWORD *)(a3 + 56) = v21;
      return result;
    }
    v19 = (_BYTE *)(a1 + 445);
    if ( !*(_BYTE *)(a1 + 445) && !a6 )
    {
      v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v13) - 1;
      if ( (v16 & v17) != 0 || ((unsigned int)v16 & v14) != 0 )
        goto LABEL_11;
    }
    if ( *(_BYTE *)(a3 + 64) )
      goto LABEL_11;
  }
  else
  {
    v19 = (_BYTE *)(a1 + 445);
  }
  v23 = *v19 == 0;
  result = a8;
  *a8 = v17;
  if ( v23 )
  {
    LOBYTE(v25) = a7;
    LOBYTE(v24) = a6;
    return (_QWORD *)HalpDmaFlushBuffer(v16, a2, a4, v14, v24, v25);
  }
  return result;
}
