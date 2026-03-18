/*
 * XREFs of CcRepinBcb @ 0x1403A89A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __stdcall CcRepinBcb(PVOID Bcb)
{
  __int64 v2; // rcx

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x25FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquireFastMutex((PFAST_MUTEX)(*((_QWORD *)Bcb + 22) + 288LL));
  v2 = *((_QWORD *)Bcb + 22);
  ++*((_DWORD *)Bcb + 16);
  ExReleaseFastMutex((PFAST_MUTEX)(v2 + 288));
}
