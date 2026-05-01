/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x180285530
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x180165E50 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
