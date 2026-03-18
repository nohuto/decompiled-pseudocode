/*
 * XREFs of ProbeForRead @ 0x1406AD110
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
