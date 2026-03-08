/*
 * XREFs of RaspLoadCompositeGlyphData @ 0x140671560
 * Callers:
 *     RaspLoadGlyphData @ 0x140383DAC (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x140383398 (FioFwReadUshortAtOffset.c)
 *     RaspGetCompositeGlyphList @ 0x140670ECC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406711FC (RaspInitializeCompositeGlyphData.c)
 */

__int64 __fastcall RaspLoadCompositeGlyphData(__int64 a1, int a2, _WORD *a3, __int64 *a4, __int64 *a5)
{
  int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 result; // rax
  __int64 *v14; // rdi
  int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int16 v20; // [rsp+5Ch] [rbp-Dh] BYREF
  int v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h] BYREF
  __int16 v24; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v25[3]; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int16 v26; // [rsp+C8h] [rbp+5Fh] BYREF

  v23 = 0LL;
  v24 = 0;
  v21 = 0;
  v26 = 0;
  v19[0] = 0;
  v20 = 0;
  v22 = 0LL;
  *(_OWORD *)v25 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  v10 = v9 + a2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v11, (unsigned int)(v9 + a2), &v23);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v23 + 1);
  v10 += 4;
  FioFwReadUshortAtOffset(v11, v10, (_WORD *)&v23 + 2);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v23 + 3);
  v12 = v10 + 4;
  FioFwReadUshortAtOffset(v11, v12, &v24);
  if ( (v23 & 0x8000u) == 0LL )
    return 3221225485LL;
  v14 = a5;
  result = RaspGetCompositeGlyphList(a1, a2, &v20, v19, &v26, &v21, v25, a5);
  if ( (int)result >= 0 )
  {
    v15 = RaspInitializeCompositeGlyphData(v11, v25, (__int64)&v23, v20, v19[0], v26, v12 + v21 + 2, a3, &v22, v14);
    if ( v15 >= 0 )
    {
      v18 = v22;
    }
    else
    {
      while ( 1 )
      {
        v16 = v25[0];
        if ( (__int64 *)v25[0] == v25 )
          break;
        if ( *(__int64 **)(v25[0] + 8) != v25
          || (v17 = *(_QWORD *)v25[0], *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0]) )
        {
          __fastfail(3u);
        }
        v25[0] = *(_QWORD *)v25[0];
        *(_QWORD *)(v17 + 8) = v25;
        RaspFreeMemory(*(_QWORD *)(v16 + 16), v14);
        RaspFreeMemory(v16, v14);
      }
      v18 = v22;
      if ( v22 )
      {
        RaspFreeMemory(v22, v14);
        v18 = 0LL;
      }
    }
    *a4 = v18;
    return (unsigned int)v15;
  }
  return result;
}
