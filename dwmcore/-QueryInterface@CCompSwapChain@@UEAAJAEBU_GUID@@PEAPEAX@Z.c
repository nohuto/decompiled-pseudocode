/*
 * XREFs of ?QueryInterface@CCompSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029B614
 * Callers:
 *     ?QueryInterface@CCompSwapChain@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BED0 (-QueryInterface@CCompSwapChain@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::QueryInterface(CCompSwapChain *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ICompositionSwapChain>::InternalQueryInterface((_QWORD *)this - 49, a2, (__int64 *)a3);
}
