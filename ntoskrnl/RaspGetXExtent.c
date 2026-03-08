/*
 * XREFs of RaspGetXExtent @ 0x140382254
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x1403913D4 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140670E7C (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspGetCacheEntry @ 0x1403823F4 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RaspAddCacheEntry @ 0x140AEAB60 (RaspAddCacheEntry.c)
 */

__int64 RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, ...)
{
  __int64 *v3; // r14
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // ecx
  int v11; // r8d
  int v12; // r8d
  int v13; // r9d
  __int64 *Memory; // rbx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  _BYTE v21[144]; // [rsp+70h] [rbp-49h] BYREF
  int v22; // [rsp+110h] [rbp+57h] BYREF
  __int64 v23; // [rsp+118h] [rbp+5Fh]
  __int64 v24; // [rsp+120h] [rbp+67h]
  __int64 v25; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va; // [rsp+128h] [rbp+6Fh]
  __int64 v27; // [rsp+130h] [rbp+77h] BYREF
  va_list va1; // [rsp+130h] [rbp+77h]
  __int64 *v29; // [rsp+138h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+138h] [rbp+7Fh]
  va_list va3; // [rsp+140h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, __int64 *);
  v23 = a2;
  v3 = v29;
  memset(v21, 0, 0x46uLL);
  v22 = 0;
  v7 = 0;
  v29 = 0LL;
  v8 = 0LL;
  v9 = *v3;
  v10 = 0;
  v25 = 0LL;
  LODWORD(v27) = 0;
  if ( a1 < 0x20u )
  {
LABEL_4:
    *a3 = v10;
    if ( !v9 && v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_13;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v24 = *(_QWORD *)(a2 + 8);
  RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a1, v11, *(_DWORD *)(v24 + 40), v24, (__int64)va2);
  Memory = v29;
  if ( v29 )
  {
LABEL_3:
    v10 = *((_DWORD *)Memory + 11);
    v3[2] = *(__int64 *)((char *)Memory + 62);
    goto LABEL_4;
  }
  v16 = v23;
  v7 = RaspRasterize(v23, a1, v12, v13, 0, (__int64)va, (__int64)va1, (__int64)&v22, (__int64)v3);
  if ( v7 < 0 )
  {
    v8 = v25;
    v10 = v27;
    goto LABEL_4;
  }
  if ( v9 )
  {
    Memory = (__int64 *)v21;
LABEL_10:
    v17 = *(_DWORD *)(v16 + 16);
    v18 = v3[2];
    v19 = v24;
    v8 = v25;
    v20 = *(_DWORD *)(v24 + 40);
    *((_DWORD *)Memory + 10) = v17;
    *((_DWORD *)Memory + 11) = v27;
    *((_DWORD *)Memory + 12) = v22;
    *((_DWORD *)Memory + 13) = 4;
    *((_DWORD *)Memory + 14) = 4;
    *((_WORD *)Memory + 30) = a1;
    *((_DWORD *)Memory + 9) = v20;
    Memory[3] = v19;
    Memory[2] = v8;
    *(__int64 *)((char *)Memory + 62) = v18;
    if ( !v9 )
      RaspAddCacheEntry(&RaspBitmapCache, Memory);
    goto LABEL_3;
  }
  Memory = (__int64 *)RaspAllocateMemory(70LL);
  if ( Memory )
    goto LABEL_10;
  v7 = -1073741801;
  v8 = v25;
  *a3 = v27;
LABEL_13:
  if ( v8 )
    RaspFreeMemory(v8, v3);
  return (unsigned int)v7;
}
