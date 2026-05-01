/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x180285380
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x180165CE0 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
