BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C37024 && AccessGranted
    || byte_140C37025 && !AccessGranted
    || byte_140C37026 && AccessGranted
    || byte_140C37027 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
