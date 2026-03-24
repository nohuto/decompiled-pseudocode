/*
 * XREFs of SeAuditingFileEvents @ 0x1409207C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1D5A4 && AccessGranted
    || byte_140C1D5A5 && !AccessGranted
    || byte_140C1D5A6 && AccessGranted
    || byte_140C1D5A7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
