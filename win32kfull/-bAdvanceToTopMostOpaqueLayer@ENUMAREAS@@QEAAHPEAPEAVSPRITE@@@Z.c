/*
 * XREFs of ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FD1C
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02846B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bAdvanceToTopMostOpaqueLayer(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 9);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL;
  if ( *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23664LL) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 8);
      if ( (*(_DWORD *)v8 & 8) != 0 )
      {
        v9 = *(_DWORD **)(v8 + 184);
        if ( !v9
          || v9[12] <= 0x38u
          && v9[14] <= *(_DWORD *)v3
          && v9[16] >= *(_DWORD *)(v3 + 4)
          && v9[15] <= *((_DWORD *)this + 9)
          && v9[17] >= *((_DWORD *)this + 10) )
        {
          v6 = v3;
        }
      }
      if ( v3 >= v7 || *(_DWORD *)(v3 + 16) != *(_DWORD *)v3 )
        break;
      v3 += 16LL;
    }
  }
  if ( v6 && *a2 != *(struct SPRITE **)(v6 + 8) )
  {
    *((_QWORD *)this + 9) = v6;
    v2 = 1;
  }
  result = v2;
  *a2 = *(struct SPRITE **)(*((_QWORD *)this + 9) + 8LL);
  return result;
}
