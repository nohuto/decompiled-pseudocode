/*
 * XREFs of NtDeleteAtom @ 0x140686070
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140686200 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  PVOID AtomTableHandle; // [rsp+38h] [rbp+10h] BYREF

  AtomTableHandle = 0LL;
  PsInvokeWin32Callout(2, (__int64)&AtomTableHandle, 0, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
