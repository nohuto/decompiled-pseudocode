/*
 * XREFs of ProbeForRead @ 0x1407B9E60
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
