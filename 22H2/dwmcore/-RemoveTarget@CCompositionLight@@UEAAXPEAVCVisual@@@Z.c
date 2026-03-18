/*
 * XREFs of ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x180219840
 * Callers:
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180226C90 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800FB270 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveTarget(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 11, &v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 16, &v3);
}
