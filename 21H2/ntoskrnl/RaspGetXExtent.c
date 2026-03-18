/*
 * XREFs of RaspGetXExtent @ 0x1403CA20C
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x1403CAF18 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14064ED40 (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspRasterize @ 0x1403A8ACC (RaspRasterize.c)
 *     RaspFreeMemory @ 0x1403A8C98 (RaspFreeMemory.c)
 *     RaspAllocateMemory @ 0x1403AA258 (RaspAllocateMemory.c)
 *     RaspGetCacheEntry @ 0x1403AA764 (RaspGetCacheEntry.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RaspAddCacheEntry @ 0x140AAE4B0 (RaspAddCacheEntry.c)
 */

__int64 __fastcall RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 *a6)
{
  _QWORD *v9; // r14
  int v10; // esi
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // r15
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *Memory; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  _BYTE *v22; // [rsp+58h] [rbp-59h] BYREF
  __int128 v23; // [rsp+60h] [rbp-51h] BYREF
  __int64 v24; // [rsp+70h] [rbp-41h]
  _BYTE v25[128]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v27; // [rsp+118h] [rbp+67h] BYREF
  int v28; // [rsp+120h] [rbp+6Fh] BYREF
  int v29; // [rsp+124h] [rbp+73h]

  v29 = HIDWORD(a4);
  memset(v25, 0, 0x46uLL);
  v9 = a6;
  v10 = 0;
  v22 = 0LL;
  v11 = 0LL;
  v28 = 0;
  v12 = 0;
  v27 = 0LL;
  v13 = *a6;
  a5 = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( a1 < 0x20u )
  {
LABEL_4:
    *a3 = v12;
    if ( !v13 && v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_13;
  }
  v14 = *(_DWORD *)(a2 + 16);
  a6 = *(__int64 **)(a2 + 8);
  RaspGetCacheEntry((__int64 **)&RaspBitmapCache, a1, v14, *((_DWORD *)a6 + 10), (__int64)a6, &v22);
  Memory = v22;
  if ( v22 )
  {
LABEL_3:
    v12 = *((_DWORD *)Memory + 11);
    v9[2] = *(_QWORD *)(Memory + 62);
    goto LABEL_4;
  }
  v10 = RaspRasterize(a2, a1, v15, v16, 0, &v27, &a5, (__int64)&v28, (__int64)v9);
  if ( v10 < 0 )
  {
    v11 = v27;
    v12 = a5;
    goto LABEL_4;
  }
  if ( v13 )
  {
    Memory = v25;
LABEL_10:
    v19 = v9[2];
    v20 = (__int64)a6;
    v21 = *((_DWORD *)a6 + 10);
    *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
    *((_DWORD *)Memory + 11) = a5;
    *((_DWORD *)Memory + 12) = v28;
    *((_WORD *)Memory + 30) = a1;
    v11 = v27;
    *((_DWORD *)Memory + 13) = 4;
    *((_DWORD *)Memory + 14) = 4;
    *((_DWORD *)Memory + 9) = v21;
    *((_QWORD *)Memory + 3) = v20;
    *((_QWORD *)Memory + 2) = v11;
    *(_QWORD *)(Memory + 62) = v19;
    if ( !v13 )
      RaspAddCacheEntry(&RaspBitmapCache, Memory);
    goto LABEL_3;
  }
  Memory = (_BYTE *)RaspAllocateMemory(0x46uLL, (__int64 *)&v23);
  if ( Memory )
    goto LABEL_10;
  v10 = -1073741801;
  v11 = v27;
  *a3 = a5;
LABEL_13:
  if ( v11 )
    RaspFreeMemory(v11, v9);
  return (unsigned int)v10;
}
