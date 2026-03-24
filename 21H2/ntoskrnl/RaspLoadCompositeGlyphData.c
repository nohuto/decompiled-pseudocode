/*
 * XREFs of RaspLoadCompositeGlyphData @ 0x1405C6190
 * Callers:
 *     RaspLoadGlyphData @ 0x1403B3B0C (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x1403B31FC (FioFwReadUshortAtOffset.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5ADC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5E14 (RaspInitializeCompositeGlyphData.c)
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
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // rax
  __int16 v23[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int16 v24; // [rsp+5Ch] [rbp-Dh] BYREF
  int v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  __int16 v28; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v29[3]; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int16 v30; // [rsp+C8h] [rbp+5Fh] BYREF

  v27 = 0LL;
  v28 = 0;
  v25 = 0;
  v30 = 0;
  v23[0] = 0;
  v24 = 0;
  v26 = 0LL;
  *(_OWORD *)v29 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  v10 = v9 + a2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v11, (unsigned int)(v9 + a2), &v27);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v27 + 1);
  v10 += 4;
  FioFwReadUshortAtOffset(v11, v10, (_WORD *)&v27 + 2);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v27 + 3);
  v12 = v10 + 4;
  FioFwReadUshortAtOffset(v11, v12, &v28);
  if ( (v27 & 0x8000u) == 0LL )
    return 3221225485LL;
  v14 = a5;
  result = RaspGetCompositeGlyphList(a1, a2, &v24, v23, &v30, &v25, v29, a5);
  if ( (int)result >= 0 )
  {
    v15 = RaspInitializeCompositeGlyphData(v11, v29, (__int64)&v27, v24, v23[0], v30, v12 + v25 + 2, a3, &v26, v14);
    if ( v15 >= 0 )
    {
      v22 = v26;
    }
    else
    {
      while ( 1 )
      {
        v18 = v29[0];
        if ( (__int64 *)v29[0] == v29 )
          break;
        if ( *(__int64 **)(v29[0] + 8) != v29
          || (v19 = *(_QWORD *)v29[0], *(_QWORD *)(*(_QWORD *)v29[0] + 8LL) != v29[0]) )
        {
          __fastfail(3u);
        }
        v29[0] = *(_QWORD *)v29[0];
        *(_QWORD *)(v19 + 8) = v29;
        RaspFreeMemory(*(_QWORD *)(v18 + 16), v14, v16, v17);
        RaspFreeMemory(v18, v14, v20, v21);
      }
      v22 = v26;
      if ( v26 )
      {
        RaspFreeMemory(v26, v14, v16, v17);
        v22 = 0LL;
      }
    }
    *a4 = v22;
    return (unsigned int)v15;
  }
  return result;
}
