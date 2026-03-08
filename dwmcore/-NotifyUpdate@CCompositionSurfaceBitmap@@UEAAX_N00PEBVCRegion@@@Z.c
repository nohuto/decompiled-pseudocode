/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@@Z @ 0x1800BBBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        __int64 a2,
        char a3,
        char a4,
        const struct CRegion *a5)
{
  __int64 v5; // rdx

  v5 = 0LL;
  if ( !a3 && !a4 )
  {
    v5 = 1LL;
    *((_QWORD *)this + 3) = a5;
  }
  CResource::NotifyOnChanged((char *)this - 88, v5, (char *)this - 88);
}
