/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14053B810
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  NTSTATUS v3; // edi

  v3 = Exception;
  if ( !FsRtlIsNtstatusExpected(Exception) )
    return GenericException;
  return v3;
}
