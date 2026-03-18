/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     SetRectRgnIndirect @ 0x1C0027A70 (SetRectRgnIndirect.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCreateRectRgn @ 0x1C008E350 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C016EC50 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0177EF0 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(struct _RECTL **this, struct _RECTL *a2)
{
  struct _RECTL *v2; // r8
  bool v3; // zf
  _DWORD *v4; // r9
  _DWORD *v5; // r9
  char *v6; // r9
  _DWORD *v7; // r9
  _DWORD *v8; // r9
  struct _RECTL *v9; // rcx
  __int64 v10; // rax

  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v9 = *this;
    v10 = *(_QWORD *)&v9[5].right;
    v9[5].left = 16;
    v9[5].top = 1;
    *(_QWORD *)&v9[6].left = 0LL;
    *(_QWORD *)&v9[6].right = 0LL;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0x80000000;
    *(_QWORD *)(v10 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)&v9[2].right = v10 + 16;
  }
  else
  {
    v2 = *this;
    v3 = (*this)[5].left == 56;
    v4 = *(_DWORD **)&(*this)[5].right;
    (*this)[6] = *a2;
    if ( v3 )
    {
      v4[2] = a2->top;
      v7 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      v7[1] = a2->top;
      v7[2] = a2->bottom;
      v7[3] = a2->left;
      v7[4] = a2->right;
      v8 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      v8[1] = a2->bottom;
      *(_QWORD *)&v2[2].right = (char *)v8 + (unsigned int)(4 * *v8 + 16);
    }
    else
    {
      v2[5].left = 56;
      v2[5].top = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v5 = v4 + 4;
      *v5 = 2;
      v5[1] = a2->top;
      v5[2] = a2->bottom;
      v5[3] = a2->left;
      v5[4] = a2->right;
      v5[5] = 2;
      v6 = (char *)v5 + (unsigned int)(4 * *v5 + 16);
      *(_DWORD *)v6 = 0;
      *((_DWORD *)v6 + 1) = a2->bottom;
      *((_QWORD *)v6 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)&v2[2].right = v6 + 16;
    }
  }
}
