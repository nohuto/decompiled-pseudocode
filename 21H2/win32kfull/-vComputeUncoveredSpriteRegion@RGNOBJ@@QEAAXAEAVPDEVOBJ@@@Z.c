/*
 * XREFs of ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00F0A24
 * Callers:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F0934 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F0830 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMUNCOVERED@@QEAAHPEAU_RECTL@@@Z @ 0x1C00F0B9C (-bEnum@ENUMUNCOVERED@@QEAAHPEAU_RECTL@@@Z.c)
 */

void __fastcall RGNOBJ::vComputeUncoveredSpriteRegion(RGNOBJ *this, struct PDEVOBJ *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  LONG top; // edx
  __int64 v9; // r11
  LONG bottom; // edi
  int v11; // esi
  _DWORD *v12; // rbx
  struct _RECTL v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)a2;
  v13 = 0LL;
  v5 = *(_DWORD **)(v2 + 88);
  RGNOBJ::vSet(this);
  if ( !*(_DWORD *)(v3 + 204) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)(v3 + 88));
  v6 = *(_QWORD *)(v3 + 224);
  v14 = *(_DWORD *)(v3 + 140);
  v15 = v6;
  v17 = v6 + 8;
  v16 = *(_QWORD *)(v6 + 8) + v6;
  if ( (unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v14, &v13) )
  {
    v7 = 0x80000000;
    top = v13.top;
    v9 = 0LL;
    bottom = v13.top;
    v11 = *(_DWORD *)(*(_QWORD *)this + 84LL);
    while ( 1 )
    {
      if ( top != v7 )
      {
        ++v11;
        v5[1] = v7;
        v5[2] = bottom;
        *v5 = v9;
        v5[v9 + 3] = v9;
        if ( top != bottom )
        {
          ++v11;
          v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
          *v5 = 0;
          v5[1] = bottom;
          v5[2] = top;
          v5[3] = 0;
        }
        v7 = top;
        bottom = v13.bottom;
        v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
        v9 = 0LL;
      }
      v5[v9 + 3] = v13.left;
      v5[(unsigned int)(v9 + 1) + 3] = v13.right;
      if ( !(unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v14, &v13) )
        break;
      top = v13.top;
    }
    *v5 = v9;
    v5[1] = v7;
    v5[2] = bottom;
    v5[v9 + 3] = v9;
    v12 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    *v12 = 0;
    v12[1] = bottom;
    v12[2] = 0x7FFFFFFF;
    v12[3] = 0;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v12 + (unsigned int)(4 * *v12 + 16);
    *(_DWORD *)(*(_QWORD *)this + 84LL) = v11 + 1;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 80LL) += *(_DWORD *)(*(_QWORD *)this + 40LL) - *(_DWORD *)(*(_QWORD *)this + 88LL);
  }
}
