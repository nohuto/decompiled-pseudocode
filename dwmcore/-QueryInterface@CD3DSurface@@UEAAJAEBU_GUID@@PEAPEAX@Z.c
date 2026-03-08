/*
 * XREFs of ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180299034
 * Callers:
 *     ?QueryInterface@CD3DSurface@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BB50 (-QueryInterface@CD3DSurface@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IDDASwapChain>::InternalQueryInterface((_QWORD *)this - 29, a2, (__int64 *)a3);
}
