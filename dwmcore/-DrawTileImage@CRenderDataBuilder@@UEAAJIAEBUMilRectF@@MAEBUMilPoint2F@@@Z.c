/*
 * XREFs of ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUMilRectF@@MAEBUMilPoint2F@@@Z @ 0x1800FA520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawTileImage(
        CRenderDataBuilder *this,
        int a2,
        const struct MilRectF *a3,
        float a4,
        const struct MilPoint2F *a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm0

  v8 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 40, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD3u, 0LL);
  }
  else
  {
    v11 = *((unsigned int *)this + 10);
    v12 = *((_QWORD *)this + 2);
    *(_DWORD *)(v11 + v12) = 40;
    *(_QWORD *)(v11 + v12 + 8) = 0LL;
    *(_QWORD *)(v11 + v12 + 16) = 0LL;
    *(_QWORD *)(v11 + v12 + 24) = 0LL;
    *(_QWORD *)(v11 + v12 + 32) = 0LL;
    *(_DWORD *)(v11 + v12 + 4) = 450;
    *(_DWORD *)(v11 + v12 + 8) = a2;
    v13 = *(_OWORD *)a3;
    *(float *)(v11 + v12 + 28) = a4;
    *(_OWORD *)(v11 + v12 + 12) = v13;
    *(_QWORD *)(v11 + v12 + 32) = *(_QWORD *)a5;
    *((_DWORD *)this + 10) += 40;
  }
  return v10;
}
