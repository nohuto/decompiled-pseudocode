/*
 * XREFs of ?Pop@CRenderDataBuilder@@UEAAJXZ @ 0x1800F9310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Pop(CRenderDataBuilder *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  _DWORD *v5; // rcx

  v2 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 8, 0, 0LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xFDu, 0LL);
  }
  else
  {
    v5 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    *v5 = 8;
    v5[1] = 452;
    *((_DWORD *)this + 10) += 8;
    --*((_DWORD *)this + 2);
  }
  return v4;
}
