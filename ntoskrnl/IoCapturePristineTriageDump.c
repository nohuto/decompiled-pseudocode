/*
 * XREFs of IoCapturePristineTriageDump @ 0x14054D368
 * Callers:
 *     KiCaptureDumpPreRecovery @ 0x14057886C (KiCaptureDumpPreRecovery.c)
 * Callees:
 *     IoFillDumpHeader @ 0x14054D7C8 (IoFillDumpHeader.c)
 *     IopCollectTriageDumpData @ 0x14054FEF0 (IopCollectTriageDumpData.c)
 */

__int64 __fastcall IoCapturePristineTriageDump(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rsi
  int v10; // ebp
  int v11; // r14d
  __int64 v13; // rsi
  _OWORD *v14; // rbx
  int v15; // edx
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm0
  __int64 v21; // rcx

  v8 = KiPristineTriageDump;
  v10 = a4;
  v11 = a3;
  if ( !KiPristineTriageDump )
  {
    if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) != 4 )
      return 3221225626LL;
    v13 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
    if ( !v13 )
      return 3221225626LL;
    v8 = v13 - 0x2000;
  }
  IoFillDumpHeader(v8, 4, a1, a2, a3, a4, a5, a7);
  v14 = (_OWORD *)a6;
  v15 = IopCollectTriageDumpData(a1, a2, v11, v10, a5, a6, a7, a8);
  if ( v15 >= 0 )
  {
    v16 = 9LL;
    *(_OWORD *)(v8 + 96) = 0LL;
    *(_OWORD *)(v8 + 112) = 0LL;
    *(_DWORD *)(v8 + 4156) = 0;
    *(_DWORD *)(v8 + 4176) |= 8u;
    *(_DWORD *)(v8 + 4152) = 3583;
    *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a6 + 248);
    v17 = (_OWORD *)(v8 + 840);
    do
    {
      *v17 = *v14;
      v17[1] = v14[1];
      v17[2] = v14[2];
      v17[3] = v14[3];
      v17[4] = v14[4];
      v17[5] = v14[5];
      v17[6] = v14[6];
      v17 += 8;
      v18 = v14[7];
      v14 += 8;
      *(v17 - 1) = v18;
      --v16;
    }
    while ( v16 );
    v19 = *(_DWORD *)(v8 + 8196) + 4095;
    *v17 = *v14;
    v19 &= 0xFFFFF000;
    v17[1] = v14[1];
    v17[2] = v14[2];
    v17[3] = v14[3];
    v20 = v14[4];
    *(_DWORD *)(v8 + 8196) = v19;
    v17[4] = v20;
    *(_DWORD *)((unsigned int)(v19 - 8196) + v8 + 0x2000) = 1145524820;
    v21 = *(unsigned int *)(v8 + 8196);
    *(_QWORD *)(v8 + 4000) = v21;
    *(_DWORD *)(v8 + 8200) = v21 - 4;
  }
  return (unsigned int)v15;
}
