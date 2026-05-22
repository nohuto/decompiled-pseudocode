/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x18003A8A0
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x18004B630 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WEA@EAAKXZ @ 0x18004BAC0 (-AddRef@MPCFocusTarget@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
