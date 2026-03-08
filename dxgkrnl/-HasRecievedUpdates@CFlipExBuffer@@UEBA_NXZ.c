/*
 * XREFs of ?HasRecievedUpdates@CFlipExBuffer@@UEBA_NXZ @ 0x1C0014770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::HasRecievedUpdates(CFlipExBuffer *this)
{
  return *((_DWORD *)this + 95) != -1;
}
