/*
 * XREFs of PspAttachSession @ 0x140660A48
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(__int64 a1, __int64 a2, _KPROCESS **a3)
{
  _KPROCESS *SessionById; // rax
  struct _DMA_ADAPTER *v6; // rbx
  int v7; // edi

  SessionById = (_KPROCESS *)MmGetSessionById(a1, a2);
  v6 = (struct _DMA_ADAPTER *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    HalPutDmaAdapter(v6);
  return (unsigned int)v7;
}
