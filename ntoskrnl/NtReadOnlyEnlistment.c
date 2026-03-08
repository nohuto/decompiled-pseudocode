/*
 * XREFs of NtReadOnlyEnlistment @ 0x1403D26F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtReadOnlyEnlistment(EnlistmentHandle, TmVirtualClock);
}
