/*
 * XREFs of ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C014269C
 * Callers:
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00C3758 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ActivationObjectOpen(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  __int64 ObjectType; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int ProcessSessionId; // eax

  ObjectType = ObGetObjectType(*((_QWORD *)a1 + 2));
  v5 = ExActivationObjectType;
  if ( ObjectType != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, ExActivationObjectType, v4);
  v6 = *((_QWORD *)a1 + 2);
  v7 = 0;
  if ( !*(_QWORD *)(v6 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v5, v4);
  if ( *((_WORD *)a1 + 12) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 1)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 1));
      if ( ProcessSessionId == -1 || ProcessSessionId != *(_DWORD *)v6 )
        return (unsigned int)-1073741790;
    }
  }
  return v7;
}
