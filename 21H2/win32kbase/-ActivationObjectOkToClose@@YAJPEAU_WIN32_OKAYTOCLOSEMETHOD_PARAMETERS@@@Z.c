/*
 * XREFs of ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0142634
 * Callers:
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00C3758 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ActivationObjectOkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  __int64 ObjectType; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = 0;
  ObjectType = ObGetObjectType(*((_QWORD *)a1 + 1));
  if ( ObjectType != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, ObjectType, v5);
  if ( *((_BYTE *)a1 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return (unsigned int)-1073741790;
  return v2;
}
