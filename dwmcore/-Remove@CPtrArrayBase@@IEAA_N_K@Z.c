/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180011C84 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180012804 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800984FC (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18009A15C (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18020E408 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x18021AEF4 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021B06C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180245540 (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1800D588C (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 */

char __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 *v6; // rax
  char v7; // cl
  unsigned __int64 v9; // rdx
  __int64 v10; // r10

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v6 = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = *v6;
  }
  else
  {
    v5 = *(_QWORD *)this & 1LL;
    v6 = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v7 = 0;
  if ( v5 == 1 )
  {
    if ( a2 == v6 )
    {
      *(_QWORD *)this = 0LL;
      return 1;
    }
  }
  else if ( v5 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( a2 == (unsigned __int64 *)v6[v10 + 2] )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9;
    }
    while ( (unsigned int)v9 < v5 );
    if ( v9 < v5 )
    {
      CPtrArrayBase::RemoveAt(this, v9, 1uLL);
      return 1;
    }
  }
  return v7;
}
