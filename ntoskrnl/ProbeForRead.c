/*
 * XREFs of ProbeForRead @ 0x140768A70
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
