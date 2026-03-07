__int64 __fastcall ESTROBJ::vCharPos_H2(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  struct _GLYPHPOS *v6; // rbp
  int v8; // r13d
  unsigned __int16 *v10; // r9
  struct RFONTOBJ *v13; // rdx
  int v14; // esi
  unsigned int v15; // ecx
  int v16; // esi
  __int64 result; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  GLYPHDEF *pgdf; // rcx
  int v21; // ecx
  __int64 v22; // r8
  int v23; // ecx

  v6 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v8 = a5;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  a5 = 0;
  v6->ptl.x = (a4 + 8) >> 4;
  v6->ptl.y = (v8 + 8) >> 4;
  v13 = (struct RFONTOBJ *)*a1;
  v14 = *a1;
  a1[1] |= *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x71 | 2;
  v15 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  a1[2] = v15;
  v16 = 16 * v15 * v14;
  a1[28] = v16;
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, v13, v6, v10, &a5, a2, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    v18 = a1[58];
    if ( (v18 & 0x1400) != 0 )
    {
      return ESTROBJ::vCharPos_H3(
               (__int64)a1,
               a2,
               a3,
               a4,
               v8,
               0,
               0,
               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 288LL),
               a6,
               &a5);
    }
    else
    {
      if ( a5 )
      {
        v19 = *((_QWORD *)a1 + 8);
        v18 |= 2u;
        a1[58] = v18;
        *((_QWORD *)a1 + 4) = v19;
      }
      pgdf = v6->pgdf;
      if ( (a1[1] & 0x10) != 0 )
      {
        a1[24] = 0;
        v21 = v16;
      }
      else
      {
        a1[24] = (unsigned int)pgdf[2].pgb;
        v21 = v16 + HIDWORD(pgdf[2].ppo) - 16 * a1[2];
      }
      a1[26] = v21;
      v22 = *(_QWORD *)a3;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
      {
        a1[25] = -*(_DWORD *)(v22 + 320);
        result = *(_QWORD *)a3;
        v23 = -*(_DWORD *)(*(_QWORD *)a3 + 316LL);
      }
      else
      {
        a1[25] = *(_DWORD *)(v22 + 316);
        result = *(_QWORD *)a3;
        v23 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
      }
      a1[27] = v23;
      a1[21] = 0;
      a1[20] = v16;
      a1[58] = v18 | 4;
    }
  }
  return result;
}
