/*
 * XREFs of EngProbeForRead @ 0x1C014B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngProbeForRead(PVOID Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Address + Length > MmUserProbeAddress || (char *)Address + Length < Address )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
