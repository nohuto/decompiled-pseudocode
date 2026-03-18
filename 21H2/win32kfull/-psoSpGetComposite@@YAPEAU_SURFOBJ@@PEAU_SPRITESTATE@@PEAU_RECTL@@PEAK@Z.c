/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01566D4
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281178 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00B7E14 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  struct _SURFOBJ *v6; // rbx
  signed int ClearBits; // eax
  ULONG v8; // edi
  int v9; // r15d
  struct _SURFOBJ *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r10
  signed int v13; // r8d
  signed int v14; // r9d
  struct _SURFOBJ *Surface; // rax
  int v17; // edx
  signed int v18; // eax
  int v19; // ecx
  signed int v20; // eax
  int v21; // ecx
  char v22; // [rsp+60h] [rbp+8h] BYREF

  *a3 = -1;
  v6 = 0LL;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v22, (struct _SPRITESTATE *)((char *)a1 + 688));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)a1 + 664), 1u, 0);
  v8 = ClearBits;
  v9 = -1;
  if ( ClearBits == -1 )
  {
    v11 = -1LL;
  }
  else
  {
    v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + ClearBits + 19);
    v11 = ClearBits;
    v6 = v10;
    if ( v10 && v10->sizlBitmap.cx >= a2->right - a2->left && v10->sizlBitmap.cy >= a2->bottom - a2->top )
    {
LABEL_12:
      *a3 = v8;
      RtlSetBits((PRTL_BITMAP)((char *)a1 + 664), v8, 1u);
      goto LABEL_13;
    }
  }
  vSpDeleteSurface(v6);
  if ( v8 != -1 )
    *((_QWORD *)a1 + v11 + 19) = 0LL;
  v12 = *((_QWORD *)a1 + 1);
  v13 = -1;
  v14 = -1;
  while ( v12 )
  {
    v17 = *(_DWORD *)(v12 + 88) - *(_DWORD *)(v12 + 80);
    v18 = v17;
    if ( v17 <= v13 )
      v18 = v13;
    v19 = *(_DWORD *)(v12 + 92) - *(_DWORD *)(v12 + 84);
    v12 = *(_QWORD *)(v12 + 24);
    v13 = v18;
    v20 = v19;
    if ( v19 <= v14 )
      v20 = v14;
    v21 = v17 * v19;
    v14 = v20;
    if ( v21 <= v9 )
      v21 = v9;
    v9 = v21;
  }
  Surface = psoSpCreateSurface(a1, 0, v13, v14);
  v6 = Surface;
  if ( Surface )
  {
    if ( v8 != -1 )
      *((_QWORD *)a1 + v11 + 19) = Surface;
    Surface->fjBitmap |= 4u;
    if ( v8 != -1 )
      goto LABEL_12;
  }
LABEL_13:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v22);
  return v6;
}
