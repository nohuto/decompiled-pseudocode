/*
 * XREFs of LockThreadByClientId @ 0x1C0082AE4
 * Callers:
 *     PtiFromThreadId @ 0x1C0082A20 (PtiFromThreadId.c)
 *     GetTargetPti @ 0x1C0128A30 (GetTargetPti.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockThreadByClientId(void *a1, PETHREAD *a2)
{
  NTSTATUS v3; // edi

  v3 = PsLookupThreadByThreadId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetThreadSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  return 3221225473LL;
}
