/*
 * XREFs of ?AddRef@CD3DSurface@@UEAAKXZ @ 0x180298A5C
 * Callers:
 *     ?AddRef@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BB30 (-AddRef@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::AddRef(CD3DSurface *this)
{
  return CMILRefCountImpl::AddReference((CD3DSurface *)((char *)this - 216));
}
