/*
 * XREFs of NtPrepareComplete @ 0x1403D25F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareComplete(EnlistmentHandle, TmVirtualClock);
}
