/*
 * XREFs of SeAuditingFileEvents @ 0x1409CD560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C37424 && AccessGranted
    || byte_140C37425 && !AccessGranted
    || byte_140C37426 && AccessGranted
    || byte_140C37427 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
