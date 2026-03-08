/*
 * XREFs of ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0155CDC
 * Callers:
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00CF148 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectOkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ObGetObjectType(*((_QWORD *)a1 + 1)) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 337);
  if ( *((_BYTE *)a1 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return (unsigned int)-1073741790;
  return v2;
}
