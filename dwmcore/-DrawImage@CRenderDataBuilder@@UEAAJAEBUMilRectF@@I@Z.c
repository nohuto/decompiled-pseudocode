/*
 * XREFs of ?DrawImage@CRenderDataBuilder@@UEAAJAEBUMilRectF@@I@Z @ 0x18001C300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawImage(CRenderDataBuilder *this, const struct MilRectF *a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int128 v10; // xmm0

  v6 = DynArrayImpl<0>::Grow((int)this + 16, 1, 28, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x8Fu, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v9 = 28;
    *(_OWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *(_DWORD *)(v9 + 4) = 446;
    v10 = *(_OWORD *)a2;
    *(_DWORD *)(v9 + 8) = a3;
    *(_OWORD *)(v9 + 12) = v10;
    *((_DWORD *)this + 10) += 28;
  }
  return v8;
}
