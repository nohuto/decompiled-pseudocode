/*
 * XREFs of ?QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuiRefThread::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDuiRefThread::QueryInterface((CDuiRefThread *)(a1 - 32), a2, a3);
}
