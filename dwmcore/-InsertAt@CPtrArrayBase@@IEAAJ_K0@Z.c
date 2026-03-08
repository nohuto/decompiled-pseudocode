/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18004A77C
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180011C84 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180012804 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18008B318 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BAB8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800A9ED0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18020E408 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021B06C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180247970 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802534C0 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  CPtrArrayBase *v6; // r13
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // rdx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  double v15; // xmm0_8
  double v16; // xmm0_8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r13
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-48h]
  CPtrArrayBase *v24; // [rsp+70h] [rbp+8h]
  void *v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = this;
  v3 = *(_QWORD *)this;
  v6 = this;
  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v8 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = *v8;
  }
  else
  {
    v7 = *(_QWORD *)this & 1LL;
    v8 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( a3 > v7 )
  {
    v23 = 67;
LABEL_31:
    v22 = -2147024809;
    v9 = -2147024809;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v22, v23, 0LL);
    return v9;
  }
  v9 = 0;
  if ( (a2 & 3) != 0 )
  {
    v23 = 75;
    goto LABEL_31;
  }
  if ( !v7 )
  {
    *(_QWORD *)this = a2 | 1;
    return v9;
  }
  if ( v7 == 1 )
  {
    ProcessHeap = GetProcessHeap();
    v13 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, 0x30uLL);
    if ( v13 )
    {
      *(_QWORD *)v13 = 2LL;
      *(_QWORD *)(v13 + 8) = 4LL;
      *(_QWORD *)(v13 + 8 * (3 - a3)) = v8;
      *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
      *(_QWORD *)v6 = v13 | 2;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x61u, 0LL);
    }
    return v9;
  }
  v11 = v8[1];
  if ( v7 != v11 )
  {
    if ( a3 < v7 )
      memmove_0(&v8[a3 + 3], &v8[a3 + 2], 8 * (v7 - a3));
    v8[a3 + 2] = a2;
    ++*v8;
    return v9;
  }
  v25 = 0LL;
  if ( v11 < 0 )
  {
    this = (CPtrArrayBase *)(v11 & 1 | ((unsigned __int64)v11 >> 1));
    v15 = (double)(int)this + (double)(int)this;
  }
  else
  {
    v15 = (double)(int)v11;
  }
  v16 = v15 * 1.5;
  v17 = 0LL;
  if ( v16 >= 9.223372036854776e18 )
  {
    v16 = v16 - 9.223372036854776e18;
    if ( v16 < 9.223372036854776e18 )
    {
      LODWORD(this) = 0;
      v17 = 0x8000000000000000uLL;
    }
  }
  v18 = v17 + (unsigned int)(int)v16;
  if ( v18 + 2 <= v11 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024882, 0x7Cu, 0LL);
    return v9;
  }
  v19 = HrMalloc(8uLL, v18 + 2, &v25);
  v9 = v19;
  if ( v19 < 0 )
  {
    v22 = v19;
    v23 = 129;
    goto LABEL_33;
  }
  v20 = (unsigned __int64)v25;
  v21 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((char *)v25 + 16, (const void *)(v21 + 16), 8 * a3);
  *(_QWORD *)(v20 + 8 * a3 + 16) = a2;
  if ( a3 < v7 )
    memcpy_0((void *)(8 * a3 + v20 + 24), (const void *)(v21 + 8 * a3 + 16), 8 * (v7 - a3));
  operator delete((void *)v21);
  *(_QWORD *)v20 = v7 + 1;
  *(_QWORD *)(v20 + 8) = v18;
  *(_QWORD *)v24 = v20 | 2;
  return v9;
}
