/*
 * XREFs of ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800194D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019550 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800E07BC (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 */

__int64 __fastcall CTreeEffectLayer::ApplyState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebp

  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8171);
  v3 = 0;
  v4 = *((unsigned int *)a2 + 83);
  *((_BYTE *)a2 + 8171) = 0;
  *((_DWORD *)this + 31) = D2DInterpolationModeFromMilInterpolationMode(v4);
  *((_DWORD *)a2 + 83) = 1;
  v6 = CExternalLayer::ApplyState(this, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x229u, 0LL);
    *((_BYTE *)a2 + 8171) = *((_BYTE *)this + 120);
    switch ( *((_DWORD *)this + 31) )
    {
      case 1:
        v3 = 1;
        break;
      case 2:
        v3 = 2;
        break;
      case 3:
        v3 = 6;
        break;
      case 4:
        v3 = 5;
        break;
      case 5:
        v3 = 7;
        break;
    }
    *((_DWORD *)a2 + 83) = v3;
  }
  return v8;
}
