/*
 * XREFs of RaspGetCompositeGlyphList @ 0x1405C5ADC
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x1405C6190 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403B3160 (RaspMapGlyphIndexToLocation.c)
 *     FioFwReadUshortAtOffset @ 0x1403B31FC (FioFwReadUshortAtOffset.c)
 *     RaspAllocateMemory @ 0x1403B3A08 (RaspAllocateMemory.c)
 *     RaspLoadGlyphData @ 0x1403B3B0C (RaspLoadGlyphData.c)
 */

__int64 __fastcall RaspGetCompositeGlyphList(
        __int64 a1,
        int a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r14
  _QWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 *v14; // r12
  __int64 Memory; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int16 v20; // r12
  unsigned int v21; // ebx
  char v22; // ah
  int GlyphData; // r15d
  _WORD *v24; // rcx
  _WORD *v25; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r8
  _DWORD *v30; // r9
  _WORD v31[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v32[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v33; // [rsp+38h] [rbp-18h] BYREF
  __int16 v34; // [rsp+3Ch] [rbp-14h] BYREF
  int v35; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v36; // [rsp+48h] [rbp-8h] BYREF
  __int16 v37; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v38; // [rsp+A0h] [rbp+50h]
  _WORD *v39; // [rsp+A8h] [rbp+58h]

  v39 = a4;
  v38 = a3;
  v31[0] = 0;
  v34 = 0;
  v32[0] = 0;
  *a6 = 0;
  v35 = 0;
  v37 = 0;
  v36 = 0LL;
  *a5 = 0;
  *a4 = 0;
  *a3 = 0;
  if ( a2 == -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  v10 = v9 + a2;
  LOWORD(v33) = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v11, (unsigned int)(v9 + a2), &v33);
  if ( (v33 & 0x8000u) == 0 )
    return 3221225485LL;
  v12 = a7;
  v13 = v10 + 10;
  v33 = v13;
  a7[1] = a7;
  *v12 = v12;
  while ( 1 )
  {
    v14 = a8;
    Memory = RaspAllocateMemory(0x2AuLL, a8);
    v18 = Memory;
    if ( !Memory )
    {
      GlyphData = -1073741670;
      goto LABEL_27;
    }
    *(_OWORD *)Memory = 0LL;
    *(_OWORD *)(Memory + 16) = 0LL;
    *(_QWORD *)(Memory + 32) = 0LL;
    *(_WORD *)(Memory + 40) = 0;
    v19 = (__int64 *)v12[1];
    if ( (_QWORD *)*v19 != v12 )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)v18 = v12;
    *(_QWORD *)(v18 + 8) = v19;
    *v19 = v18;
    v12[1] = v18;
    FioFwReadUshortAtOffset(v11, v13, &v34);
    v20 = v34;
    v21 = v13 + 2;
    *(_WORD *)(v18 + 24) = v34;
    FioFwReadUshortAtOffset(v11, v21, v32);
    *(_WORD *)(v18 + 26) = v32[0];
    FioFwReadUshortAtOffset(v11, v21 + 2, v31);
    if ( (v20 & 1) != 0 )
    {
      *(_WORD *)(v18 + 28) = v31[0];
      FioFwReadUshortAtOffset(v11, v21 + 4, v31);
      v13 = v21 + 6;
      *(_WORD *)(v18 + 30) = v31[0];
    }
    else
    {
      v13 = v21 + 4;
      v22 = HIBYTE(v31[0]);
      *(_BYTE *)(v18 + 29) = v31[0];
      *(_BYTE *)(v18 + 28) = v22;
    }
    if ( (v20 & 8) == 0 )
    {
      if ( (v20 & 0x40) != 0 )
      {
        FioFwReadUshortAtOffset(v11, v13, &v37);
        *(_WORD *)(v18 + 32) = v37;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v37);
        *(_WORD *)(v18 + 34) = v37;
      }
      else
      {
        if ( (v20 & 0x80u) == 0 )
          goto LABEL_18;
        FioFwReadUshortAtOffset(v11, v13, &v37);
        *(_WORD *)(v18 + 32) = v37;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v37);
        v13 += 4;
        *(_WORD *)(v18 + 34) = v37;
        FioFwReadUshortAtOffset(v11, v13, &v37);
        *(_WORD *)(v18 + 36) = v37;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v37);
        *(_DWORD *)(v18 + 38) = v37;
      }
      v13 += 4;
      goto LABEL_18;
    }
    FioFwReadUshortAtOffset(v11, v13, &v37);
    v13 += 2;
    *(_WORD *)(v18 + 32) = v37;
LABEL_18:
    GlyphData = RaspMapGlyphIndexToLocation(a1, v32[0], &v35);
    if ( GlyphData < 0 )
      break;
    GlyphData = RaspLoadGlyphData(a1, v35, (int)v32, (__int64 *)&v36, a8);
    if ( GlyphData < 0 )
      break;
    v24 = v38;
    *(_QWORD *)(v18 + 16) = v36;
    v25 = v36;
    *v24 += v36[12];
    *v39 += *v25;
    if ( (v20 & 0x20) == 0 )
    {
      if ( (v20 & 0x100) != 0 )
      {
        FioFwReadUshortAtOffset(v11, v13, a5);
        v13 += 2;
      }
      *a6 = v13 - v33;
      return (unsigned int)GlyphData;
    }
  }
  v14 = a8;
LABEL_27:
  while ( 1 )
  {
    v27 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 == v12 )
      return (unsigned int)GlyphData;
    if ( (_QWORD *)v27[1] != v12 )
      goto LABEL_31;
    v28 = *v27;
    if ( *(_QWORD **)(*v27 + 8LL) != v27 )
      goto LABEL_31;
    *v12 = v28;
    *(_QWORD *)(v28 + 8) = v12;
    RaspFreeMemory(v27[2], v14, v16, v17);
    RaspFreeMemory((__int64)v27, v14, v29, v30);
  }
}
