/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180299048
 * Callers:
 *     ?Release@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BB70 (-Release@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILRefCountBaseT<IDeviceResource>::InternalRelease((volatile signed __int32 *)this - 58);
}
