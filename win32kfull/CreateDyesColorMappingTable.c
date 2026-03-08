/*
 * XREFs of CreateDyesColorMappingTable @ 0x1C0257C98
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0019A58 (ComputeChecksum.c)
 *     CachedHalftonePattern @ 0x1C0254570 (CachedHalftonePattern.c)
 *     AddBGRMapCache @ 0x1C0255FE8 (AddBGRMapCache.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 *     ComputeRGBLUTAA @ 0x1C0257424 (ComputeRGBLUTAA.c)
 *     FindBGRMapCache @ 0x1C0257DE8 (FindBGRMapCache.c)
 */

__int64 __fastcall CreateDyesColorMappingTable(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // eax
  int v7; // r10d
  unsigned int v8; // r14d
  void *BGRMapCache; // rbx
  _BYTE *v10; // rax

  v1 = *a1;
  v2 = a1[1];
  v3 = a1[6];
  *(_BYTE *)(v2 + 29) = 4;
  ComputeRGBLUTAA(v1, (__int128 *)v2, (_DWORD *)(v1 + 856));
  if ( (*(_DWORD *)(v2 + 56) & 0x40000000) == 0 )
  {
    v4 = ComputeChecksum((char *)(v2 + 124), 0x12345678u, 0x50u);
    v6 = ComputeChecksum((char *)(v2 + 204), v4, v5);
    v8 = ComputeChecksum((char *)v2, v6, v7 - 56);
    BGRMapCache = (void *)FindBGRMapCache(0LL, v8);
    if ( !BGRMapCache )
    {
      v10 = EngAllocMem(0, 0x18006u, 0x31365448u);
      BGRMapCache = v10;
      if ( !v10 )
        return 4294967294LL;
      if ( (unsigned int)ComputeBGRMappingTable(v1, v2, 0LL, v10) != 0x8000 )
        return 4294957291LL;
      if ( !(unsigned int)AddBGRMapCache((__int64)BGRMapCache, v8) )
      {
        EngFreeMem(BGRMapCache);
        return 4294967294LL;
      }
    }
    *(_QWORD *)(v3 + 392) = BGRMapCache;
  }
  return CachedHalftonePattern(v1, v2, v3 + 408, *(_DWORD *)(v3 + 328), *(_DWORD *)(v3 + 332), *(_DWORD *)v3 & 2);
}
