/*
 * XREFs of FopInitializeFonts @ 0x140B99D48
 * Callers:
 *     BgpFoInitialize @ 0x140B99E88 (BgpFoInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x1403843C4 (FioFwReadUlongAtOffset.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FopFreeFontData @ 0x140AE9314 (FopFreeFontData.c)
 *     BgpRasInitializeRasterizer @ 0x140B98F30 (BgpRasInitializeRasterizer.c)
 *     FopGetTableOffsetAndSize @ 0x140B996C4 (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x140B99898 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B99A68 (FopValidateFontNameTable.c)
 */

__int64 __fastcall FopInitializeFonts(__int64 a1)
{
  int v1; // esi
  int v2; // ebp
  unsigned int i; // r14d
  void *Memory; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  int v8; // eax
  __int64 *v9; // rcx
  unsigned __int32 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( i = 12; ; i += 4 )
    {
      Memory = (void *)BgpFwAllocateMemory(0x80uLL);
      v6 = (__int64)Memory;
      if ( Memory )
        break;
LABEL_11:
      if ( (unsigned int)++v2 >= *(_DWORD *)(a1 + 24) )
        return v1 == 0 ? 0xC000007B : 0;
    }
    memset(Memory, 0, 0x80uLL);
    *(_QWORD *)(v6 + 16) = a1;
    *(_QWORD *)(v6 + 112) = v6 + 104;
    *(_QWORD *)(v6 + 104) = v6 + 104;
    v7 = 0;
    *(_DWORD *)(v6 + 40) = v2;
    v8 = *(_DWORD *)(a1 + 32);
    v11 = 0;
    if ( (v8 & 1) != 0 )
    {
      if ( (int)FioFwReadUlongAtOffset(*(_QWORD *)(a1 + 16), i, &v11) < 0 )
      {
LABEL_13:
        FopFreeFontData((_QWORD *)v6);
        goto LABEL_11;
      }
      v7 = v11;
    }
    v11 = 0;
    *(_DWORD *)(v6 + 44) = v7;
    if ( (int)FopGetTableOffsetAndSize(*(_QWORD *)(a1 + 16), v7, 1668112752, (unsigned __int32 *)(v6 + 48), &v11) >= 0
      && (int)FopValidateFontNameTable(*(_QWORD *)(a1 + 16), *(_DWORD *)(v6 + 44), (__int64 *)(v6 + 32)) >= 0
      && (int)FopReadMappingTable(*(_QWORD *)(a1 + 16), *(unsigned int *)(v6 + 48), (__int64 *)(v6 + 24)) >= 0
      && (int)BgpRasInitializeRasterizer(v6) >= 0 )
    {
      v9 = *(__int64 **)(a1 + 48);
      if ( *v9 != a1 + 40 )
        __fastfail(3u);
      *(_QWORD *)v6 = a1 + 40;
      ++v1;
      *(_QWORD *)(v6 + 8) = v9;
      *v9 = v6;
      *(_QWORD *)(a1 + 48) = v6;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  return v1 == 0 ? 0xC000007B : 0;
}
