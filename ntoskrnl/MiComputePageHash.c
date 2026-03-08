/*
 * XREFs of MiComputePageHash @ 0x140466BDC
 * Callers:
 *     MiWritePageFileHash @ 0x1404670A6 (MiWritePageFileHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1406633DC (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdi
  _OWORD *v7; // r9
  _QWORD *v8; // rdx
  __int128 v9; // xmm1
  __int64 i; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  _OWORD v15[3]; // [rsp+20h] [rbp-38h]
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v7 = (_OWORD *)MiMapPageInHyperSpaceWorker(v6, &v16, 0);
  v8 = v7;
  v9 = v7[1];
  v15[0] = *v7;
  v15[1] = v9;
  do
  {
    v8 += 4;
    for ( i = 0LL; i < 4; ++i )
      *((_QWORD *)v15 + i) += v8[i];
  }
  while ( v8 != (_QWORD *)(v7 + 254) );
  v11 = v8[1] + v8[2] + v8[3] + *(_QWORD *)&v15[0];
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v7, v16);
  v12 = v11 + HIDWORD(v11);
  if ( (unsigned int)(v11 + HIDWORD(v11)) < 3 )
    v12 = 3;
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = MiGetPagingFileOffset((__int64 *)(a2 + 16));
  result = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v14 = 0xFFFFF6FB7DBEDF68uLL;
  if ( result != v6 )
    v14 = a3;
  *(_QWORD *)(a1 + 8) = v14 | 1;
  return result;
}
