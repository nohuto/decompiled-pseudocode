/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18009DA14
 * Callers:
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x18001EF20 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18002998C (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180058F14 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D9B0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800A1A70 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800C0DCC (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800C1268 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800CD504 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180178F00 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800421E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  double v12; // xmm0_8
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-48h]
  CPtrArrayBase *v21; // [rsp+70h] [rbp+8h]
  void *v22; // [rsp+80h] [rbp+18h] BYREF

  v21 = this;
  v5 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v6 = *v5;
  else
    v6 = *(_QWORD *)this & 1LL;
  if ( a3 > v6 )
  {
    v20 = 42;
LABEL_31:
    v19 = -2147024809;
    v7 = -2147024809;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v19, v20, 0LL);
    return v7;
  }
  v7 = 0;
  if ( (a2 & 3) != 0 )
  {
    v20 = 52;
    goto LABEL_31;
  }
  if ( !v6 )
  {
    *(_QWORD *)this = a2 | 1;
    return v7;
  }
  if ( v6 == 1 )
  {
    v10 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = (unsigned __int64)DefaultHeap::Alloc(0x30uLL);
    v7 = -2147024882;
    if ( v11 )
    {
      v7 = 0;
      *(_QWORD *)v11 = 2LL;
      *(_QWORD *)(v11 + 8) = 4LL;
      *(_QWORD *)(v11 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v11 + 8 * a3 + 16) = a2;
      *(_QWORD *)v21 = v11 | 2;
      return v7;
    }
    v20 = 86;
    goto LABEL_36;
  }
  v9 = v5[1];
  if ( v6 != v9 )
  {
    if ( a3 < v6 )
      memmove_0(&v5[a3 + 3], &v5[a3 + 2], 8 * (v6 - a3));
    v5[a3 + 2] = a2;
    ++*v5;
    return v7;
  }
  v22 = 0LL;
  if ( v9 < 0 )
  {
    this = (CPtrArrayBase *)(v9 & 1 | ((unsigned __int64)v9 >> 1));
    v12 = (double)(int)this + (double)(int)this;
  }
  else
  {
    v12 = (double)(int)v9;
  }
  v13 = v12 * 1.5;
  v14 = 0LL;
  if ( v13 >= 9.223372036854776e18 )
  {
    v13 = v13 - 9.223372036854776e18;
    if ( v13 < 9.223372036854776e18 )
    {
      this = (CPtrArrayBase *)0x8000000000000000LL;
      v14 = 0x8000000000000000uLL;
    }
  }
  v15 = v14 + (unsigned int)(int)v13 + 2LL;
  if ( v15 <= v9 )
  {
    v7 = -2147024882;
    v20 = 121;
LABEL_36:
    v19 = -2147024882;
    goto LABEL_33;
  }
  v16 = HrMalloc(8uLL, v14 + (unsigned int)(int)v13 + 2LL, &v22);
  v7 = v16;
  if ( v16 < 0 )
  {
    v19 = v16;
    v20 = 128;
    goto LABEL_33;
  }
  v17 = (unsigned __int64)v22;
  v18 = *(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((char *)v22 + 16, (const void *)(v18 + 16), 8 * a3);
  *(_QWORD *)(v17 + 8 * a3 + 16) = a2;
  if ( a3 < v6 )
    memcpy_0((void *)(v17 + 24 + 8 * a3), (const void *)(v18 + 8 * (a3 + 2)), 8 * (v6 - a3));
  operator delete((void *)v18);
  *(_QWORD *)v17 = v6 + 1;
  *(_QWORD *)(v17 + 8) = v15 - 2;
  *(_QWORD *)v21 = v17 | 2;
  return v7;
}
