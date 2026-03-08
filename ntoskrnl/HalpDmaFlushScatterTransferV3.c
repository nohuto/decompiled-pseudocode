/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x1404FDBA4
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140512DB0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x140452E28 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x1404544F2 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaFlushScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  int i; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 ContiguousPiece; // r14
  __int64 v16; // r13
  __int64 v17; // rcx
  char v18; // r9
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]

  if ( (a3 || !*(_BYTE *)(a1 + 445)) && !a6 )
  {
    for ( i = a5; i; i -= ContiguousPiece )
    {
      if ( a3 )
        v13 = *(_QWORD *)(a3 + 56);
      else
        v13 = 0LL;
      ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, v13, a4, 0, i);
      v16 = a4 & 0xFFF;
      v17 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
      if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)(v16 + (*(_QWORD *)(a2 + 8 * v17 + 48) << 12) + ContiguousPiece - 1)
        && *(_DWORD *)(a1 + 520) != 3
        || (v18 = *(_BYTE *)(a1 + 445)) == 0
        && ((v17 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v14) - 1, (v17 & v19) != 0)
         || ((unsigned int)v17 & (unsigned int)ContiguousPiece) != 0)
        || a3 && *(_BYTE *)(a3 + 64) )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD **)(a3 + 56), ContiguousPiece, 0, 0, a7);
        v20 = *(_QWORD *)(a3 + 56);
        v21 = ContiguousPiece;
        v22 = (unsigned __int64)(ContiguousPiece + v16 + 4095) >> 12;
        if ( (_DWORD)v22 )
        {
          v23 = (unsigned int)v22;
          do
          {
            v20 = *(_QWORD *)(v20 + 8);
            --v23;
          }
          while ( v23 );
        }
        *(_QWORD *)(a3 + 56) = v20;
      }
      else
      {
        if ( !v18 )
        {
          LOBYTE(v25) = a7;
          LOBYTE(v24) = 0;
          HalpDmaFlushBuffer(v17, a2, a4, (unsigned int)ContiguousPiece, v24, v25);
        }
        v21 = ContiguousPiece;
      }
      a4 += v21;
    }
    if ( a8 )
    {
      if ( !a3 )
      {
        *a8 = 0LL;
        return;
      }
      *a8 = *(_QWORD *)(a3 + 56);
    }
    else if ( !a3 )
    {
      return;
    }
    *(_QWORD *)(a3 + 56) = a3;
  }
}
