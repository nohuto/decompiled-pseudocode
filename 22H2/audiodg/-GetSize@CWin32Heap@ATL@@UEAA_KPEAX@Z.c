/*
 * XREFs of ?GetSize@CWin32Heap@ATL@@UEAA_KPEAX@Z @ 0x140050440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SIZE_T __fastcall ATL::CWin32Heap::GetSize(HANDLE *this, void *a2)
{
  return HeapSize(this[1], 0, a2);
}
