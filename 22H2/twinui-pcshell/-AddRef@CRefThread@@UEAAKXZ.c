/*
 * XREFs of ?AddRef@CRefThread@@UEAAKXZ @ 0x18008D780
 * Callers:
 *     ?AddRef@CDuiRefThread@@WCA@EAAKXZ @ 0x180165CB0 (-AddRef@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefThread::AddRef(volatile signed __int32 **this)
{
  return (unsigned int)_InterlockedIncrement(this[1]);
}
