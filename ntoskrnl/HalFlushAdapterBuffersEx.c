/*
 * XREFs of HalFlushAdapterBuffersEx @ 0x140511F70
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14050CE18 (HalPutScatterGatherListV3.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FD754 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404FDA54 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushDriverMdl @ 0x1404FDB64 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FDBA4 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x1404FDD64 (HalpDmaFreeLa.c)
 *     HalpDmaControllerFlushChannel @ 0x140514184 (HalpDmaControllerFlushChannel.c)
 */

__int64 __fastcall HalFlushAdapterBuffersEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  bool v7; // zf
  __int64 v8; // rbp
  __int64 v9; // rbx
  struct _MDL *v11; // rsi
  struct _MDL *Next; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // r9d
  int v19; // r13d
  int AdapterCacheAlignment; // eax
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  __int64 v23; // r9
  __int64 v24; // r8
  char v25; // r13
  PMDL v26; // r15
  struct _MDL *v27; // rbx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // r9
  PMDL Mdl[9]; // [rsp+40h] [rbp-48h] BYREF
  char v32; // [rsp+90h] [rbp+8h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *(_DWORD *)(a1 + 520) == 3;
  v8 = a3;
  v9 = a2;
  v32 = 0;
  Mdl[0] = 0LL;
  v33 = 0LL;
  if ( v7 )
    HalpDmaFreeLa(a1, (__int64 *)(a3 + 24));
  v11 = *(struct _MDL **)(a1 + 552);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, v11);
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
  }
  v13 = a5;
  *(_QWORD *)(a1 + 552) = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( !v9 )
        return 3221225485LL;
      v14 = *(unsigned int *)(v9 + 40);
      if ( a4 < v14 )
        break;
      v9 = *(_QWORD *)v9;
      a4 -= v14;
    }
    if ( !*(_BYTE *)(a1 + 441) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
    if ( !*(_BYTE *)(a1 + 440) )
      return 0LL;
    v16 = a4;
    v17 = v9;
    if ( v8 )
    {
      v18 = *(_DWORD *)(v8 + 16);
      if ( *(_QWORD *)v9
        || (v19 = *(_DWORD *)(v9 + 44),
            AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2),
            ((AdapterCacheAlignment - 1) & (unsigned int)v21) != 0)
        && v22 >= (v21 & 0xFFFFFFFFFFFFF000uLL) )
      {
        v13 = v18;
      }
      else
      {
        v13 = (~(AdapterCacheAlignment - 1) & (v22 + AdapterCacheAlignment - 1)) - v19 - a4;
        if ( v13 > v18 )
          v13 = v18;
      }
    }
    HalpDmaCheckMdlAccessibility(a1, (_QWORD *)v9, a4, v13, &v32, (__int64 *)Mdl);
    LOBYTE(v24) = v32;
    v25 = a6;
    if ( v32 )
    {
      v26 = Mdl[0];
      if ( !a6 )
        HalpDmaFlushDriverMdl(&Mdl[0]->Next, 1, v24, v23);
      if ( v26 )
      {
        do
        {
          v27 = v26->Next;
          IoFreeMdl(v26);
          v26 = v27;
        }
        while ( v27 );
      }
      if ( !v8 )
        return 0LL;
      LOBYTE(v24) = v32;
    }
    else if ( !v8 )
    {
      return 3221225473LL;
    }
    *(_QWORD *)(v8 + 56) = v8;
    while ( v13 )
    {
      v28 = v13;
      if ( !v17 )
        break;
      v29 = v13;
      if ( *(_DWORD *)(v17 + 40) - (int)v16 <= v13 )
        v29 = *(_DWORD *)(v17 + 40) - v16;
      v30 = v16 + *(_QWORD *)(v17 + 32) + *(unsigned int *)(v17 + 44);
      v13 -= v29;
      if ( v13 && !*(_QWORD *)v17 )
      {
        v29 = v28;
        v13 = 0;
      }
      if ( *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV3(a1, v17, v8, v30, v29, v25, v24, &v33);
      else
        HalpDmaFlushContiguousTransferV3(a1, v17, v8, v30, v29, v25, v24, &v33);
      v8 = v33;
      v16 = 0LL;
      v17 = *(_QWORD *)v17;
      LOBYTE(v24) = v32;
    }
  }
  else if ( !*(_BYTE *)(a1 + 441) )
  {
    HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
  }
  return 0LL;
}
