/*
 * XREFs of SeAuditingFileEvents @ 0x140920920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1D5C4 && AccessGranted
    || byte_140C1D5C5 && !AccessGranted
    || byte_140C1D5C6 && AccessGranted
    || byte_140C1D5C7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
