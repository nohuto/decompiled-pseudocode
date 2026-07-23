/*
 * XREFs of RaspGetXExtent @ 0x1403B2274
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x1403BCDF0 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x1405C5CBC (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspGetCacheEntry @ 0x1403B2418 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x1403B24AC (RaspRasterize.c)
 *     RaspFreeMemory @ 0x1403B2678 (RaspFreeMemory.c)
 *     RaspAllocateMemory @ 0x1403B3B78 (RaspAllocateMemory.c)
 *     memset @ 0x140414300 (memset.c)
 *     RaspAddCacheEntry @ 0x1409F56A4 (RaspAddCacheEntry.c)
 */

__int64 __fastcall RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v8; // r14
  int v9; // esi
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // r15
  int v13; // r8d
  int v14; // r8d
  int v15; // r9d
  _BYTE *Memory; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  _BYTE *v21; // [rsp+58h] [rbp-59h] BYREF
  __int128 v22; // [rsp+60h] [rbp-51h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  _BYTE v24[128]; // [rsp+78h] [rbp-39h] BYREF
  int v25; // [rsp+108h] [rbp+57h] BYREF
  _DWORD *v26; // [rsp+118h] [rbp+67h]
  __int64 v27; // [rsp+120h] [rbp+6Fh] BYREF

  v26 = a3;
  memset(v24, 0, 0x46uLL);
  v8 = (__int64)a6;
  v9 = 0;
  v21 = 0LL;
  v10 = 0LL;
  v25 = 0;
  v11 = 0;
  v27 = 0LL;
  v12 = *a6;
  a5 = 0;
  v23 = 0LL;
  v22 = 0LL;
  if ( a1 >= 0x20u )
  {
    v13 = *(_DWORD *)(a2 + 16);
    a6 = *(__int64 **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a1, v13, *((_DWORD *)a6 + 10), (__int64)a6, (__int64)&v21);
    Memory = v21;
    if ( v21 )
    {
LABEL_3:
      v11 = *((_DWORD *)Memory + 11);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(Memory + 62);
      goto LABEL_4;
    }
    v9 = RaspRasterize(a2, a1, v14, v15, 0, (__int64)&v27, (__int64)&a5, (__int64)&v25, v8);
    if ( v9 >= 0 )
    {
      if ( v12 )
      {
        Memory = v24;
LABEL_10:
        v18 = *(_QWORD *)(v8 + 16);
        v19 = (__int64)a6;
        v10 = v27;
        v20 = *((_DWORD *)a6 + 10);
        *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
        *((_DWORD *)Memory + 11) = a5;
        *((_DWORD *)Memory + 12) = v25;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_WORD *)Memory + 30) = a1;
        *((_DWORD *)Memory + 9) = v20;
        *((_QWORD *)Memory + 3) = v19;
        *((_QWORD *)Memory + 2) = v10;
        *(_QWORD *)(Memory + 62) = v18;
        if ( !v12 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
        goto LABEL_3;
      }
      Memory = (_BYTE *)RaspAllocateMemory(70LL);
      if ( Memory )
        goto LABEL_10;
      v9 = -1073741801;
    }
    v10 = v27;
    v11 = a5;
  }
LABEL_4:
  *v26 = v11;
  if ( v12 || v9 < 0 )
  {
    if ( v10 )
      RaspFreeMemory(v10, v8);
  }
  return (unsigned int)v9;
}
