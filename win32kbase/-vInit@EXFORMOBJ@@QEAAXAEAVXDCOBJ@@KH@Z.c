/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0057600
 * Callers:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 * Callees:
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0005598 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C000DFF0 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0059210 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00597D0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C017F9D4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C017FDC0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  DC *v8; // rcx
  __int64 v9; // rdx
  int v10; // esi
  int v11; // esi
  __int64 v12; // rax
  DC *v13; // rcx
  int v14; // eax
  DC *v15; // rcx
  DC *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  DC *v20; // rcx
  DC *v21; // rcx
  char *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v13 = *a2;
    v14 = *((_DWORD *)*a2 + 130);
    if ( (v14 & 1) != 0 && (v14 & 2) == 0 )
    {
      *((_DWORD *)v13 + 130) = v14 | 2;
      DC::vMarkTransformDirty(v13);
      DC::vUpdateCachedDPIScaleValue(v20);
    }
  }
  v8 = *a2;
  v9 = *((_QWORD *)*a2 + 122);
  if ( (*(_DWORD *)(v9 + 340) & 0x1E000) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 152) & 0x100) != 0 )
    {
      v23 = 0;
      v22 = (char *)v8 + 356;
      if ( v8 != (DC *)-356LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v22, (struct _POINTFIX *)(v9 + 8), (struct _POINTL *)(v9 + 216), 1uLL);
      *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(*a2);
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) |= 0x200u;
    v16 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x80u) != 0 )
    {
      v23 = 0;
      v22 = (char *)v16 + 320;
      if ( v16 != (DC *)-320LL )
        DC::vRealizeLineAttrs(v16, (struct EXFORMOBJ *)&v22);
      *((_DWORD *)*a2 + 63) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) |= 0x10u;
  }
  v10 = a3 - 515;
  if ( !v10 )
  {
    v12 = (__int64)*a2 + 392;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = (__int64)*a2 + 320;
LABEL_6:
    *(_QWORD *)this = v12;
    goto LABEL_7;
  }
  if ( v11 != 510 )
    goto LABEL_25;
  *(_QWORD *)this = (char *)*a2 + 356;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x10) == 0 )
    goto LABEL_7;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 320)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v18 = *(_QWORD *)this;
      v19 = *(_QWORD *)(v17 + 976);
      *(_OWORD *)(v19 + 68) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v19 + 84) = *(_OWORD *)(v18 + 16);
      *(_DWORD *)(v19 + 100) = *(_DWORD *)(v18 + 32);
    }
  }
  else
  {
LABEL_25:
    *(_QWORD *)this = 0LL;
  }
LABEL_7:
  if ( a4 )
  {
    v15 = *a2;
    if ( (*((_BYTE *)*a2 + 520) & 3) == 3 )
    {
      *((_DWORD *)v15 + 130) = *((_DWORD *)*a2 + 130) & 0xFFFFFFFD;
      DC::vMarkTransformDirty(v15);
      DC::vUpdateCachedDPIScaleValue(v21);
    }
  }
}
