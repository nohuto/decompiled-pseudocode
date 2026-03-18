/*
 * XREFs of ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00C3758
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0142634 (-ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C014269C (-ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ForegroundManagement::ActivationObjectCallout(int a1, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = a1 - 37;
  if ( !v2 )
    return ActivationObjectOpen(a2);
  v3 = v2 - 1;
  if ( !v3 )
    return ActivationObjectOkToClose(a2);
  v4 = v3 - 1;
  if ( !v4 )
    return 0LL;
  if ( v4 == 1 )
  {
    if ( ObGetObjectType(*(_QWORD *)a2) != ExActivationObjectType )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(ExActivationObjectType, v5, v6);
    return 0LL;
  }
  return 3221225485LL;
}
