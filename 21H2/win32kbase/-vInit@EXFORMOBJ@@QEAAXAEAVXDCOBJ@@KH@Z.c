/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540
 * Callers:
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0031718 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0031740 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0032358 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C009C250 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0168F80 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0169B88 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C0169E60 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  DC *v8; // rcx
  int v9; // eax
  DC *v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // esi
  __int64 v14; // rax
  DC *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  DC *v19; // r8
  DC *v20; // rcx
  DC *v21; // rcx
  char *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v8 = *a2;
    v9 = *((_DWORD *)*a2 + 130);
    if ( (v9 & 1) != 0 && (v9 & 2) == 0 )
    {
      *((_DWORD *)v8 + 130) = v9 | 2;
      DC::vMarkTransformDirty(v8);
      DC::vUpdateCachedDPIScaleValue(v20);
    }
  }
  v10 = *a2;
  v11 = *((_QWORD *)*a2 + 122);
  if ( (*(_DWORD *)(v11 + 340) & 0x1E000) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 152) & 0x100) != 0 )
    {
      v23 = 0;
      v22 = (char *)v10 + 356;
      if ( v10 != (DC *)-356LL )
      {
        EXFORMOBJ::bXform((EXFORMOBJ *)&v22, (struct _POINTFIX *)(v11 + 8), (struct _POINTL *)(v11 + 216), 1uLL);
        v10 = *a2;
      }
      *(_DWORD *)(*((_QWORD *)v10 + 122) + 152LL) &= ~0x100u;
      v10 = *a2;
    }
    DC::vUpdateWtoDXform(v10);
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) |= 0x200u;
    v19 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x80u) != 0 )
    {
      v23 = 0;
      v22 = (char *)v19 + 320;
      if ( v19 != (DC *)-320LL )
      {
        DC::vRealizeLineAttrs(v19, (struct EXFORMOBJ *)&v22);
        v19 = *a2;
      }
      *((_DWORD *)v19 + 63) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x80u;
      v19 = *a2;
    }
    *(_DWORD *)(*((_QWORD *)v19 + 122) + 340LL) |= 0x10u;
  }
  v12 = a3 - 515;
  if ( !v12 )
  {
    v14 = (__int64)*a2 + 392;
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = (__int64)*a2 + 320;
LABEL_7:
    *(_QWORD *)this = v14;
    goto LABEL_8;
  }
  if ( v13 != 510 )
    goto LABEL_22;
  *(_QWORD *)this = (char *)*a2 + 356;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x10) == 0 )
    goto LABEL_8;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 320)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v17 = *(_QWORD *)this;
      v18 = *(_QWORD *)(v16 + 976);
      *(_OWORD *)(v18 + 68) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v18 + 84) = *(_OWORD *)(v17 + 16);
      *(_DWORD *)(v18 + 100) = *(_DWORD *)(v17 + 32);
    }
  }
  else
  {
LABEL_22:
    *(_QWORD *)this = 0LL;
  }
LABEL_8:
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
