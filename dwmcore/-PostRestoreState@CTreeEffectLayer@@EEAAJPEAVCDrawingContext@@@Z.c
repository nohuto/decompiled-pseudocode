/*
 * XREFs of ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18001A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::PostRestoreState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // r9d
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx

  v2 = 0;
  *((_BYTE *)a2 + 8171) = *((_BYTE *)this + 120);
  switch ( *((_DWORD *)this + 31) )
  {
    case 1:
      v2 = 1;
      break;
    case 2:
      v2 = 2;
      break;
    case 3:
      v2 = 6;
      break;
    case 4:
      v2 = 5;
      break;
    case 5:
      v2 = 7;
      break;
  }
  *((_DWORD *)a2 + 83) = v2;
  v3 = CDrawingContext::FlushD2D(a2);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xE0u, 0LL);
  return v5;
}
