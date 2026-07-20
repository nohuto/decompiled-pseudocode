/*
 * XREFs of SmpMarkThreadFree @ 0x1400036D4
 * Callers:
 *     SmpApiCallback @ 0x140002A70 (SmpApiCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpMarkThreadFree(__int64 a1)
{
  unsigned int v2; // edi

  RtlAcquireSRWLockExclusive(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 20))-- < *(_DWORD *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 20) + 1;
    if ( (int)TpSetPoolMinThreads(*(_QWORD *)(a1 + 8), v2) >= 0 )
      *(_DWORD *)(a1 + 16) = v2;
  }
  return RtlReleaseSRWLockExclusive(a1);
}
