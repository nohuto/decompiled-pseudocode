/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C02825DC
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010E078 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02846B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284A48 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C001867C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  struct _SURFOBJ *v6; // rbx
  signed int ClearBits; // eax
  ULONG v8; // edi
  signed int v9; // r15d
  struct _SURFOBJ *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  signed int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  struct _SURFOBJ *Surface; // rax
  char v19; // [rsp+70h] [rbp+8h] BYREF

  *a3 = -1;
  v6 = 0LL;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v19, (struct _SPRITESTATE *)((char *)a1 + 688));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)a1 + 664), 1u, 0);
  v8 = ClearBits;
  v9 = -1;
  if ( ClearBits == -1 )
  {
    v12 = -1LL;
    v11 = -1LL;
  }
  else
  {
    v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + ClearBits + 19);
    v11 = ClearBits;
    v6 = v10;
    v12 = ClearBits;
    if ( v10 && v10->sizlBitmap.cx >= a2->right - a2->left && v10->sizlBitmap.cy >= a2->bottom - a2->top )
    {
LABEL_21:
      *a3 = v8;
      RtlSetBits((PRTL_BITMAP)((char *)a1 + 664), v8, 1u);
      goto LABEL_22;
    }
  }
  vSpDeleteSurface(v6);
  if ( v8 == -1 )
    v12 = v11;
  else
    *((_QWORD *)a1 + v12 + 19) = 0LL;
  v13 = *((_QWORD *)a1 + 1);
  v14 = -1;
  while ( v13 )
  {
    v15 = *(_DWORD *)(v13 + 88) - *(_DWORD *)(v13 + 80);
    if ( v15 <= v9 )
      v15 = v9;
    v16 = *(_DWORD *)(v13 + 92) - *(_DWORD *)(v13 + 84);
    v13 = *(_QWORD *)(v13 + 24);
    v9 = v15;
    if ( v16 <= v14 )
      v16 = v14;
    v14 = v16;
  }
  Surface = psoSpCreateSurface(a1, 0, v9, v14);
  v6 = Surface;
  if ( Surface )
  {
    if ( v8 != -1 )
      *((_QWORD *)a1 + v12 + 19) = Surface;
    Surface->fjBitmap |= 4u;
    if ( v8 != -1 )
      goto LABEL_21;
  }
LABEL_22:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v19);
  return v6;
}
