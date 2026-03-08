/*
 * XREFs of WdipSemSqmEnabled @ 0x1409DBBAC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DAEA4 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x1409DB47C (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  REGHANDLE v0; // rdi
  char v1; // bl

  v0 = WdipSemRegHandle;
  v1 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled(v0, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v1;
}
